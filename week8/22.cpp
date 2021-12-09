Assume that a project of road construction to connect some cities is given to your friend. Map of these cities and roads which will connect them (after construction) is provided to him in the form of a graph. Certain amount of rupees is associated with construction of each road. Your friend has to calculate the minimum budget required for this project. The budget should be designed in such a way that the cost of connecting the cities should be minimum and number of roads required to connect all the cities should be minimum (if there are N cities then only N-1 roads need to be constructed). He asks you for help. Now, you have to help your friend by designing an algorithm which will find minimum cost required to connect these cities. (use Prim's algorithm)
 #include<bits/stdc++.h>
using namespace std;
int main()
{   int nodes, edges;
    cin>>nodes;
    cin>>edges;
   vector<pair<int,int>> graph[nodes];
    int source, destination, weight;
    for(int i=0;i<edges;i++)
    {   cin>>source>>destination>>weight;
        graph[source].push_back(make_pair(destination,weight));
        graph[destination].push_back(make_pair(source, weight));
    }
    int key[nodes
    int parent[nodes
    bool mst[nodes];  
    for(int i=0;i< nodes;i++)
    {   key[i]= INT_MAX;
        mst[i] = false;
        parent[i] = -1; }
    priority_queue<pair<int, int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    key[0] = 0;
    parent[0] = 0;
    pq.push({0, 0}); 
 for(int i=0;i< nodes-1;i++)
    {   int u = pq.top().second;
        pq.pop();//remove the node from queue
        mst[u] = true;//set mst as true for the node u
 	for(auto it: graph[i])
        {  int dest = it.first;
            int wt = it.second;
            if(mst[dest]== false && wt<key[dest])
            {  parent[dest] = u;
                pq.push({key[dest], dest});
                key[dest] = wt;
            }}}
    int mstwt = 0;
    // to print the list with minimun weight
    for(int i=0;i<nodes;i++)
        mstwt += key[i];
    cout<<"Min Spanning Weight is: "<<mstwt;
    return 0;
}
 
 
 
