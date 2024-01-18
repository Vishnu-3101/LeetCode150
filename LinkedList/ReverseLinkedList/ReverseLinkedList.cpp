#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* list = head;
        ListNode* pre = NULL;
        while(list!=NULL){
            ListNode* temp = list->next;
            list->next = pre;
            pre = list;
            list = temp;
        }
        return pre;
    }
};