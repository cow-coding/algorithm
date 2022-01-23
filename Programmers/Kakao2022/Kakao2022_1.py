def solution(id_list, report, k):
    answer = []
    user_list = {}
    banned_list = {}
    
    for _id in id_list:
        user_list[_id] = []
        banned_list[_id] = 0
        
    for rep in report:
        user1 = rep.split()[0]
        user2 = rep.split()[1]
        
        if user2 not in user_list[user1]:
            banned_list[user2] += 1
            user_list[user1].append(user2)
            
    ban_list = []
    
    for id, count in banned_list.items():
        if count >= k:
            ban_list.append(id)
        
    for id, lists in user_list.items():
        cnt = 0
        for ban in ban_list:
            if ban in lists:
                cnt += 1 
        
        answer.append(cnt)
    
    return answer