from itertools import *
length=input()
n=raw_input()
def toStr(numb):
  str1=""
  for u in numb:
    str1=str1+u
  return str1

list1=[]
for u in xrange(1,len(n)+1):
  list1.append(list(combinations( n, u )))
#print list1

numbers=[]
for j in list1:
  for o in j:
    numbers.append(o)
    
num=[]
for e in xrange(len(numbers)):
  num.append(toStr(numbers[e]))
count=0  
for t in num:
  if int(t)%8==0:
    count=count+1
print count  