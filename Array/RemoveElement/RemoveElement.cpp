#include<bits\stdc++.h>
using namespace std;

class RemoveElement1{
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0; // Counter for non-val elements
    
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] != val) {
                nums[k] = nums[i]; // Move non-val elements to the front
                k++;
            }
        }
    
    return k;
    }
};


// Alternative approach using one liner

class RemoveElement2{
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int>n;
        copy_if(nums.begin(),nums.end(),back_inserter(n),[val](int i){return i!=val;});
        nums=n;
        return n.size();
    }
};