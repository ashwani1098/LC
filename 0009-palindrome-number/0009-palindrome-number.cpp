class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        if(x<10) return true;
        int orginal=x;
        long long r=0;
        while(x>0){
            r=r*10+(x%10);
            x/=10;
        }
        return orginal==r;
    }
};