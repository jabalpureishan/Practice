"""
^Question  - 2696. Minimum String Length After Removing Substrings (Leetcode)
*logic - we continously check if "AB" or "CD" is present in the string
*        if we find it we take the string before it and after it and concatenate them    
!Time complexity - O(n^2)

"""
class Solution:
    def minLength(self, s: str) -> int:
        left = True
        while left:
            index = 0
            left = False
            length = len(s)
            while index<(length-1):
                if s[index:index+2]=="AB" or s[index:index+2]=="CD":
                    s = s[:index] + s[index+2:]
                    left = True
                else:
                    index += 1
        return len(s)
        