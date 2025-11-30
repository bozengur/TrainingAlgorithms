#pragma once
#include <iostream>
#include <vector>
#include <queue>

namespace algorithms
{
    class graph
    {
        public:
        graph();
        void bfs(int start);
        void dfs(int v);
        private:
        std::vector<std::vector<int>> g;  //graph
        std::vector<bool> used;           // visited flag
        std::vector<int> dist;            // the distance from the start
    };
} 
