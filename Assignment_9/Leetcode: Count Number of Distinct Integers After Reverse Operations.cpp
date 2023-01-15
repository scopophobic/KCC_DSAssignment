class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        vector<int>temp;
        for(int it : nums){
            int t=it;
            int nw=0;
            // int i= 1;
            while(t){
                int a=t%10;
                nw=nw*10+a;
                t/=10;
                // i++;
            }
            temp.push_back(nw);
        }
        
        
        for(int i : temp) nums.push_back(i);
        for(int it : nums) cout<<it<<" ";
        map<int,int>mp;
        for(int i: nums) mp[i]++;
        int c=0;
        for(auto it : mp){
            if(it.first) c++;
        }
                         
        return c;
        
    }
};
