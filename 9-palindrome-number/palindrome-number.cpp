class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        long y=0; int n=x;
        while(x>0){
            int a =x%10;
            y=10*y + a;
            x /= 10;
        }
        return n==y;
    }
};