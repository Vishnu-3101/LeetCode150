#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count=0;
        ListNode* dummy = new ListNode(0,head);
        ListNode* pre= dummy;
        ListNode* list = head;
        while(list!=NULL){
            count++;
            list=list->next;
        }
        for(int i=0;i<count-n;i++){
            pre = pre->next;
        }
        ListNode* next = pre->next->next;
        pre->next->next = NULL;
        pre->next = next;
        return dummy->next;
    }
};