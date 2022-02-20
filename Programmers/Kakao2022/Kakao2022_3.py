import math

def hour_to_min(time1, time2):
    total1 = int(time1.split(':')[0]) * 60 + int(time1.split(':')[1])
    total2 = int(time2.split(':')[0]) * 60 + int(time2.split(':')[1])
    
    return abs(total2 - total1)

def solution(fees, records):
    answer = []
    
    answer_dict = {}
    car_dict = {}
    
    for record in records:
        time = record.split()[0]
        number = int(record.split()[1])
        status = record.split()[2]
        
        if status == "IN":
            car_dict[number] = [time]
            
            if number not in answer_dict:
                answer_dict[number] = 0
        else:
            start = car_dict[number].pop()
            
            answer_dict[number] += hour_to_min(start, time)
            
    for car, v in car_dict.items():
        if len(v) > 0:
            start = car_dict[car].pop()
            
            answer_dict[car] += hour_to_min(start, "23:59")
    
    pays = {}
    
    for k, v in answer_dict.items():
        if v > fees[0]:
            pays[k] = fees[1] + math.ceil((answer_dict[k]-fees[0]) / fees[2]) * fees[3]
        else:
            pays[k] = fees[1]
    
    for item in sorted(pays.items(), key=lambda x: x[0]):
        answer.append(item[1])
    
    return answer