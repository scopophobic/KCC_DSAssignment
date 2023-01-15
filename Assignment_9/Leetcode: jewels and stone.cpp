class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        //-----brute-------//
        // int c=0;
        // for(int i=0;i<jewels.size();i++){
        //     for(int j=0;j<stones.size();j++){
        //         if(jewels[i]==stones[j]){
        //             c+=1;
        //         }
        //     }
        // }
        // return c;
        
        //-----hash-----//
        map<char,int>np;
        for(int i=0;i<stones.size();i++) np[stones[i]]++;
        int sum=0;
        for(int i=0;i<jewels.size();i++){
            sum+=np[jewels[i]];
        }
        return sum;
        
        
        
    }
};
