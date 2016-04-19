//Container With Most Water
//Given n non-negative integers a1, a2, ..., an, where each represents a point at coordinate (i, ai). 
//n vertical lines are drawn such that the two endpoints of line i is at (i, ai) and (i, 0). 
//Find two lines, which together with x-axis forms a container, such that the container contains the most water.

//Note: You may not slant the container.




//This is my first accepted answer, runtime:28ms.

class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxarea = 0;
        int i = 0;
        int j = height.size()-1;
    
        while(i < j){
            int area = min(height[i], height[j]) * (j-i);
            maxarea = max(area, maxarea);
            if(height[i] < height[j]){
                i++;
            }
            else if(height[i] > height[j]){
                j--;
            }
            else{
                i++;
                j--;
            }
        }
        return maxarea;
        }
};

//The second accepted answer,runtime:28ms.

class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxarea = 0;
        int i = 0;
        int j = height.size()-1;
    
        while(i < j){
            int area = min(height[i], height[j]) * (j-i);
            maxarea = max(area, maxarea);
            if(height[i] < height[j]) i++; else j--;
        }
        return maxarea;
        }
};


//This is my third accepted answer, runtime:24ms, improved 4 ms.

class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxarea = 0;
        int i = 0;
        int j = height.size()-1;
    
        while(i < j){
            int area = min(height[i], height[j]) * (j-i);
            maxarea = max(area, maxarea);
            height[i] < height[j] ? i++ : j--;
        }
        return maxarea;
        }
};
