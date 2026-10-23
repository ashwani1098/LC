class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int ans=0;
        for(int i=low;i<=high;i++){
            string s=to_string(i);
            int n=s.length();
            if(n%2!=0){
                continue;
            }
            int l=0,r=0;
            for(int j=0;j<n;j++){
                if(j<n/2) l+=s[j]-'0';
                else r+=s[j]-'0';
            }
            if(l==r) ans++;
        }
        return ans;
    }
};