#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        int len = words[0].size();
        int start=0;
        vector<string> result;
        vector<string> line;
        line.push_back(words[0]);
        int n=words.size();
        for(int i=1;i<n;i++){
            int l = line.size();
            if(len+words[i].size()+(l-1)>=maxWidth){
                string finalWord="";
                int extraspaces = maxWidth - len;
                // cout<<extraspaces<<endl;
                // cout<<numWords<<endl;
                int spaceBWwords = extraspaces/max(1,l-1);
                int leftSpaces = extraspaces%max(1,l-1);
                for(int j=0;j<max(1,l-1);j++){
                    finalWord+=line[j];
                    for(int k=0;k<spaceBWwords;k++){
                        finalWord+=' ';
                    }
                    if(leftSpaces){
                        finalWord+=' ';
                        leftSpaces--;
                    }
                }
                if(l>1) finalWord+=line[l-1];
                result.push_back(finalWord);
                len = 0;
                line={};
            }
            len+=words[i].length();
            line.push_back(words[i]);
        }
        string finalWord="";
        int l = line.size();
        int spaces = maxWidth - len;
        for(int i=0;i<l;i++){
            finalWord+=line[i];
            if(spaces--) finalWord+=' ';
        }
        for(int i=0;i<spaces;i++){
            finalWord+=' ';
        }
        result.push_back(finalWord);
        return result;
    }
};