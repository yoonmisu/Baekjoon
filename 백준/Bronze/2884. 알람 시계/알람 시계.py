h,m=map(int,input().split())
if m >= 45:
    m -= 45
else:
    m = (60+m)-45
    h -= 1
    if h < 0:
        h = 23
print(h, m)
    