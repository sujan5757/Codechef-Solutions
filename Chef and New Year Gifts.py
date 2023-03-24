# cook your dish here
t= int(input())
for i in range(t):
  n=int(input())  
  a=list(map(int,input().split()))
  a.sort()
  m=max(a)
  for i in range(len(a)-1):
      if a[i+1]-a[i]<m:
          m=a[i+1]-a[i]
  print(m)
