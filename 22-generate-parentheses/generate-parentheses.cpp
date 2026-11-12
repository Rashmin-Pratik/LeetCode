class Solution {
public:
    vector<string> ans;

    vector<string> generateParenthesis(int n) 
    {
        parenthesis("", 0 , 0 , n);
        return ans;
        
    }

     void parenthesis(string s,int open,int close,int n)
     {
        if(open == n & close == n)
        {
            ans.push_back(s);
            return;
        }

        if(open < n)
        parenthesis(s + "(", open + 1, close, n);

        if(close < open)
        parenthesis(s + ")", open, close + 1, n);
     }
};