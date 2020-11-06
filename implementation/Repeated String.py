s=input()
n=int(input())
a1=s.count("a")
if a1==len(s):
    print(n)
else:
    n1=n%len(s)
    n2=n-n1
    n3=n2/len(s)
    print(int((n3*a1)+(s[:n1].count("a"))))
    
