#include<bits/stdc++.h>
using namespace std;

class Solution1 {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> map1;
        unordered_set<char> map2;
        // if(s.length()!=t.length()){
        //     return false;
        // }
        int n=s.length();
        for(int i=0;i<n;i++){
            if(!map1[s[i]]){
                if(map2.find(t[i])!=map2.end()){
                    return false;
                }
                map1[s[i]] = t[i];
                map2.insert(t[i]);
            }
            else{
                if(map1[s[i]]!=t[i]){
                    return false;
                }
            }
        }
        return true;
    }
};


class Solution2 {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> map1;
        unordered_map<char,char> map2;
        int n=s.length();
        for(int i=0;i<n;i++){
            if(map1[s[i]] && map1[s[i]]!=t[i]) return false;
            if(map2[t[i]] && map2[t[i]]!=s[i]) return false;
            map1[s[i]]=t[i];
            map2[t[i]]=s[i];
        }
        return true;
    }
};