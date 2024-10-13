# https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/P


count = int(input()) 
numbers = list(map(int, input().split()))

answer = []
for n in numbers:
    test = n
    count = 0
    while test % 2 == 0 and test != 0:
        test=test/2
        count += 1
    answer.append(count)

print(min(answer))
