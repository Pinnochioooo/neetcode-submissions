class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> maxheap;
        for(int x:stones){
            maxheap.push(x);
        }
        int a=0,b =0;
        while(maxheap.size()>1){
            a=maxheap.top();
            maxheap.pop();
            b=maxheap.top();
            maxheap.pop();
            maxheap.push(a-b);
        }
        if(maxheap.empty())return 0;
        return maxheap.top();
    }
};
