n=int(input())
if n==0:
    print(1)
else:
    a=2**(bin(n)[2:].count('0'))
    print(a)
