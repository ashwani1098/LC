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
    int differenceOfSum(vector<int>& nums) {
        int sum=accumulate(nums.begin(),nums.end(),0);
        int digitSum=0;
        for(int i=0;i<nums.size();i++){
            digitSum+=sumOfDigit(nums[i]);
        }
        return abs(digitSum-sum);

    }
};