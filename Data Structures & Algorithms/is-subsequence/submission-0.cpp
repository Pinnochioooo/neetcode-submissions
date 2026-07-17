class Solution {
public:
    bool isSubsequence(string s, string t) {
        int count =0;
        int s_size = s.size();
        int t_size = t.size();


        


        for(int i =0;i<t_size;i++){
            if(t[i]==s[count])count++;

        }

if(count==s.size())return true;

return false;
    }
};