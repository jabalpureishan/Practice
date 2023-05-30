"""
^Question  - Run Length Encoding (GFG)
&Similiar Questions - 
*logic - we continously check if "AB" or "CD" is present in the string
*        if we find it we take the string before it and after it and concatenate them    
!Time complexity - O(n^2)

"""
def encode(arr):
    arr = arr + "$"
    out = ""
    current = arr[0]
    count = 0
    for i in range(len(arr)):
        if arr[i]==current:
            count += 1
        else:
            out += current + str(count)
            current = arr[i]
            count = 1
    return out

print(encode("aaaabbbccc"))