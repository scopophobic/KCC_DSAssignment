class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low=0,high=nums.size(),mid;
        while(low<high)
        {
            mid=(high+low)/2;
            if(nums[mid]==target)
            return mid;
            else if(nums[mid]<target)
            low=mid+1;
            else
            high=mid;

            cout<<mid<<endl;
        }
        return -1;
    }
};
