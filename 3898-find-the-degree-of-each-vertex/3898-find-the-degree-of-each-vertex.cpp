class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        vector<int>ans;
        for(int i=0;i<matrix.size();i++){
            
                int a=accumulate(matrix[i].begin(),matrix[i].end(),0);
                ans.push_back(a);
            
        }
        return ans;
    }
};