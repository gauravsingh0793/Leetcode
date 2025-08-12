class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector<int> v(2000, 0);

        for (int &x : arr){
            v[x + 1000]++;
        }

        sort(begin(v), end(v));

        for(int i=0; i<2000; i++){
            if(v[i] != 0 && v[i] == v[i-1]){
                return false;
            }
        }
        return true;
    }
};