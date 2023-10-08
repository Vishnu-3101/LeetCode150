#include<bits/stdc++.h>
using namespace std;

class ValidPalindrome{
public:
    bool isPalindrome(string s) {
        string str;
        copy_if(s.begin(),s.end(),back_inserter(str),[](char c){return isalnum(c);});
        transform(str.begin(),str.end(),str.begin(),[](char c){return tolower(c);});
        // copy(str.begin(),str.end(),ostream_iterator<char>(cout, " "));
        return str==string(str.rbegin(),str.rend());
    }
};