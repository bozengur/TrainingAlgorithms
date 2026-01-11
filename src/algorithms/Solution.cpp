#include "Solution.h"

namespace algorithms
{
    int Solution::findJudge(int n, std::vector<std::vector<int>>& trust)
    {
        std::vector<int> count (n+1,0);
        for (auto& t:trust)
            count[t[0]]--, count[t[1]]++;
        for(int i=1; i<=n;++i)
            if (count[i] == n-1) return i;
        return -1;
    };

    int Solution::findReverse(int x)
    {
	    int ans =0;
	    while(x !=0)
	    {
		    int digit = x%10;
		    if ((ans<INT_MIN/10)||(ans>INT_MAX/10)) return 0;
		    ans = ans*10+digit;
		    x=x/10;
	    }
           
	    return ans;
    };
    int Solution::myAtoi(std::string s)
    {
	   if (s.empty()) return 0;
	   int i=0;
	   int n = s.length();
	   
	   while(i<n && s[i]==' ') i++;

	   if (i==n) return 0;
	   int sign =1;
	   if (s[i]=='+') i++;
	   else if(s[i] =='-') 
	   {
		   sign = -1;
		   i++;
	   }
	long long res = 0;

        while (i < n && isdigit(s[i])) {
            int digit = s[i] - '0';
            res = res * 10 + digit;
            
            if (sign * res <= INT_MIN) {
                return INT_MIN;
            }
            if (sign * res >= INT_MAX) {
                return INT_MAX;
            }
            
            i++;
        }
        
        // Step 4: Apply sign and return
        return static_cast<int>(res * sign); 
    };
    bool Solution::isMatch(std::string s, std::string p)
    {
	    int n = s.length(), m =p.length();
	    std::vector<std::vector<bool>> dp(n+1,std::vector<bool>(m+1,false));
	   
	    dp[0][0] = true;
	    for(int i=0; i<=n; ++i)
	    {
		    for (int j=1; j<=m;++j)
		    {
			    if(p[j-1]=='*')
			    {
				    dp[i][j] = dp[i][j-2] || (i>0 && (s[i-1]==p[j-2]||p[j-2]=='.') && dp[i-1][j]);
			    }
			    else
			    {
				    dp[i][j] = i>0 && dp[i-1][j-1] && (s[i-1] == p[j-1]||p[j-1]=='.');
			    }
		    }
	    }
	    return dp[n][m];
    }

    int Solution::maxWater(std::vector<int>& height)
    {
	    int l =0;
	    int r = height.size()-1;
	    int res =0;

	    while(l<r)
	    {
		    int t = std::min(height[l],height[r])*(r-l);
		    res = std::max(res,t);
		    if (height[l]<height[r]) l++;
		    else r--;
	    }
	    return res;
    };

}
