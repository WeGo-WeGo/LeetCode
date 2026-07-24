int maxProfit(int* prices, int pricesSize) {
    int next = 1;
    int sell=0;
    int buy=0;
    for(int curr = 0;curr<pricesSize-1;curr++){
        if(prices[curr]<prices[next]){
            buy+=prices[curr];
            sell+=prices[next];
          
        }
        next++;
       
    }
    return sell-buy;
}
