input()
a = [x for x in input().split()]
b = [x for x in input().split()]
aDict = dict()
bDict = dict()
for val in a:
    if val in aDict:
        aDict[val] += 1
    else:
        aDict[val] = 1
for val in b:
    if val in bDict:
        bDict[val] += 1
    else:
        bDict[val] = 1

total = 0
for val in aDict:
    while aDict[val] > 0 and val in bDict and bDict[val] > 0:
        total += 1
        aDict[val] -= 1
        bDict[val] -= 1

if total == len(a):
    print(total - 1)
else:
    print(total + 1)
