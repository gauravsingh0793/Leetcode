class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> MP ={

            {'I',1},
            {'V',5},
            {'X',10},
            {'L',50},
            {'C',100},
            {'D',500},
            {'M',1000}

        };

    


        int ans =0;

        for(int i=0; i < s.size(); i++){
            if(MP[s[i]] < MP[s[i+ 1]]) {
                ans-= MP[s[i]];
            }
            else{
                ans+= MP[s[i]];
            }
        }
        return ans;
    }
};