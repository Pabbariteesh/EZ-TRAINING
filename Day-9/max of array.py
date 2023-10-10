def sum_(l,si,li):
    if si==li:
        return l[si]
    if si>li:
        return -1
    mid=(si+1)//2
    return max(sum_(l,si,mid),sum_(l,mid+1,li))
l=list(map(int,input().split()))
print(sum_(l,0,len(l)-1))
