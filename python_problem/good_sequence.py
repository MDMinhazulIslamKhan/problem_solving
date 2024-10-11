# https://atcoder.jp/contests/arc087/tasks/arc087_a
count = int(input()) 
inp = {}

numbers = list(map(int, input().split()))

for n in numbers:
    if n in inp:
        inp[n] += 1  
    else:
        inp[n] = 1   

ans = 0

for key, value in inp.items():
    if key > value:
        ans+= value
    else:
        ans+=(value-key)

print(ans)
