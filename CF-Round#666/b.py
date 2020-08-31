def cost(a, b):
    ans=0
    for i, j in enumerate(a):
        ans+=abs(j-pow(b, i))
    return ans

while True:
    try:
        n = int(input())
        a = list(map(int, input().split()))
        a.sort()
        c1=int(pow(a[-1], 1/(n-1)))
        print(min(cost(a, c1), cost(a, c1+1)))
    except Exception as e:
        break
