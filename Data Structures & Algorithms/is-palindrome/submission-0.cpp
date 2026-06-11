class Solution {
public:

    bool isalphanum(char s){
        if((s>='a'&&s<='z')||
           (s>='A'&&s<='Z')||
            (s>='0'&&s<='9')) return true;
            
            return false;

    }



    bool isPalindrome(string s) {
        int size = s.size();
        int left = 0,right = size-1;

        while(left<=right){
            if(isalphanum(s[left])&&isalphanum(s[right])){
                if(s[left] >= 'A' && s[left] <= 'Z')
                    s[left] = s[left] - 'A' + 'a';
                if(s[right] >= 'A' && s[right] <= 'Z')
                    s[right] = s[right] - 'A' + 'a';

                if(s[left]==s[right]){left++;
                right--;}
                else{return false;}

            }
            if(!isalphanum(s[left]))left++;
            if(!isalphanum(s[right]))right--;
        }
        return true;
    }
};
