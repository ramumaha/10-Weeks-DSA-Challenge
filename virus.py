def curr_cases(y,x,index):
    total=values[index-1]*(x+1)
    if(index-y>0):
        total-=values[index-y]
    return total



n,y, x = [int(x) for x in input().split()] 
maxer=-1
queries=[]
for i in range (n):
    q=int(input())
    queries.append(q)
    maxer=max(maxer,q)
values=[]
values.append(0)
values.append(1)
for i in range (2,maxer+1):
    values.append(curr_cases(y,x,i))
for i in range(0,len(queries)):
    print(values[queries[i]])