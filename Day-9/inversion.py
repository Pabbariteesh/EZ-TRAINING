def inversion(x):
    for i in range (len(x)):
        for j in range (len(x)):
            if x[i]>x[j] and i<=j:
                print([x[i],x[j]])
x=list(map(int,input().split()))
inversion(x)