class Solution {
public:

    struct compare{
        bool operator()(pair<int,int>a , pair<int,int>b){
            int dista = a.first*a.first + a.second*a.second;
            int distb = b.first*b.first + b.second*b.second;
            return dista>distb;
        }
    };


    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>> output;
        priority_queue<pair<int,int>,vector<pair<int,int>>,compare> heap;
        for(auto x:points){
            pair<int,int> d;
            d.first = x[0];
            d.second= x[1];
        heap.push(d);}
        for(int i =0;i<k;i++){
            pair<int,int> c = heap.top();
            output.push_back({c.first,c.second});
            
            heap.pop();
        }
        return output;
    }
};
