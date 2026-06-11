class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())return false;

        unordered_map<char,int> hash;
        for(char x : s){
        hash[x]+=1;}
        for(char y: t){
           hash[y]-=1;
        
        }
        
        for(auto &p : hash){
            if(p.second!=0)return false;
        }
        return true;
    }
};
