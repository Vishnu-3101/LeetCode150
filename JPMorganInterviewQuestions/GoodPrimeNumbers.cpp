// -> Going with the brute force approach of finding all the K good prime number after N. Returning the last good prime.

// -> Finding if a number is prime or not is coded effeciently by increasing the steps by 6 for every iteration. 
// -> Understand the logic correctly.

#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if(n<=1) return false;
    if(n<=3) return true;
    if(n%2==0 || n%3==0) return false;
    for(int i=5;i*i<n;i+=6){
        if(n%i==0 || n%(i+2)==0) return false;
    }
    return true;
}

int digSum(int n){
    int sum = 0;
    while(n>0){
        sum+=n%10;
        n = n/10;
    }
    return sum;
}

int main(){
    int n,k;
    cin>>n>>k;
    int curr = n+1;
    while(k>0){
        int sum = digSum(curr);
        if(isPrime(sum)) k--;
        curr++;
    }
    return curr-1;
}