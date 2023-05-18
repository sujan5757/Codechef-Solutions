# cook your dish here
# cook your dish here
def free(sequence):
    l = len(sequence)
    for w in range(l-2):
        for q in range(w+1, l-1):
            for z in range(q+1,l):
                if(sequence[q] - sequence[w]) == (sequence[z] - sequence[q]):
                    return False
    return True
u = int(input())
for _ in range(u):
    l = int(input())
    sequence = list(map(int , input().split()))
    if free(sequence):
        print("YES")
    else:
        print("NO")
