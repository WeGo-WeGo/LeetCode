bool OK(int* weights, int weightsSize, int days, int capacity){
    int day= 1;
    int load = 0;
    for(int i=0;i<weightsSize; i++){
        
        if(load+weights[i]>capacity){
            day++;
            load = 0;
        }
        load+=weights[i];
    } 

    if(day>days){
        return false;
    }
    return true;   
}
int shipWithinDays(int* weights, int weightsSize, int days) {
    int left =0;
    int right = 0;
    for(int i=0;i<weightsSize;i++){
        right+=weights[i];
        if(weights[i]>left){
            left = weights[i];
        }
    }
    int ans = right;
    while(left<=right){
        int mid = left + (right-left)/2;
        if(OK(weights, weightsSize, days,mid)){
            ans = mid;
            right = mid-1;
        }
        else{
            left = mid+1;
        }
    }
    return ans;
}
