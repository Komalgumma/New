#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){return false;}
        int y = abs(x);
        vector<int> z;
        while(y>0){
            z.push_back(y%10);
            y /= 10;
        }
        for(int i = 0; i<z.size(); i++){
            if(z[i] != z[z.size()-1-i]){return false;}
        }
        return true;
    }
};