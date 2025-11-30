
#include "algorithms/graph.h"

namespace algorithms
{
    graph::graph()
    {}
    void graph::bfs(int start)
    {
       std::queue<int> q;  //queue
       q.push(start);      //add to queue
       used[start] = true; // the vertex is viseted
       dist[start] =0;     //distance from start to start

       while(!q.empty())
       {
            int v = q.front(); //take the vertex
            q.pop();           // delete from queue

            for(int to:g[v])  // look at near vertex
            {
                if (!used[to]) //if not visited
                {
                    used[to] =true; //visited
                    dist[to] = dist[v] +1; //distance form start to current vertex
                    q.push(to);
                }

            }

       }

    }

    void graph::dfs(int v)
    {
        used[v] = true; //visiting the vertex
        for (int  to:g[v])
        {
            if(!used[to])
            {
                dfs(to);
            }
        }

    }


}