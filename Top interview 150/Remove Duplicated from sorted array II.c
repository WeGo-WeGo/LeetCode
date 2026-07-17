int removeDuplicates(int* nums, int numsSize) {
    int curr=1;
    if (numsSize <= 2) return numsSize;
    for(int k=2;k<numsSize;k++){
        if(!(nums[k]==nums[curr]&&nums[k]==nums[curr-1]))
            curr++;
            nums[curr]=nums[k];
       
    }
    return curr+1;
}
