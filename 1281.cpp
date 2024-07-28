class Solution
{
public:
    int subtractProductAndSum(int n)
    {
        int sum = 0, prod = 1;
        while (n != 0)
        {
            int digit = n % 10;
            n = n / 10;
            prod = digit * prod;
            sum = digit + sum;
        }
        int res = prod - sum;
        return res;
    }
};