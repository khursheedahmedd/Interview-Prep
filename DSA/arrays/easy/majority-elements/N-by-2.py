#Given an array of N integers, write a program to return an element that occurs more than N/2 times in the given array. You may consider that such an element always exists in the array.

def majorityElements(nums, size):
    i =0
    while(i < size):
        count = 0
        j =0
        while(j < size):
            if(nums[j] == nums[i]):
                count += 1
            j+=1
        if(count > size/2):
            return nums[i]
        i+=1
    return -1


nums = [4,4,2,4,3,4,4,3,2,4]
size = len(nums)

m = majorityElements(nums, size)

if(m == -1):
    print("No majority element")
else:
    print("Majority element is: ", m)