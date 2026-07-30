class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        sort(hand.begin(),hand.end());

        if(hand.size()%groupSize != 0)return false;

    
        map<int,int> numb;
        for(int x: hand){
            numb[x]++;
        }

        
        
        while(!numb.empty()){
            int start = numb.begin()->first;

            for(int x = start;x<start+groupSize;x++){
                if(numb.find(x)==numb.end())return false;

                if(--numb[x]==0){
                    numb.erase(x);
                }

            }


            
        }
        
        

        return true;
    }
};
