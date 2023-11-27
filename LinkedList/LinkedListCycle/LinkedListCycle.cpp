#include<bits/stdc++.h>
using namespace std;

//Solution involving haspmap

class Solution {
public:
    bool hasCycle(ListNode *head) {
        unordered_set<ListNode*> List;
        ListNode* node = head;
        while(node){
            if(List.find(node)!=List.end()) return true;
            List.insert(node);
            node = node->next;
        }
        return false;
    }
};

// O(1) space with fast and slow pointers

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* fast = head;
        ListNode* slow = head;
        while(fast && fast->next){
            
            slow = slow->next;
            fast = fast->next->next;
            if(fast==slow){
                return true;
            }
        }
        return false;
    }
};