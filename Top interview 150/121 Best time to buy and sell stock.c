int maxProfit(int* prices, int pricesSize) {
    int min_price = INT_MAX;
    int max_price = 0;
    for(int i=0;i<pricesSize;i++){
        if(prices[i]<min_price){
            min_price = prices[i];
        }

        else{
            if(prices[i]-min_price>max_price)
            max_price = prices[i]-min_price;
        }
    }
    return  max_price;
}
