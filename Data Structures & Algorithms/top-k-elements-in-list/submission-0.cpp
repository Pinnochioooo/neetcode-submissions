class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> hash;
        for(int x: nums){
            hash[x]++;
        }

        priority_queue<pair<int,int>> heap;
        for(auto p: hash){
            heap.push({p.second,p.first});
        }

        vector<int> output;
    
        for(int i =0;i<k;i++){
            output.push_back(heap.top().second);
            heap.pop();
        }
        return output;
    }
};
