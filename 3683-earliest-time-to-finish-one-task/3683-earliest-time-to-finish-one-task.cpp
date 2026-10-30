class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        int ans=tasks[0][0]+tasks[0][1];
        for(int i=1;i<tasks.size();i++){
            int sum=tasks[i][0]+tasks[i][1];
            ans=min(ans,sum);
        }
        return ans;
    }
};