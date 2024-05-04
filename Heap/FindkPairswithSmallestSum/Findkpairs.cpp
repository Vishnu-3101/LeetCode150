#include<bits/stdc++.h>
using namespace std;

// using visited array

class Solution {
public:
    typedef pair<int,vector<int>> pi;
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        priority_queue<pi , vector<pi> , greater<pi>> minHeap;
        int n = nums1.size();
        int m = nums2.size();
        set<vector<int>> visited;
        minHeap.push({nums1[0]+nums2[0],{0,0}});
        visited.insert({0,0});
        vector<vector<int>> result;
        while(!minHeap.empty() && k>0){
            auto t = minHeap.top();
            minHeap.pop();
            result.push_back({nums1[t.second[0]],nums2[t.second[1]]});
            int i = t.second[0];
            int j = t.second[1];
            if(visited.find({i+1,j})==visited.end() && i+1<n){
                minHeap.push({nums1[i+1]+nums2[j],{i+1,j}});
                visited.insert({i+1,j});
            }
            if(visited.find({i,j+1})==visited.end() && j+1<m){
                minHeap.push({nums1[i]+nums2[j+1],{i,j+1}});
                visited.insert({i,j+1});
            }
            k--;
        }
        return result;
    }
};

// Using 2nd approach

class Solution {
public:
    typedef pair<int,vector<int>> pi;
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        priority_queue<pi , vector<pi> , greater<pi>> minHeap;
        int n = nums1.size();
        int m = nums2.size();
        for(int i=0;i<k && i<n;i++){
            minHeap.push({nums1[i]+nums2[0],{i,0}});
        }
        vector<vector<int>> result;
        while(!minHeap.empty() && k>0){
            auto t = minHeap.top();
            minHeap.pop();
            result.push_back({nums1[t.second[0]],nums2[t.second[1]]});
            int i = t.second[0];
            int j = t.second[1];
            if(j+1<m){
                minHeap.push({nums1[i]+nums2[j+1],{i,j+1}});
            }
            k--;
        }
        return result;
    }
};