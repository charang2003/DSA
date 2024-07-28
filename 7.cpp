// reverse integer

class Solution
{
public:
    int reverse(int x)
    {
        int a = 0;
        while (x != 0)
        {
            int digit = x % 10;
            if ((a > INT_MAX / 10) || (a < INT_MIN / 10))
            {
                return 0;
            }
            x = x / 10;
            a = digit + (a * 10);
        }
        return a;
    }
};