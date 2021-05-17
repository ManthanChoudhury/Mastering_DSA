class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>a(102);
      // for storing freq
        int n=nums.size();
        for(int i=0;i<n;i++)
            a[nums[i]]++;
      // frquency of given is stored 
        vector<int>b;
        for(int i=0;i<n;i++){
          // outer loop to end array
            int total=0;
          // to count freq till that number
            for(int j=0;j<nums[i];j++)
                total+=a[j];
            b.push_back(total);
        }
        return b;
    }
};
