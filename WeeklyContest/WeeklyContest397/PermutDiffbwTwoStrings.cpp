class Solution {
public:
    int findPermutationDifference(string s, string t) {
        int n = s.size();
        unordered_map<char,int> map;
        for(int i=0;i<n;i++){
            map[s[i]]=i;
        }
        int ans = 0;
        for(int i=0;i<n;i++){
            ans+=abs(map[t[i]]-i);
        }
        return ans;
    }
};