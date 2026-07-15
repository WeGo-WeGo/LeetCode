int removeDuplicates(int* nums, int numsSize) {
    int k=0;
   
    for(int curr=1;curr<numsSize;curr++){
        if(nums[curr]!=nums[k]){
            k++;
            nums[k]=nums[curr];
         
           
        }
     
    }
    return k+1;
}
