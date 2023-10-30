#include<bits/stdc++.h>
using namespace std;

// space complexity of O(2N). Not optimised one
class Solution1 {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int>leftmax(n);
        int sum=0;
        if(n<3){
            return sum;
        }
        leftmax[1] = height[0];
        for(int i=2;i<n-1;i++){
            leftmax[i] = max(leftmax[i-1],height[i-1]);
        }
        vector<int> rightmax(n);
        rightmax[n-2]= height[n-1];
        for(int i=n-3;i>=1;i--){
            rightmax[i] = max(rightmax[i+1],height[i+1]);
        }
        for(int i=1;i<n-1;i++){
            int minbar = min(leftmax[i],rightmax[i]);
            if(minbar-height[i]>0){
                sum+=minbar-height[i];
            }
        }
        return sum;
    }
};

// optimal solution 
class Solution2 {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int sum=0;
        int left=0,right=n-1;
        int leftmax=0,rightmax=0;
        while(left<right){
            if(height[left]<height[right]){
                if(height[left]>leftmax){
                    leftmax=height[left];
                }
                else{
                    sum+=(leftmax-height[left]);
                }
                left++;
            }
            else{
                if(height[right]>rightmax){
                    rightmax=height[right];
                }
                else{
                    sum+=(rightmax-height[right]);
                }
                right--;
            }
        }
        return sum;
    }
};