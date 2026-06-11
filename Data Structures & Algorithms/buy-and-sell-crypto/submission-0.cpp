class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int size = prices.size();
        int currentmin =INT_MAX;
        int max =INT_MIN;
        vector<int> min(size);
        for(int i =0;i<size;i++){
            if(prices[i]<currentmin){
                currentmin=prices[i];
            }
            min[i]=currentmin;
        }
        for(int i = size-1;i>=0;i--){
            if(prices[i]-min[i] > max){
                max= prices[i]-min[i];
            }
        }
        return max;
    }
};
