class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int average =0;
        int sum=0;
        int count =0;

        for(int i =0;i<k;i++){
            sum+=arr[i];
        }
        average = sum/k;

        int right = k;
        int left =0;

        if(sum>=threshold*k){
                count++;
            }

        while(right<arr.size()){
            sum -=arr[left];
            sum+=arr[right];

            

            if(sum>=threshold*k){
                count++;
            }

            

            
            right++;
            left++;
        }






        return count;
    }
};