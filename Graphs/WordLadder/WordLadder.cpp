#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool oneLetterDiff(string s,string t){
        int count=0;
        for(int i=0;i<s.size();i++){
            if(s[i]!=t[i]) count++;
            if(count>1) return false;
        }
        return true;
    }
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        queue<string> q;
        q.push(beginWord);
        int n = wordList.size();
        vector<bool> visited(n,false);
        int seq=0;
        while(!q.empty()){
            int s= q.size();
            for(int j=0;j<s;j++){
                string node = q.front();
                q.pop();
                if(node==endWord) return seq+1;
                for(int i=0;i<n;i++){
                    if(!visited[i]){
                        if(oneLetterDiff(node,wordList[i])){
                            visited[i]=true;
                            q.push(wordList[i]);
                        }
                    }
                    
                }
            }
            seq++;
        }
        return 0;
    }
};