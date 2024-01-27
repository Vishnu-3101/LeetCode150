#include<bits/stdc++.h>
using namespace std;

class LRUCache {
public:
    class node{
        public:
            int key;
            int val;
            node* next;
            node* pre;
            node(int _key,int _val){
                key = _key;
                val = _val;
            }
    };
    
    node* head = new node(-1,-1);
    node* tail = new node(-1,-1);
    
    int cap;
    map<int,node*> hashmap;

    LRUCache(int capacity) { 
        cap = capacity;
        head->next = tail;
        tail->pre = head;
    }
    
    void add(int key,int value){
        node* nextnode = head->next;
        node* newNode = new node(key,value);
        newNode->next = nextnode;
        newNode->pre = head;
        nextnode->pre = newNode;
        head->next = newNode;
    }

    void deletenode(node* delnode) {
        node* lastpre = delnode->pre;
        node* lastnext = delnode->next;
        lastpre->next = lastnext;
        lastnext->pre = lastpre;
    }
    
    int get(int key) {
        if(hashmap.find(key)!= hashmap.end()){
            int value = hashmap[key]->val;
            deletenode(hashmap[key]);
            add(key,value);
            hashmap[key] = head->next;
            return value;
        }
        return -1;
    }
    
    void put(int key, int value) {
        if(hashmap.find(key)!=hashmap.end()){
            // hashmap.erase(key);
            deletenode(hashmap[key]);
        }
        else if(hashmap.size()==cap){
            hashmap.erase(tail->pre->key);
            deletenode(tail->pre);
            
        }
        add(key,value);
        hashmap[key] = head->next;

    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */