class Solution {
public:

    priority_queue<int,vector<int>, greater<int>> pq;


    int heaper(vector<int>& customers,vector<int>& grumpy,int minutes){
        int heapsum =0;
        int maxheap;


        for(int i =0;i<minutes;i++){
            if(grumpy[i])heapsum+=customers[i];

            
        }
        maxheap = heapsum;

        int right = minutes;
        int left =0;

        while(right<customers.size()){
            if(grumpy[right]){
                heapsum+=customers[right];
            }

            if(grumpy[left]){
                heapsum-=customers[left];
            }

            if(heapsum>maxheap)maxheap = heapsum;

            right++;
            left++;


        }
        
        return maxheap;
    }



    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int finalsum =0;


        for(int i =0;i<customers.size();i++){
            if(!grumpy[i])
            finalsum+=customers[i];
        }


        int addon = heaper(customers,grumpy,minutes);

        return finalsum+addon;







    }


};