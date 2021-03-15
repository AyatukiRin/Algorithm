def collide_checker(str1: str, str2: str) -> int:
    l1 = len(str1)
    l2 = len(str2)

    for i in range(1, min(l1, l2)):
        found: bool = True
        for j in range(i):
            if str1[l1 - i + j] != str2[j]:
                found = False
                break
        if found:
            return i
    return 0


def dfs_search(curr_str: str, curr_len: int) -> None:
    global max_len
    global data
    max_len = max(max_len, curr_len)
    for s in data:
        used = data[s]
        if used >= 2:
            continue
        collided = collide_checker(curr_str, s)
        if collided > 0:
            data[s] += 1
            dfs_search(s, curr_len + len(s) - collided)
            data[s] -= 1


if __name__ == '__main__':
    n = int(input())

    data = {}
    for i in range(n):
        data[input()] = 0

    begin = input()
    data[begin] = 0
    max_len = 0

    dfs_search(' ' + begin, 1)

    print(max_len)