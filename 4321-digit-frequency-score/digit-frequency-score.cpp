class Solution {
public:
    int digitFrequencyScore(int n) 
    {
        int temp,r,sum = 0;
        temp = n;

        while(temp != 0)
        {
            r = temp%10;
            sum = sum + r;
            temp = temp / 10;
        }

        return sum;           
        
    }
};