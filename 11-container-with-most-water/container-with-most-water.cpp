class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxWater = 0;
        int i = 0;
        int j = height.size() - 1;
        while(i < j){
            int width = j - i;
            int minheight = min(height [i], height [j]);
            int currentWater = width * minheight;
            maxWater =max(maxWater, currentWater);
            if(height [i] < height [j]){
                i++;
            }
            else{
                j--;
            }
            
        }
        return maxWater;
    }
};