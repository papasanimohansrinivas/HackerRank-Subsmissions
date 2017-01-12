from itertools import product

input1=int(raw_input())
list1=(raw_input().split())
list2=[]
for i in list1:
    list2.append(int(i))

list2=[1,2,5]
try:
    rep = 0
    while (len(list2)!=0):
        B = []
        for x in xrange(len(list2)):
            for y in xrange(len(list2)):
                if(list2[x] != list2[y] and x!=y):
                    B.append(abs(list2[x]-list2[y]))
        list2 = list(set(B))
        rep = rep + 1
except():
    print -1
print rep
