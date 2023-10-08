#include<bits/stdc++.h>
using namespace std;

class RemoveDuplicatesFromArray1{
public:
    int removeDuplicates(vector<int>& nums) {
        int k=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[i-1]){
                nums[k]=nums[i];
                k++;
            }
            
        }
        return k;
    }
};


class RemoveDuplicatesFromArray2{
public:
    int removeDuplicates(vector<int>& nums) {
        int unique = nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]==unique){
                nums.erase(nums.begin()+i);
                i--;
            }
            
            unique = nums[i];
            
        }
        return nums.size();
    }
};

