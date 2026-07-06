int searchInsert(int* nums, int numsSize, int target) {
    int left = 0;
    int right = numsSize -1;
    int mid = 0;
    while(left<=right)
    {
        mid =left+(right-left)/2;
        if(target<nums[mid])
        {
            right = mid-1;
        }
        else if(nums[mid]<target)
        {
            left = mid+1;

        }
        else {
            return mid;
        }

       
    }
    return left;
}
