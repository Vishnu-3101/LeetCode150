#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int l1 = ransomNote.length();
        int l2 = magazine.length();
        if(l1>l2){
            return false;
        }
        unordered_map<char,int> map1;
        unordered_map<char,int> map2;
        for(int i=0;i<l1;i++){
            map1[ransomNote[i]]++;
        }
        for(int i=0;i<l2;i++){
            map2[magazine[i]]++;
        }
        for(auto i: map1){
            if(i.second>map2[i.first]){
                return false;
            }
        }
        return true;
    }
};