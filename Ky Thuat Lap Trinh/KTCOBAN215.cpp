t=int(input())
for i in range(t):
    a,b=map(int,input().split())
    if(a==0):
        print(1)
    else:
        x=1
        for j in range(a-b+1,a+1):
            x*=j
        print(x)
