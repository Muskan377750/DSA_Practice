class Solution {
public:
    bool isPalindrome(int n) {
        long rev = 0;
        int num = n;
        if(n<0){
            return false;
        }
        while(num!=0){
            int dig = num % 10;
            rev = rev*10+dig;
            num /= 10;
        }
        if(rev==n){
            return true;
        }else{
            return false;
        }
    }
};