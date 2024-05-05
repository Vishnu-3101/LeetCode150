#include<bits/stdc++.h>
using namespace std;

class MedianFinder {
public:
    priority_queue<int> small_heap;
    priority_queue<int,vector<int>,greater<int>> large_heap;
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        small_heap.push(num);
        // If heaps are not empty and small_head.top() > large_heap.top()
        // Then swap both the tops
        if(!small_heap.empty() && !large_heap.empty() && small_heap.top()>large_heap.top()){
            int val = large_heap.top();
            large_heap.pop();
            large_heap.push(small_heap.top());
            small_heap.pop();
            small_heap.push(val);
        }

        // To handle uneven size heaps. The diff should be <=1
        if(small_heap.size()>large_heap.size()+1){
            large_heap.push(small_heap.top());
            small_heap.pop();
        }
        if((large_heap.size()>small_heap.size()+1)){
            small_heap.push(large_heap.top());
            large_heap.pop();
        }
    }
    
    double findMedian() {
        if(large_heap.size()>small_heap.size()) return large_heap.top();
        else if(large_heap.size()<small_heap.size()) return small_heap.top();
        return ((double)large_heap.top()+(double)small_heap.top())/2.0;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */