class Solution {
public:


    int stairs(vector<int>& output,int n){
            
            if(n<=1)return 1;

        else if(output[n-1]&& output[n-1]){
            return output[n-1] + output [n-2];
        }

        else{
            output[n-1]=stairs(output,n-1);
            output[n-2]=stairs(output,n-2);
            return output[n-1] + output[n-2];
            }




           
    }



    int climbStairs(int n) {
        vector<int> output(n);
        return stairs(output,n);
    }
};
