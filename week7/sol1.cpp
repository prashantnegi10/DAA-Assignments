After end term examination, Akshay wants to party with his friends. All his friends are living as paying guest and it has been decided to first gather at Akshay’s house and then move towards party location. The problem is that no one knows the exact address of his house in the city. Akshay as a computer science wizard knows how to apply his theory subjects in his real life and came up with an amazing idea to help his friends. He draws a graph by looking in to location of his house and his friends’ location (as a node in the graph) on a map. He wishes to find out shortest distance and path covering that distance from each of his friend’s location to his house and then whatsapp them this path so that they can reach his house in minimum time. Akshay has developed the program that implements Dijkstra’s algorithm but not sure about correctness of results. Can you also implement the same algorithm and verify the correctness of Akshay’s results? (Hint: Print shortest path and distance from friends’ location to Akshay’s house)

#include<bits/stdc++.h>
using namespace std;
void path(vector<int>& parent, int j){
    if (parent[j] == - 1){
        cout<<j;
        return;    }
    printf("%d ", j);
    path(parent, parent[j]);
}
 int main()
{int n,e;
    cin>>n>>e;
    vector<vector<pair<int,int>>> graph(n+1);
    for(int i=0;i<e;i++)
    {  int s,d,w;
        cin>>s>>d>>w;
        graph[s].push_back({d,w});
        graph[d].push_back({s,w});   }
    vector<int> dist(n+1,INT_MAX);
    set<pair<int,int>> s;
    int source;
    cin>>source;    
    dist[source]=0; 
    s.insert({0,source});   
    vector<int> parent(n+1, -1);
    while(!s.empty()){
        auto x = *(s.begin());  
        s.erase(x); 
        for(auto it: graph[x.second]){
            if(dist[it.first] > dist[x.second]+it.second){  
                s.erase({dist[it.first],it.first});
                dist[it.first] = dist[x.second]+it.second;
                s.insert({dist[it.first],it.first});
                parent[it.first]=  x.second;      
            }} }
    for(int i=1;i< n+1;i++){
        path(parent, i);
        cout<<" : "<<dist[i]<<endl;
 }   return 0;
}
 

