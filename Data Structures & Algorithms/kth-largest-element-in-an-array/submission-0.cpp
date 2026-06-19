class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,less<int>> heap;
        for(int x: nums){
            heap.push(x);
        }
        vector<int> vec;
        for(int i =0;i<k-1;i++){
            
            heap.pop();
        }
        return heap.top();
        
    }
};
