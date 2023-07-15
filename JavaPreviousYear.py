def merge(A,B):
    C = []
    pointerA = 0
    pointerB = 0
    complete = ""
    Inf = float("inf")
    A.append(Inf)
    B.append(Inf)

    loop = len(A) + len(B) - 1


    while(loop>0):
        if A[pointerA]<=B[pointerB]:
            C.append(A[pointerA])
            pointerA += 1
            loop -= 1
        else:
            C.append(B[pointerB])
            pointerB += 1
            loop -= 1

    return C[:-1]

print(merge([12,32,40],[11,44,55]))
[11, 12, 32, 40, 44, 55]
print(merge([11,55,90,130],[-100,-10,-1,0,9,23,88]))
[-100, -10, -1, 0, 9, 11, 23, 55, 88, 90, 130]