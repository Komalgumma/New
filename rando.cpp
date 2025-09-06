#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){return false;}
        long int y = 0;
        int o = x;
        while(x > 0){
            y = y*10 + x%10;
            x /= 10;
        }
        return o == y;
    }
};