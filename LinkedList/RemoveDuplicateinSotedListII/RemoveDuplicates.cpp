#include<bits/stdc++.h>
using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* dummy = new ListNode(0,head);
        ListNode* pre = dummy;
        ListNode* list = head;
        while(list!=NULL){
            if(list->next && list->next->val==list->val){
                while(list->next && list->next->val==list->val){
                    list = list->next;
                }
                pre->next = list->next;
            }
            else{
                pre = pre->next;
            }
            list = list->next;
        }
        return dummy->next;
    }
};