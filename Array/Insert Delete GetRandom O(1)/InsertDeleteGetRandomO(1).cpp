#include<bits/stdc++.h>
using namespace std;

class RandomizedSet {
public:
    vector<int> set;
    unordered_map<int,int> isPresent;
    RandomizedSet() {

    }
    
    bool insert(int val) {
        if (isPresent.find(val) != isPresent.end())
            return false;
        set.push_back(val);
        isPresent[val]=set.size()-1;
        return true;
    }
    
    bool remove(int val) {
        if (isPresent.find(val) == isPresent.end()) return false;
        // Setting the last element to the index of val and remove the last value
        int last = set.back();
        isPresent[last] = isPresent[val];
        set[isPresent[val]] = last;
        set.pop_back();
        isPresent.erase(val);
        return true;
    }
    int getRandom() {
        return set[rand()%set.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */