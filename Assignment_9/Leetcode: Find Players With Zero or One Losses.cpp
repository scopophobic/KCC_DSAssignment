class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int,int>win,lose;
        unordered_set<int> s;
        for(int i=0;i<matches.size();i++){
            win[matches[i][0]]++;
            lose[matches[i][1]]++;
            s.insert(matches[i][0]);
            s.insert(matches[i][1]);
        }
        vector<vector<int>>ans;
        vector<int> temp1;
        vector<int> temp2;
        for(auto it : s){
            
            if(win[it]>0 and lose[it]==0) temp1.push_back(it);
            if( lose[it]==1) temp2.push_back(it);
            
        }
        sort(temp1.begin(),temp1.end());
        sort(temp2.begin(),temp2.end());
        ans.push_back(temp1);
        ans.push_back(temp2);
        
        return ans;
        
    }
};
