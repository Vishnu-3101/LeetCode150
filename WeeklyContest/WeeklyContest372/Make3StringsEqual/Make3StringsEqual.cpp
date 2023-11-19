class Solution {
public:
    int findMinimumOperations(string s1, string s2, string s3) {
        int minlen = min(s1.length(),min(s2.length(),s3.length()));
        int p=0;
        for(int i=0;i<minlen;i++){
            if(s1[p]!=s2[p] || s1[p]!=s3[p] || s2[p]!=s3[p]){
                break;
            }
            p++;
        }
        if(p==0){
            return -1;
        }
        return s1.length()+s2.length()+s3.length()-3*p;
    }
};