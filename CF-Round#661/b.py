while True:
    try:
        for _ in range(int(input())):
            n = int(input())
            a = list(map(int, input().split()))
            b = list(map(int, input().split()))
            mna = min(a)
            mnb = min(b)
            ans=0
            for i in range(n):
                xa = a[i]-mna
                xb = b[i]-mnb
                mnx = min(xa, xb)
                ans+=mnx
                xa-=mnx
                xb-=mnx
                ans+=(xa+xb)
            print(ans)
    except:
        break
