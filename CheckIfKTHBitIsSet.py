def check(num,k):
    return num&(1<<k)!=0

print(check(241,1))
print(check(241,0))
