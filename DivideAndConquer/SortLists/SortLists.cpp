#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    ListNode* FindMid(ListNode* head){
        if(head==NULL || head->next==NULL) return head;
        ListNode* slow = head, *fast = head->next;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }

    ListNode* mergeList(ListNode* left, ListNode* mid, ListNode* right){
        ListNode* dummy = new ListNode(-1);
        ListNode* newHead = dummy;
        while(left && right){
            if(left->val<right->val){
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
        if(left) {
            dummy->next = left;
            dummy = dummy->next;
        }
        else{
            dummy->next = right;
            dummy = dummy->next;
        }
        return newHead->next;
    }

    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next == NULL) return head;
        ListNode* MidNode = FindMid(head);
        ListNode* right = MidNode->next;
        MidNode->next = NULL;
        ListNode* left = sortList(head);
        right = sortList(right);
        return mergeList(left, MidNode, right);
    }
};