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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* result = new ListNode();
        ListNode* head = result;
        int carry=0;
        while(l1!=NULL && l2!=NULL){
            ListNode* newNode = new ListNode();
            newNode->val = (l1->val+l2->val+carry)%10;
            carry = (l1->val+l2->val+carry)/10;
            l1=l1->next;
            l2=l2->next;
            if(result==NULL){
                result = newNode;
            }
            else{
                result->next = newNode;
                result = result->next;
            }
        }
        while(l1!=NULL){
            ListNode* newNode = new ListNode();
            newNode->val = (l1->val+carry)%10;
            carry = (l1->val+carry)/10;
            l1 = l1->next;
            result->next = newNode;
            result = result->next;
        }
        while(l2!=NULL){
            ListNode* newNode = new ListNode();
            newNode->val = (l2->val+carry)%10;
            carry = (l2->val+carry)/10;
            l2 = l2->next;
            result->next = newNode;
            result = result->next;
        }
        if(carry!=0){
            result->next = new ListNode(carry);
            result = result->next;
        }
        return head->next;
    }
};