class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left =0,right = heights.size()-1;
        int area =0,width,maxarea=0;
        

        while(left<right){
            width = right -left;
            
            if(heights[left]<heights[right]){
                area = width*heights[left];
                left++;
                
            } else {
                area = width*heights[right];
                right--;
            }
            if(area>maxarea){maxarea=area;}

        }
        return maxarea;
    }
};
