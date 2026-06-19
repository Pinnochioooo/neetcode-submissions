class KthLargest {
public:
    priority_queue<int,vector<int>, greater<int>> heap;
    int j;
    KthLargest(int k, vector<int>& nums) {
        j=k;
        
        for(int x:nums){
            heap.push(x);
        }

        while(heap.size()>k){
            heap.pop();
        }
    }

    
    
    int add(int val) {
        heap.push(val);
        if(heap.size()>j)
        heap.pop();
        return heap.top();
    }
};
