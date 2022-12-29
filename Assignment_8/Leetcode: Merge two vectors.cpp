class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // vector<int>newo(m+n);
        // int j=0,i=0;
        // while(j<=m or i<=n){
        //     if(nums1[i]>nums2[j]){
        //         newo.push_back(nums2[j]);
        //         j++;
        //     }
        //     else {
        //         newo.push_back(nums1[i]);
        //         i++;
        //     }
        // }
        for(int i=m,j=0;i<m+n;i++,j++){
            nums1[i]=nums2[j];
            }
            sort(nums1.begin(),nums1.end());
        
        return;
    }
};
