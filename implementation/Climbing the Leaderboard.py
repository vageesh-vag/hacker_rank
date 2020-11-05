rank=int(input())
ranked=[-1]
for i in input().split():
    if int(i)!=ranked[-1]:
        ranked.append(int(i)) 
player=int(input())
playered=[int(i) for i in input().split()]
for i in playered:
    while  (len(ranked)>1)and(i>=ranked[-1]):
        ranked.pop()
    print(len(ranked))
