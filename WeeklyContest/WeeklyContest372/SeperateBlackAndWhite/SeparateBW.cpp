class Solution {
public:
    long long minimumSteps(string s) {
        long long minMoves=0;
        int n=s.length();
        int left=0;
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                minMoves+=(i-left);
                left++;
            }
        }
        return minMoves;
    }
};