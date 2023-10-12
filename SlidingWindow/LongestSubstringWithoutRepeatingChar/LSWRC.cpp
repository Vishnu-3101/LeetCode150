#include<bits/stdc++.h>
using namespace std;

// using set to store unique characters
class Solution1 {
public:
    int lengthOfLongestSubstring(string s) {
        int p=0;
        int i=0;
        int maxlen=0;
        unordered_set<char> charset;
        while(i<s.length()){
            if(charset.find(s[i])==charset.end()){
                charset.insert(s[i]);
                maxlen = max(maxlen,i-p+1);
                i++;
            }
            else{
                charset.erase(s[p]);
                p++;
            }
        }
        return maxlen;
    }
};

// using map to store unique char. This is much effecient that using set
class Solution2 {
public:
    int lengthOfLongestSubstring(string s) {
        int p=0;
        int i=0;
        int maxlen=0;
        map<char,int> charset;
        while(i<s.length()){
            if(charset.find(s[i])==charset.end()){
                charset.insert({s[i],i});
            }
            else{
                if(p<charset[s[i]]+1){
                    p=charset[s[i]]+1;
                }
                charset[s[i]]=i;
            }
            maxlen = max(maxlen,i-p+1);
            i++;
        }
        return maxlen;
    }
};