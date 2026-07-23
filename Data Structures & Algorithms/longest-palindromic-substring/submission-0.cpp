class Solution {
public:

   void isPalindrome(string s,int i,int j,int& maxlen,string& ans){
    int len =0;
        while(i>=0 && j<s.size()){
            if(s[i]!=s[j])return ;

            len = j-i+1;
            if(len>maxlen){
                maxlen = len;
                ans = s.substr(i,j-i+1);
            }

            i--;
            j++;
            
            
        }
        return ;
    }


    string longestPalindrome(string s) {


        int maxlen =0;
        string ans;


        for(int i =0;i<s.size();i++){
            isPalindrome(s,i,i,maxlen,ans);
            if(i+1<s.size())isPalindrome(s,i,i+1,maxlen,ans);
        }
        return ans;
    }
    
};
