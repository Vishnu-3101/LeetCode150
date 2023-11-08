#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> words;
        int n = pattern.length();
        int m = s.length();
        int start=0;
        for(int i=0;i<m;i++){
            if(s[i]==' '){
                words.push_back(s.substr(start,i-start));
                start=i+1;
            }
        }
        words.push_back(s.substr(start,m-start));
        if(words.size()!=pattern.length()) return false;
        unordered_map<char,string> map1;
        unordered_map<string,char> map2;
        for(int i=0;i<n;i++){
            if(map1[pattern[i]].length()!=0 && map1[pattern[i]]!=words[i]) return false;
            if(map2[words[i]] && map2[words[i]]!=pattern[i]) return false;
            map1[pattern[i]]=words[i];
            map2[words[i]] = pattern[i];
        }
        return true;
    }
};