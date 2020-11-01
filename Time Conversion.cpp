import os
import sys
def timeConversion(s):
    a=int(s[0]+s[1])
    if a==12 and s[-2]=='P':
        return s[:-2]
    elif a==12 and s[-2]=='A':
        return '00'+s[2:-2]
    elif s[-2]=='A':
        return s[:-2]
    elif s[-2]=='P':
        b=12-a
        return str(24-b)+s[2:-2]
if __name__ == '__main__':
    f = open(os.environ['OUTPUT_PATH'], 'w')
    s = input()
    result = timeConversion(s)
    f.write(result + '\n')
    f.close()
