import re
from typing import Deque
from zope.interface.common import collections

s = "A man, a plan, a canal: Panama"

def ans1(s: str) -> bool:
    text = []
    for char in s:
        if s.isalnum():
            text.append(char.lower())

    while len(text) > 1:
        if text.pop(0) != text.pop():
            return False

    return True

def ans2(s: str) -> bool:
    text: Deque = collections.deque()

    for char in s:
        if s.isalnum():
            text.append(char.lower())

    while len(text) > 1:
        if text.pop(0) != text.pop():
            return False

    return True

def ans3(s: str) -> bool:
    s = s.lower()
    s = re.sub('^[a-z0-9]', '', s)

    return s == s[::-1] #[::-1] is reverse the list

if __name__ == '__main__':
    ans3(s)
