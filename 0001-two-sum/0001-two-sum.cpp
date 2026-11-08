class Solution {
    // use map for O(n)
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i,j=0;
        vector<int>ans(2);
        int n=nums.size();
        for(i=0;i<n-1;i++){
            for(j=i+1;j<n;j++){
                if(nums[j]==target-nums[i]){
                    ans[0]=i;
                    ans[1]=j;
                    return ans;
                }
                    
                
            }
        }
        return {};
    }
};