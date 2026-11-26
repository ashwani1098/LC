class Solution {
public:
    int countConsistent(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            int bitwiseAnd=nums[i];
            int mn=nums[i];
            for(int j=i;j<nums.size();j++){
                bitwiseAnd &=nums[j];
                mn=min(nums[j],mn);
                if(bitwiseAnd==mn) ans++;
            }
            
        }
        return ans;
    }
};