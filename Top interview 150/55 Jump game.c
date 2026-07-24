bool canJump(int* nums, int numsSize) {
    int max_reach = 0;
    for(int i=0;i<numsSize;i++){
        if(max_reach<i){
            return false;
        }
       
        if(max_reach<nums[i]+i){
            max_reach = nums[i]+i;
        }
        if(max_reach>numsSize){
            return true;
        } 
        
    }
    return true;
}
