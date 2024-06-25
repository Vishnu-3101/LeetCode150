class Solution {
public:
    int minimumOperationsToMakeKPeriodic(string word, int k) {
        unordered_map<string,int> map;
        int n = word.size();
        int rem = n/k;
        int maxLen = 0;
        for(int i=0;i<n;i=i+k){
            string str = word.substr(i,k);
            // cout<<str<<endl;
            map[str]++;
            maxLen = max(maxLen,map[str]);
            // cout<<maxLen<<endl;
        }
        return rem-maxLen;
    }
};