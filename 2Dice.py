def dice(num):
    a = [1,2,3,4,5,6]
    b = a
    count = 0
    for i in a:
        for j in b:
            if i+j==num:
                count += 1
    return count

print(dice(8))
print(dice(15))
print(dice(3))