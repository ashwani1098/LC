class Solution {
public:
    int secondsBetweenTimes(string startTime, string endTime) {
        int h=stoi(endTime.substr(0,2))-stoi(startTime.substr(0,2));
        int m=stoi(endTime.substr(3,2))-stoi(startTime.substr(3,2));
        int s=stoi(endTime.substr(6,2))-stoi(startTime.substr(6,2));
        int ans=h*3600 + m*60 + s;
        // if(ans<0) total=total+(24*3600);
        return ans;
        
    }
};