m=10**9+7
def Try(a,b):
    if b==0: return 1
    if b==1: return a
    x=Try(a,b//2)
    if b%2==0: return x*x%m
    else:return ((a*x)%m*x)%m
t=int(input())
for i in range(t):
    a,b=map(int,input().split())
    print(Try(a,b))
    
