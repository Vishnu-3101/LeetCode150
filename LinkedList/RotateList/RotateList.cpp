#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == NULL || k == 0)
            return head;

        ListNode* tail = head;
        int len = 1; 
        while (tail->next != NULL) {
            len++;
            tail = tail->next;
        }

        // Adjust k in case it's greater than the length of the linked list
        k = k % len;

        if (k == 0)
            return head;

        tail->next = head; // Make it a circular linked list

        ListNode* list = head;
        for(int i=0;i<len-k-1;i++){
            if(list!=NULL) list = list->next;
        }
        head = list->next;
        list->next = NULL;

        return head;
    }
};