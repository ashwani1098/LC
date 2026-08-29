class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>ans;
        int zero=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) zero++;
            else ans.push_back(nums[i]);
        }
        for(int i =0;i<zero;i++){
            ans.push_back(0);
        }
        nums=ans;
    }
};