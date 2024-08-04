// -> Sliding window technique. But we need have free chocolate every time. That free chocolate can be any one from a-z. So we iterate from a to z by taking every one of them as free chocolate. 
// -> TC = O(26*N) O(N) for sliding window and 26 for iterating through each character.

#include <bits/stdc++.h>
using namespace std;


int main(){
    int n,amount;
    cin>>n>>amount;
    string s;
    cin>>s;
    vector<int> costArr(26,0);
    for(int i=0;i<26;i++){
        cin>>costArr[i];
    }
    int maxChoco = 0;
    for(char fr='a';fr<='z';fr++){
        int left = 0;
        int cost=0;
        for(int i=0;i<n;i++){
            if(s[i]!=fr) cost+=costArr[s[i]-'a'];
            while(cost>amount){
                if(s[left]!=fr) cost-=costArr[s[i]-'a'];
                left++;
            }
            maxChoco = max(maxChoco,i-left+1);
        }
    }
    cout<<maxChoco<<endl;
}
