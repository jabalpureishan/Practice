"""def findRollOut(s,roll):
        # Your code goes here
    for i in roll:
        print("i:",i)
        for j in range(i):
            print("j:",j,print()

            if s[i]=="z":
                new = "a"
            else:
                new = chr(ord(s[i])+1)
            s = s[:i] + new + s[i+1:]
    return s"""
"""move = [0]*4
roll = (1,1,3,4)
for i in roll:
    print("I:",i)
    for j in range(0,i):
        print("j:",j)
        move[j] += 1
        print("move:",move)
print(move)"""
"""print(chr(ord("b")+14))"""
"""import math
a = 36/26
print(math.ceil(a))"""
initial_value = 174
result = initial_value - (26 * ((initial_value - 122) // 26+1))
print(result)
