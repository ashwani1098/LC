class Solution {
public:
    int sumOfDigit(int n){
        int sum=0;
        while(n>0){
            sum+=n%10;
            n/=10;
        }
        return sum;
    }
    int minElement(vector<int>& nums) {
        int mn=sumOfDigit(nums[0]);
        for(int i=1;i<nums.size();i++){
            int curr=sumOfDigit(nums[i]);
            mn=min(mn,curr);
        }
        return mn;
    }
};