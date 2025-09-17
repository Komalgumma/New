#include <iostream>
#include <string>
using namespace std;

bool IsPalindrome(string s){
    for(int i = 0; i<s.size()/2;i++){
        if(s[i]!=s[s.size()-1-i]){return false;}
    }
    return true;
}

class Solution {
public:
    string longestPalindrome(string s) {
        int a = 0;
        int b = 0;
        for(int i =0;i<s.size(); i++){
            for(int j = 0; j<s.size(); j++){
                if(IsPalindrome(s.substr(i,j-i+1))){
                    if((j-i) > (b-a)){
                        a = i;
                        b = j;
                    }
                }
            }
        }
        return s.substr(a,b-a+1);
    }
};