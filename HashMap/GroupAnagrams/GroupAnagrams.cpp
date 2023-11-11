#include<bits/stdc++.h>
using namespace std;

// This is the code with better time complexity with space complexity of O(26)~O(1)
class Solution1 {
public:
    string computeWord(string s){
        int arr[26]={0};
        for(auto i:s){
            arr[i-'a']++;
        }
        string ans="";
        for(int i=0;i<26;i++){
            if(arr[i]!=0){
                ans+=((char(i+int('a')))+to_string(arr[i]));
            }
        }
        return ans;
    }

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        unordered_map<string, vector<string>> map1;
        int n=strs.size();
        for(int i=0;i<n;i++){
            string strs2 = computeWord(strs[i]);
            if(map1[strs2].size()!=0){
                map1[strs2].push_back(strs[i]);
            }
            else{
                map1[strs2] = {strs[i]};
            }
        }

        for(auto i:map1){
            result.push_back(i.second);
        }
        return result;
    }
};


// This code using sorting of string and an extra vector to store the sorted strings of every string

class Solution2 {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        vector<string> strs2 = strs;
        unordered_map<string, vector<string>> map1;
        int n=strs.size();
        for(int i=0;i<n;i++){
            sort(strs2[i].begin(),strs2[i].end());
        }
        for(int i=0;i<n;i++){
            // cout<<strs2[i]<<endl;
            if(map1[strs2[i]].size()!=0){
                map1[strs2[i]].push_back(strs[i]);
            }
            else{
                map1[strs2[i]] = {strs[i]};
            }
        }

        for(auto i:map1){
            result.push_back(i.second);
        }
        return result;
    }
};