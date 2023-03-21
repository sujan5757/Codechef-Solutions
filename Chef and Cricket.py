# cook your dish here
R, O, C = map(int, input().split())
if C + (20 - O) * 36 > R:
    print("YES")
else:
    print("NO")
