class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
     int ans=0;
     unordered_map<int,int>mp;
     for(int &it:nums){
         ans += mp[it]++;
     }
     return ans;
}
};
