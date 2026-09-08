class Solution {
public:
    int countCommas(int n)
    {
        int cnt = 0;

        if( n < 1000)
            return 0;
        
        for(int i = 1; i<=n; i++)
        {
            if(i >= 1000)
            {
                cnt++;
            }
        }
          return cnt; 
        
    }
};