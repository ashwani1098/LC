class Solution {
public:
    string truncateSentence(string s, int k) {
        int countSpace=0;
        string ans="";
        for(int i=0;i<s.size();i++){
            if(s[i]==' ') countSpace++;
            if(countSpace<k){
                ans.push_back(s[i]);
            }
            else break;
        }
        return ans;
    }
};