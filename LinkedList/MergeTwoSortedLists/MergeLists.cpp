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

//Merging with extra space

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* head = new ListNode();
        ListNode* curr = head;
        while(list1!=NULL && list2!=NULL){
            ListNode* newNode = new ListNode();
            if(list1->val>list2->val){
                newNode->val = list2->val;
                list2 = list2->next;
            }
            else{
                newNode->val = list1->val;
                list1 = list1->next;
            }
            curr->next = newNode;
            curr = curr->next;
        }
        while(list1!=NULL){
            ListNode* newNode = new ListNode();
            newNode->val = list1->val;
            curr->next = newNode;
            curr = curr->next;
            list1 = list1->next;
        }
        while(list2!=NULL){
            ListNode* newNode = new ListNode();
            newNode->val = list2->val;
            curr->next = newNode;
            curr = curr->next;
            list2 = list2->next;
        }
        return head->next;
    }
};

// Optimal solution with inplace merging


class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL) return list2;
        if(list2==NULL) return list1;
        if(list1->val > list2->val){
            ListNode* temp = list1;
            list1 = list2;
            list2 = temp;
        }
        ListNode* res = list1;
        while(list1!=NULL && list2!=NULL){
            // This is where the magic happens
            ListNode* temp = NULL;
            while(list1!=NULL && list1->val <= list2->val){
                temp = list1;
                list1 = list1->next;
            }
            temp->next = list2;
            ListNode* t = list1;
            list1 = list2;
            list2 = t;
        }
        return res;
    }
};