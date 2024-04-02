#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void FindCombinations(string num, int n,unordered_map<char,string> &map, string combination, vector<string> &result){
        if(n==num.size()) {
            result.push_back(combination);
            return;
        }
        for(int i=0;i<map[num[n]].size();i++){
            string s=combination+map[num[n]][i];
            FindCombinations(num,n+1,map,s,result);
        }
    }
    vector<string> letterCombinations(string digits) {
        if(digits=="") return {};
        unordered_map<char,string> map;
        map['2'] = "abc";
        map['3'] = "def";
        map['4'] = "ghi";
        map['5'] = "jkl";
        map['6'] = "mno";
        map['7'] = "pqrs";
        map['8'] = "tuv";
        map['9'] = "wxyz";
        vector<string> result;
        FindCombinations(digits,0,map,"",result);
        return result;
    }
};