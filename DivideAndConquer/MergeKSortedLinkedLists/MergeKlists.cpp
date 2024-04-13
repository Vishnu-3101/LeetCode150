#include<bits/stdc++.h>
using namespace std;

// Using Merge Lists algo

class Solution1 {
public:
    ListNode* Merge(ListNode* left, ListNode* right){
        ListNode* dummy = new ListNode(-1);
        ListNode* head = dummy;
        while(left && right){
            if(left->val < right->val){
                dummy->next = left;
                dummy = dummy->next;
                left = left->next;
            }
            else{
                dummy->next = right;
                dummy = dummy->next;
                right = right->next;
            }
        }
        if(left){
            dummy->next = left;
            dummy = dummy->next;
        }
        if(right){
            dummy->next = right;
            dummy = dummy->next;
        }
        return head->next;
    }
    ListNode* DivideMerge(vector<ListNode*>&lists, int left, int right){
        if(right-left==1) return lists[left];
        int mid = (left+right)/2;
        ListNode* l = DivideMerge(lists,left,mid);
        ListNode* r = DivideMerge(lists,mid,right);
        return Merge(l,r);
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int n = lists.size();
        if(n==0) return NULL;
        return DivideMerge(lists,0,n);
    }
};


// Optimal solution using min Heap (priority queue)

class Solution2 {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<pair<int, ListNode*>, vector<pair<int, ListNode*>>,greater<pair<int,ListNode*>>> pq;
        int n=lists.size();
        for(int i=0;i<n;i++){
            if(lists[i]) pq.push(make_pair(lists[i]->val, lists[i]));
        }
        ListNode* dummy = new ListNode(-1);
        ListNode* head = dummy;
        while(!pq.empty()){
            auto it = pq.top();
            pq.pop();
            if(it.second->next) pq.push(make_pair(it.second->next->val, it.second->next));
            dummy->next = it.second;
            dummy = dummy->next;
        }
        return head->next;
    }
};