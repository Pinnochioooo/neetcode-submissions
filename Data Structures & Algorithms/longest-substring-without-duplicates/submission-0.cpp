class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int size = s.size();
       int left =0;
        int ans =0;

       unordered_set<int> hash;

       for(int right =0;right<size;right++){

            
                while(hash.count(s[right])){
                    hash.erase(s[left]);
                    left++;
                }
                hash.insert(s[right]);
            
            ans= max(ans,right - left +1);

       }
       return ans;


    }
};
