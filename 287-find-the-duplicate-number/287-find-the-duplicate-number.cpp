class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> mp;
        int cnt=0;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(mp[nums[i]]>1) {cnt=nums[i];break;}
        }
        return cnt;
    }
};