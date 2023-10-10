import random
def fun(l,r,c,n):
    if r<n and c<n and l[r][c]==1:
        l[r][c]=0
        fun(l,r,c+1,n)
        fun(l,r+1,c+1,n)
    return
n = int(input())
l=[]
for i in range(n):
    temp=[]
    for j in range(n):
        temp.append(random.randint(0,1))
    l.append(temp)

for i in l:
    print(" ".join(str(i)))

print("-----------------------")

c=0
for i in range(n):
    for j in range(n):
        if l[i][j] != 0:
            c+=1
            fun(l,i,j,n)

for i in l:
    print(" ".join(str(i)))

print("Islands are: ",c)