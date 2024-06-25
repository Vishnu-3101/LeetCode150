class Solution {
public:
    int maximumEnergy(vector<int>& energy, int k) {
        int maxi = INT_MIN;
        int n = energy.size();
        vector<int> result(k,0);
        for(int i=0;i<k;i++){
            result[i] = energy[i];
        }
        for(int i=k;i<n;i++){
            result[i%k] = max(result[i%k]+energy[i],energy[i]);
        }
        for(int i=0;i<k;i++){
            maxi = max(maxi,result[i]);
        }
        return maxi;
    }
};