logs = ["dig1 8 1 5 1","let1 art can","dig2 3 6","let2 own kit dig","let3 art zero"]

def ans1(logs:list) -> list:
    digit_log = []
    letter_log = []
    for log in logs:
        if log.split()[1].isdigit():
            digit_log.append(log)
        else:
            letter_log.append(log)

    letter_log.sort(key=lambda x: (x.split()[1:], x.split()[0]))

    return letter_log + digit_log

if __name__ == '__main__':
    ans = ans1(logs)
    print(ans)