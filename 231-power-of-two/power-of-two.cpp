class Solution {
public:
    bool isPowerOfTwo(int n) {

        int ans = 1; // it is the value of minimum power of 2

        for (int i=0; i<=30; i++){  // we are usig till 2^30 because 2^31 is out of range.

            if(ans == n){
                return true;  // True is not allowed in c++
            }

            if(ans < INT_MAX/2){
                ans = ans *2;
            }
        }
        return false;
        
    }
};