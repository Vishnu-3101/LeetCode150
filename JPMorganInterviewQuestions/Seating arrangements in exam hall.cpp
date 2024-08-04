#include <bits/stdc++.h>
using namespace std;

vector<string> findSeq(int n){
    vector<string> seq;
    queue<string> q;
    q.push("1");
    while(!q.empty()){
        string str = q.front();
        q.pop();
        if(seq.size()>=n) return seq;
        seq.push_back(str);
        q.push(str+'0');
		
	# We need to check the last character of the current str
        if(str.back()=='0'){
            q.push(str+'1');
        }
    }
    return seq;
}


int main()
{
    int t;
    cin>>t;
    vector<int> arr(t);
    int maxi = 0;
    for(int i=0;i<t;i++){
        cin>>arr[i];
        maxi = max(maxi,arr[i]);
    }
    vector<string> seq = findSeq(maxi);
    for(int i=0;i<arr.size();i++){
	
	# arr[i] - 1 is important to convert to 0 based indexing
        cout<<seq[arr[i]-1]<<",";
    }
}