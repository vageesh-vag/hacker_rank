def findMedian(arr,n):
    arr.sort()
    return arr[n//2]
    
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')
    n = int(input())
    arr = list(map(int, input().rstrip().split()))
    result = findMedian(arr,n)
    fptr.write(str(result) + '\n')
    fptr.close()
