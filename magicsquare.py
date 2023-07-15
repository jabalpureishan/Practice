def check(array):
    length = len(array)
    num = sum(array[0])
    for i in range(1,length):
        if sum(array[i])!=num:
            return False
    for i in range(length):
        curr = 0
        for j in range(length):
            curr += array[j][i]
        if curr!=num:
            return False
    a,b=0,0
    curr = 0
    for i in range(length):
        curr += array[a][b]
        a += 1
        b += 1
    if curr!=num:
        return False
    a,b,curr=0,length-1,0
    for i in range(length):
        curr += array[a][b]
        a += 1
        b -= 1
    if curr!=num:
        return False
    return True

print(check([[4,9,2],[3,5,7],[8,1,6]]))
print(check([[2,7,6],[9,5,1],[4,3,8]]))
print(check([[1,2,2],[2,2,1],[2,1,2]]))
print(check([[4,14,15,1],[9,7,6,12],[5,11,10,8],[16,2,3,13]]))
    

