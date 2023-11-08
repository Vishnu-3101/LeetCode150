#include<bits/stdc++.h>
using namespace std;

class Solution1 {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(t==s){
            return true;
        }
        return false;
    }
};

class Solution2 {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> freq_map;
        int n= s.length();
        if(s.length()!=t.length()) return false;
        for(int i=0;i<n;i++){
            freq_map[s[i]]++;
        }
        for(int i=0;i<n;i++){
            if(!freq_map[t[i]]) return false;
            freq_map[t[i]]--;
        }
        return true;
    }
};