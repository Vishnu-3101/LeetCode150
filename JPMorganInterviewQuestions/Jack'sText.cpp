// -> There are duplicate words in the text and I need to remove it. 
// -> Written code to remove extra spaces also. Used sliding window to get substrings.

#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    int n = s.size();
    unordered_set<string> st;
    string out="";
    int left = 0;
    for(int i=0;i<n;i++){
        while(s[i]==' '){
            i++;
            left++;
        }
        while(s[i]!=' ') i++;
        string str = s.substr(left,i-left);
        left = i+1;
        if(st.find(str)!=st.end()) continue;
        out+=str+" ";
        st.insert(str);
    }
    cout<<out<<endl;
}
