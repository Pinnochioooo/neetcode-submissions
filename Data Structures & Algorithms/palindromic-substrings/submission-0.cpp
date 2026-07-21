class Solution {
public:


    bool isPalindrome(string s){
        int left = 0,right = s.size() -1;
        while(left<right){
            if(s[left]!=s[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }

    void dfsodd(string s, int node,int& count){
        int left = node ,right= node;
        

        while(left >=0 && right<s.size()){
            if(isPalindrome(s.substr(left,right-left+1))){
                count++;
            }
            left--;
            right++;
        }

    }

    void dfseven(string s, int node,int& count){
        int left = node,right= node+1;
        

        while(left >=0 && right<s.size()){
            if(isPalindrome(s.substr(left,right-left+1))){
                count++;
            }
            left--;
            right++;
        }

    }





    int countSubstrings(string s) {
        int count =0;
        for(int i =0;i<s.size();i++){
            dfsodd(s,i,count);
            dfseven(s,i,count);
        }

        return count;
    }
};
