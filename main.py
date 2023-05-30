nums = [2,3,-2,4]
Max = nums[0]
max_ending_here = nums[0]
min_ending_here = nums[0]
for i in range(1, len(nums)):
    max_temp = max(nums[i], max_ending_here * nums[i], min_ending_here * nums[i])
    print(f"Max_temp:{max_temp} Nums: {nums[i]}, Max ending*nums :{max_ending_here * nums[i]},Min ending*nums :{min_ending_here * nums[i]}")
    min_temp = min(nums[i], max_ending_here * nums[i], min_ending_here * nums[i])
    print(f"Min_temp:{min_temp} Nums: {nums[i]}, Max ending*nums :{max_ending_here * nums[i]},Min ending*nums  {min_ending_here * nums[i]}")
    print(f"Before : Max:{Max},max_temp:{max_temp}")
    Max = max(Max, max_temp)
    print(f"After : Max:{Max},max_temp:{max_temp}")
    max_ending_here = max_temp
    print("max ending :",max_ending_here)
    min_ending_here = min_temp
    print("min ending :",min_ending_here)
print(Max)
