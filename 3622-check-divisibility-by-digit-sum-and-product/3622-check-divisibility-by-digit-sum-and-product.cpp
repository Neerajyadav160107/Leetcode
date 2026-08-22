class Solution {
public:
    bool checkDivisibility(int n) {
        int res = n;
        int sum = 0;
        int product = 1;
        while (n > 0) {
            int digit = n % 10;
            sum += digit;
            product *= digit;
            n /= 10;
        }
        return res % (sum + product) == 0;
    }
};