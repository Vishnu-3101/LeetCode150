#include<bits/stdc++.h>
using namespace std;

// code with O(N) time and O(N) space complexity

class Solution1 {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* list = head;
        ListNode* right = new ListNode(0);
        ListNode* left = new ListNode(0);
        head = left;
        ListNode* middle = right;
        while(list!=NULL){
            ListNode* newNode = new ListNode(list->val);
            if(list->val>=x){
                right->next = newNode;
                right = right->next;
            }
            else{
                left->next = newNode;
                left = left->next;
            }
            list = list->next;
        }
        left->next = middle->next;
        return head->next;
    }
};


// Code with O(N) time and O(1) space complexity

class Solution2 {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* list = head;
        ListNode* right1 = new ListNode(0);
        ListNode* left1 = new ListNode(0);

        ListNode* right = right1;
        ListNode* left = left1;
        while(list!=NULL){            
            if(list->val>=x){
                right->next = list;
                right = right->next;
            }
            else{
                left->next = list;
                left = left->next;
            }
            list = list->next;
        }
        left->next = right1->next;
        right->next = NULL;
        return left1->next;
    }
};