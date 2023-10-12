#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        int wordlen = words[0].length();
        int totallen = wordlen*(words.size());
        vector<int> result;
        if(s.length()<totallen){
            return result;
        }
        unordered_map<string,int> freq_map;
        for(int i=0;i<words.size();i++){
            freq_map[words[i]]++;
        }
        for(int i=0;i<=s.length()-totallen;i++){
            unordered_map<string,int> freq_copy = freq_map;
            int t;
            for(t=0;t<words.size();t++){
                string substr = s.substr(i+t*wordlen,wordlen);
                if(freq_copy.count(substr)==0){
                    break;
                }
                else{
                    if(freq_copy[substr]!=0){
                        freq_copy[substr]--;
                    }
                    else{
                        break;
                    }
                }
            }
            if(t==words.size()){
                result.push_back(i);
            }
        }
        return result;
    }
};

