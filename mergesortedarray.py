A = [12,32,40]
B = [11,44,50]
out = []
for i in range(3):
    if A[i]>=B[i]:
        out.append(B[i])
        out.append(A[i])
    else:
        out.append(A[i])
        out.append(B[i])
print(out)