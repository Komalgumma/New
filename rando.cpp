#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){return false;}
        if(x%10 == 0){return false;}
        int y = 0;
        while(x > 0){
            y = y*10 + x%10;
            x /= 10;
        }
        if(x == y){return true;}
        return false;
    }
};