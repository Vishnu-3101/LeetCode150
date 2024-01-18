#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* dummy = new ListNode(0,head);
        ListNode* list = head;
        ListNode* leftPre = dummy;
        for(int i=1;i<left;i++){
            leftPre = list;
            list = list->next;
        }

        ListNode* pre = NULL;
        for(int i=left;i<=right;i++){
            ListNode* temp = list->next;
            list->next = pre;
            pre = list;
            list = temp;
        }
        if(leftPre){
        leftPre->next->next = list;
        leftPre->next = pre;
        }    
        return dummy->next;
    }
};