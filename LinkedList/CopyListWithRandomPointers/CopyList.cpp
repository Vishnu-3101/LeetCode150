#include<bits/stdc++.h>
using namespace std;

/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

// Optimal solution

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* list1 = head;
        while(list1!=NULL){
            Node* newNode = new Node(list1->val);
            Node* temp = list1->next;
            list1->next = newNode;
            newNode->next = temp;
            list1 = list1->next->next;
        }
        list1 = head;
        while(list1!=NULL){
            if(list1->random!=NULL){
                list1->next->random = list1->random->next;
            }
            list1 = list1->next->next;
        }
        list1 = head;
        Node* front;
        Node* newHead = new Node(0);
        Node* list2 = newHead;
        while(list1!=NULL){
            front = list1->next->next;
            
            list2->next = list1->next;

            list1->next = front;

            list1 = list1->next;
            list2 = list2->next;
        }
        return newHead->next;
    }
};

// Solution with hashmap

class Solution2 {
public:
    Node* copyRandomList(Node* head) {
        unordered_map<Node*,Node*> hashmap;
        Node* list1 = head;
        while(list1!=NULL){
            Node* newNode = new Node(list1->val);
            hashmap[list1] = newNode;
            list1 = list1->next;
        }
        list1 = head;
        while(list1!=NULL){
            hashmap[list1]->next = hashmap[list1->next];
            hashmap[list1]->random = hashmap[list1->random];
            list1 = list1->next;
        }
        return hashmap[head];
    }
};