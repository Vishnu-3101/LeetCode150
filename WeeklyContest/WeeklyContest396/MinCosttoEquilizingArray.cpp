class Solution {
public:
    long long solve(vector<int>&nums,long long mini, long long target, long long totalSum, int cost1, int cost2){
        // Find number of maximum number of operations to an element.
        long long maxDiff = target - mini;
        // Find the total operations to be performed. We get it by multiplying the target with n and substracting with the total sum of existing elements.
        long long n = nums.size();
        long long totalOperations = target*n - totalSum;
        // Performing cost1
        if(2*cost1<=cost2) return totalOperations*cost1;

        // If We cant perform all cost2 operations. We get pairs by subtracting total operations with maxDiff. Because at last the element with maxDiff will be left out to perfrom cost1 operations.
        long long totalPairs = totalOperations - maxDiff;
        // maxDiff-totalPairs will give the sum of cost1 operations on the element which doesnot form a pair at last.
        // For all pairs we need to do cost2 operations.
        if(totalPairs < maxDiff) return (maxDiff - totalPairs)*cost1 + totalPairs*cost2;
        
        // All cost2 operations
        if(totalOperations%2==0) return (totalOperations/2)*cost2;
        return (totalOperations/2)*cost2  + cost1;

    }
    int minCostToEqualizeArray(vector<int>& nums, int cost1, int cost2) {
        int mod = 1e9+7;
        long long maxi = 0;
        long long mini = 1e18;
        for(int i=0;i<nums.size();i++){
            mini = min(mini,1LL*nums[i]);
            maxi = max(maxi,1LL*nums[i]);
        }
        long long totalSum = accumulate(nums.begin(), nums.end(), 0LL);
        long long ans = 1e18;
        for(long long i=maxi;i<=2*maxi;i++) {
            ans = min(ans, solve(nums,mini, i, totalSum, cost1, cost2));
        }
        return ans%mod;
    }
};