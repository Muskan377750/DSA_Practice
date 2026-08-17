class Solution {
public:
    int fib(int n) {
        if(n==1) return 1;
        if(n==0) return 0;
        int answer = 0;
        int p1 = 0;
        int p2 = 1;
        for(int i = 2;i <= n;i++){
            answer = p1 + p2;
            p1 = p2;
            p2 = answer;
        }
        return answer;
    }
};