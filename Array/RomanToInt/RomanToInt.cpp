#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        int n = s.size();
        int result = 0;
        unordered_map<char,int> map;
        map['I'] = 1;
        map['V'] = 5;
        map['X'] = 10;
        map['L']= 50;
        map['C'] = 100;
        map['D']= 500;
        map['M']= 1000;
        for(int i=0;i<n-1;i++){
            if(map[s[i]]<map[s[i+1]]){
                result+=(-map[s[i]]);
            }
            else{
                result+=(map[s[i]]);
            }
        }
        result+=map[s[n-1]];
        return result;
    }
};