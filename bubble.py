list1 = [10,3,1,23,8,13,34]
n = len(list1)
for i in range(0,n-1):
    for j in range(0,n-i-1):
        if list1[j]<list1[j+1]:
            list1[j],list1[j+1] = list1[j+1],list1[j]
        print(list1)
