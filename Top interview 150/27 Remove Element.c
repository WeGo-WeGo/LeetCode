int removeElement(int* nums, int numsSize, int val) {
    int k=0;
    int curr = 0;
    while(curr<numsSize){
        if(nums[curr]==val){
            
            
            curr++;
        }
        else{
            nums[k]= nums[curr];
            k++;
            curr++;
        }
    }
    return k;
}
