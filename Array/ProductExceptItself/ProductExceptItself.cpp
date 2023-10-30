#include<bits/stdc++.h>
using namespace std;

//Space complexity of O(2N). Not optimised
class Solution1 {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int rightpro=1;
        int leftpro=1;
        int n=nums.size();
        vector<int> result(n);
        vector<int> left(n);
        vector<int> right(n);
        for(int i=0;i<n;i++){
            left[i] = leftpro;
            leftpro*=nums[i];
        }
        for(int i=n-1;i>=0;i--){
            right[i] = rightpro;
            rightpro*=nums[i];
        }

        for(int i=0;i<n;i++){
            result[i]=right[i]*left[i];
        }
        return result;
    }
};

// Optimised one -> space complexity of O(N)
class Solution2 {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int rightpro=1;
        int leftpro=1;
        int n=nums.size();
        vector<int> result(n);
        for(int i=0;i<n;i++){
            result[i] = leftpro;
            leftpro*=nums[i];
        }
        for(int i=n-1;i>=0;i--){
            result[i] *= rightpro;
            rightpro*=nums[i];
        }
        return result;
    }
};