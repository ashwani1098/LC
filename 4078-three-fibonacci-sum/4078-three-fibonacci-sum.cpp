class Solution {
public:
    bool threeFibonacciSum(int n) {
        int x=0,y=1,z=1;
        while(x+y+z<n){
            int next=y+z;
            x=y;
            y=z;
            z=next;
        }
        if(x+y+z==n) return true;
        return false;
    }
};