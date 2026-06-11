class Solution {
public:
    int characterReplacement(string s, int k) {
        int left =0;
        unordered_map <char,int> hash;
        int size = s.size();
        int maxfreq =0 ;
        int ans =0;

        for(int right=0;right <size;right++){
            hash[s[right]]++;

            maxfreq = max(maxfreq,hash[s[right]]);

            while(right - left +1 -maxfreq>k){
                hash[s[left]]--;
                left++;

            }
            

            ans = max(ans,right - left+1);


        }
        return ans;
    }
};
