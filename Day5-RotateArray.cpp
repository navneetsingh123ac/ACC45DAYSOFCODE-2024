class Solution {
public:
    void rotate(vector<int>& nums, int k) {
       int n = nums.size();
       int i = 0, j = n-1;
       while(i<j){
        swap(nums[i++],nums[j--]);
       }
       i = 0;
       j = (k%n) - 1;
       while(i<j){
        swap(nums[i++],nums[j--]);
       }
       i = k%n;
       j = n-1;
       while(i<j){
        swap(nums[i++],nums[j--]);
       }
    }   
};