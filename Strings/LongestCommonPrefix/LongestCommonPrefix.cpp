#include<bits/stdc++.h>
using namespace std;

// We can do this using trie data structure

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = strs[0];
        for(int i=1;i<strs.size();i++){
            string currentstr = strs[i];
            int j=0;
            while(j<prefix.length() && j<currentstr.length() && prefix[j]==currentstr[j]){
                j++;
            }
            prefix = prefix.substr(0,j);
            if(prefix.empty()){
                return "";
            }
        }
        return prefix;
    }
};