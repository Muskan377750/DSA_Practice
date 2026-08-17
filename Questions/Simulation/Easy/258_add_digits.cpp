class Solution {
public:
    int sumDig(int n){
        int num = n;
        int sum = 0;
        while(num!=0){
            int dig = num%10;
            sum += dig;
            num /= 10;
        }
        return sum;
    }
    int addDigits(int num) {
        int n = num;
        while(n>9){
            int sumDigits = sumDig(n);
            n = sumDigits;
        }
        return n;
    }
};