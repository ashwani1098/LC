class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        // int n=s.size();
        // int one=0;
        // for(int i=0;i<n;i++){
        //     if(s[i]=='1') one++;
        // }
        // string ans(n,'0');
        // ans[n-1]='1';
        // one--;
        // for(int i=0;i<one;i++){
        //     ans[i]='1';
        // }
        int one=count(s.begin(),s.end(),'1');
        string ans(s.size(),'0');
        ans.back()='1';
        fill(ans.begin(),ans.begin()+one-1,'1');
        return ans;
        
    }
};