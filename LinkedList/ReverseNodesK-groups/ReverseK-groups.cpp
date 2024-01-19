#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        int count=0;
        ListNode* list = head;
        while(list!=NULL){
            count++;
            list = list->next;
        }
        int n = count/k;
        list = head;
        ListNode* dummy = new ListNode(0,head);
        ListNode* LeftPre = dummy;
        for(int i=0;i<n;i++){
            ListNode* pre = NULL;
            for(int j=0;j<k;j++){
                ListNode* temp = list->next;
                list->next = pre;
                pre = list;
                list = temp;
            }
            ListNode* newLeftPre = LeftPre->next;
            LeftPre->next->next = list;
            LeftPre->next = pre;
            LeftPre = newLeftPre;
        }
        return dummy->next;
    }
};