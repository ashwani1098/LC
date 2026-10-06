class Solution {
public:
    int maxDistinct(string s) {
        set<char> ans;
        for(char ch:s){
            ans.insert(ch);
        }
        return ans.size();
    }
};