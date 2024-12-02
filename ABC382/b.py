count = 0
n,d = input().split(' ')
s = input()

print(s[::-1].replace("@",".",int(d))[::-1])