class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int>arr;
        sort(nums.begin(),nums.end());
        while(nums.size()>0){
            arr.push_back(nums[1]);
            arr.push_back(nums[0]);
            nums.erase(nums.begin(),nums.begin()+2);
        }
        return arr;
    }
};