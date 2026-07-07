#include <stdio.h>
int canFinish(int* piles, int pilesSize, int h,int k){

    long long hours = 0;
    for(int i=0; i<pilesSize; i++){
        hours += (piles[i] + k-1)/k;
        if(hours>h){
            return 0;
        }
    }

    return 1;
}

int minEatingSpeed(int* piles, int pilesSize, int h) {
    
    int left = 1;
    int right = piles[0];
    for(int i = 1; i<pilesSize; i++)
    {
        if(piles[i]>right)
        {
            right = piles[i];

        }
    }
        while(left<right){
            int mid = left + (right-left)/2;
            if(canFinish(piles,pilesSize,h,mid))
            {
                    right = mid;
            
            }
            else
            {
                left = mid+1;
            }
        }
    return left;
}
