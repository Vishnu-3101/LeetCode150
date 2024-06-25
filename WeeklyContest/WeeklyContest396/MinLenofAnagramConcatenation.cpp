class Solution {
public:
    int minAnagramLength(string s) {
        int n = s.size();
        for(int len=1;len<=n/2;len++){
            if(n%len!=0) continue;
            unordered_map<char,int> map1;
            for(int i=0;i<len;i++){
                map1[s[i]]++;
            }
            bool isbreak = false;
            for(int i=len;i<n;i+=len){
                unordered_map<char,int> map2;
                for(int j=i;j<i+len;j++){
                    map2[s[j]]++;
                }
                if(map1!=map2){
                    isbreak = true;
                    break;
                }
            }
            if(!isbreak) return len;
        }
        return n;
    }
};