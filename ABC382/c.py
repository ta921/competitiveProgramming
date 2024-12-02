n, m = input().split(' ')
a = input().split(' ')
b = input().split(' ')

for j in b:
    for i in range(len(a)):
        if (int(a[i]) <= int(j)):
            print(i+1)
            break
        if (i+1 == int(n)):
            print(-1)