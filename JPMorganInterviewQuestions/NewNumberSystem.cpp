#include<bits/stdc++.h>

using namespace std;
int func(string s, int n, int i) {
    if (n < 0) return 0;
    return (s[n] - 'a' + 1) * pow(20, i) + func(s, n - 1, i + 1);
}

int main() {
    string s;
    cin >> s;
    cout << func(s, s.length() - 1, 0);
}