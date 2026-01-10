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

}
