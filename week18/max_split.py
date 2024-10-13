# https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/S?fbclid=IwAR1qi6o8WBDOrdzcZ--U5YO_40SSQmmLbZ8jggB6CFIRqog1ukVL_Z2wK2s

inp = input()
count = 0
count_local = 0
answer = []
string = ''
for s in inp:
        if s == 'R':
                string+='R'
                count_local-=1
        else:
                string+='L'
                count_local+=1
        if count_local == 0:
                count+=1
                answer.append(string)
                string=''
print(count)
for ans in answer:
        print(ans)
