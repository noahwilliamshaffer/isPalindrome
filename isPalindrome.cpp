class Solution {
public:
    bool isPalindrome(int x) {
        int temp = x;
        bool is_positive = x >= 0; // save sign
        x = abs(x); // reverse without sign
        size_t res = 0;
        while (x > 0)
        {
            if (res * 10 > pow(2,31)-1) // integer overflow
                return 0;

            (res *=10) += x%10;;
            x /= 10; 
        }
        if (is_positive)
            if (temp == (int)res)
                return true;
        cout <<  (int)res;
        return false;
    }
};
