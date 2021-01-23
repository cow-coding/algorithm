def ans1(s:list):
    left, right = 0, len(s) - 1

    while left < right:
        s[left], s[right] = s[right], s[left]
        left += 1
        right -= 1

def ans2(s:list):
    s = s.reverse()

if __name__ == '__main__':
    st = ["h", "e", "l", "l", "o"]

    ans1(st)
    print(st)