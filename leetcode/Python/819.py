import re
from collections import Counter

paragraph = "Bob hit a ball, the hit BALL flew far after it was hit."
banned = ["hit"]


def ans(paragraph: str, banned: list) -> str:
    words = [word for word in re.sub('[^\w]', ' ', paragraph)
        .lower().split() if word not in banned]

    count = Counter(words)

    return count.most_common(1)[0][0]


if __name__ == '__main__':
    print(ans(paragraph, banned))
