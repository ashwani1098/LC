class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int>ans;
        for(int i=0;i<prices.size();i++){
            bool found=true;
            int j=i+1;
            while(j<prices.size()){
                if(prices[j]<=prices[i]){
                    ans.push_back(prices[i]-prices[j]);
                    found=false;
                    break;
                }
                j++; 
            }
            if(found){
                ans.push_back(prices[i]);
            }   
        }
        return ans;
    }
};