#pragma once
#include<iostream>
#include<vector>
#include<format>
#include<climits>
#include<string>
#include<algorithm>
namespace algorithms
{
    class Solution
    {
        public:
            int findJudge(int n, std::vector<std::vector<int>>& trust);
	    int findReverse(int x); //finding reverse of int number
	    int myAtoi(std::string s);   //my Atoi function
            bool isMatch(std::string s, std::string p); // match string with some condition
	    int maxWater(std::vector<int>& height);
	    std::string intToRoman(int num);
   	   
    };

}
