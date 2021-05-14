class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max_ending = 1;
        int min_ending = 1;
        int max_so_far = 0;
        int n = nums.size();
        for(int i = 0; i<n;i++){
            if(nums[i]>0){
                max_ending = max_ending * nums[i];
                min_ending = min(max_ending*nums[i],1);
            }
            else if(nums[i]==0){
                max_ending =1;
                min_ending= 0;
            }
            else{
                int temp = max_ending;
                max_ending = max(max_ending*nums[i],1);
                min_ending = temp*nums[i];
            }
           max_so_far = max(max_so_far,max_ending);
        }
         
            
            return max_so_far;
    }
};
