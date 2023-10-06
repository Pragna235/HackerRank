def repeatedString(s, n):
    r = 0
    l = len(s)
    for i in range(0, l):
        if s[i] == 'a':
            r+= 1
    r*= int(n / l)
    for i in range(0, n % l):
        if s[i] == 'a':
            r+= 1
    return r

s=input()
n=int(input())
print(repeatedString(s,n))
