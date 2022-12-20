/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        long int high = n-1;
        long int low = 1;
        long int mid;
        while(low<=high){
            mid=(high+low)/2;
            if(guess(mid)==0) return mid;
            else if(guess(mid)<0) high=mid-1;
            else low = mid+1;
        }
        if(guess(high)==0) return high;
        else return low; 
    }
};
