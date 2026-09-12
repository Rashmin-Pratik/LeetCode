class Solution {
public:
    bool isHappy(int n) {
        int sum=n,r,cnt=0;

        while(true)
        {
            n=sum;
            sum=0;
            while(n!=0)
            {
                r=n%10;
                sum+=(r*r);
                n/=10;
            }
            cnt++;

            if(sum==1) 
            return 1;

            if(cnt>50) 
            return 0;
        }
    }
};