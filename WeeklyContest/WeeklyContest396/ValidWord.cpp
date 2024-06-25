class Solution {
public:
    void FindVC(char c,int &vowels, int &consonants){
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
            vowels++;
        }
        else{
            consonants++;
        }
    }
    bool isValid(string word) {
        int n = word.size();
        if(n<3) return false;
        int vowels=0,consonants=0;
        for(auto i:word){
            if(!isalnum(i))return false;
            i = tolower(i);
            if((i>='a' && i<='z')){
                FindVC(i,vowels,consonants);
            }
        }
        // cout<<vowels<<","<<consonants<<endl;
        if(vowels && consonants) return true;
        return false;
    }
};