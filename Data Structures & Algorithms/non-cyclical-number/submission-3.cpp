class Solution {
public:
    bool isHappy(int n) {
        unordered_map<int,int> hash;
        
        if(n==1)return true;
        



        while(n!=1){
            if(hash.find(n)!=hash.end())return false;
            hash[n]= 1;
            int temp =0;
            

            while(n){
                int digit = n%10;
                temp += digit * digit;
                n/=10;
            
            }

            n = temp;
            
        }





   return true;

    
    }
};
