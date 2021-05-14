//O(n^2)

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]==nums[j]){
                    count ++;
                }
            }
        }
        return count;
    }
};



//! O(n)
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
     map<int,int> mp;
        int total=0;
        for(int i=0;i<nums.size();i++){
            total+= mp[nums[i]];
            mp[nums[i]]++;
        }
        return total;
    }
};
