"""
^Question  - 2461. Maximum Sum of Distinct Subarrays With Length K (Leetcode)
*logic - first make a dictionary of first window and with a pointer on the letter next to the first
*        window and a pointer on the first elemnet on the window we get the next window.
*        character at the front pointer is added to the dict and the one at the back is removed
*        so if the window's of length 3 lets say - "abc" the dict will be - {"a":1,"b":1,"c":1}
*        if the window is "aab" the dict will be {"a":2,"b":1}
*        hence only when the length of dict is equal to that of window all the elements in the window will
*        be distinct.
!Time complexity - O(n)

"""
class Solution:
    def maximumSubarraySum(self, nums: List[int], k: int) -> int:
        length  = len(nums)
        window = k
        slides = length - window 
        Max = 0
        d = {}
        Sum = 0
        for i in nums[:k]:
            Sum += i
            d[i] = d.get(i,0) + 1
        if len(d)==k:
            Max = max(Max,Sum)
        for i in range(slides):
            Add = nums[window]
            Sub = nums[i]
            Sum = Sum + Add - Sub
            d[Add] = d.get(Add,0) + 1
            d[Sub] -= 1
            if d.get(Sub)==0:
                d.pop(Sub)
            if len(d)==k:
                Max = max(Max,Sum)
            window += 1
        return Max