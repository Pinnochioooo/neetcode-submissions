class Solution {
public:
    int trap(vector<int>& height) {
        int size = height.size();
        int leftmax=0,rightmax=0;
        int volume=0;
        int level=0;
       

        vector<int> left(size);
        vector<int> right(size);

        for(int i =0;i<size;i++){
            if(height[i]>=leftmax){
                leftmax = height[i];
               
            }
             left[i]=leftmax;
        }
        for(int i =size-1;i>=0;i--){
            if(height[i]>=rightmax){
                rightmax = height[i];
            }
            right[i]=rightmax;
        }

        for(int i =0;i<size;i++){
            level = min(left[i],right[i])-height[i];
            volume+=level;
        }
        return volume;
    }
};
