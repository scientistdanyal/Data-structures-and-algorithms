def sorted_arry(nums):
    n = len(nums)

    j = 1
    for i in range(1, len(nums)):
        if nums[i] != nums[i - 1]:
            nums[j] = nums[i]
            j += 1
        else:
            del nums[j]    
    print(nums)
    return j




nums = [1,1,2,2,2,3,3,3]

print(sorted_arry(nums))