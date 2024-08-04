// -> Previously, I used a visited array and a for loop to decide what character to map to. But it is not required. We can just use a pointer for v and c. If a character is used, then increase the corresponding v and c.

#include <bits/stdc++.h>
using namespace std;

int main() {
	string input;
	cin>>input;
	int n = input.size();
	map<char,char> mp;
	vector<bool> visited(26,false);
	string out = "";
	int jv = 0, jc = 0;
	char vowel[] = {'a','e','i','o','u'};
	char consonant[] = {'b','c','d','f','g','h'};
	
	for(int i=0;i<n;i++){
	    if(mp.count(input[i])>0){
	        out+=mp[input[i]];
	        continue;
	    }
	    if(input[i]=='2' ||  input[i]=='3' || input[i]=='5' || input[i]=='7'){
            out+=vowel[jv];
            mp[input[i]] = vowel[jv];
            jv++;
	    }
	    else{
            out+=consonant[jc];
            mp[input[i]] = consonant[jc];
            jc++;
	    }
	}
	cout<<out<<endl;
}
