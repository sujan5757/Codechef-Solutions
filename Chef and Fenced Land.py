# cook your dish here
# cook your dish here
# cook your dish here
for _ in range(int(input())):
    n=int(input())
    l=list(map(int,input().split()))
    l.sort(reverse=True)
    t=[]
    for i in l:
        if l.count(i)>=2:
            t.append(i)
    if len(t)>=4:
        rect=[]
        for i in t:
           
            if t.count(i)==3:
                rect.append(i)
                rect.append(i)
                t.remove(i)
                t.remove(i)
                t.remove(i)
            else:
                rect.append(i)
                rect.append(i)
                t.remove(i)
                t.remove(i)
            if len(rect)==4:
                break
        if len(rect)>=4:
            print(rect[0]*rect[2])
    else:
        print(-1)
