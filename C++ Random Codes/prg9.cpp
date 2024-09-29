// #include <bits/stdc++.h>
// using namespace std;

// void bellman_ford(vector<vector<int>> &adjM, int src, int n){
//     vector<int> dist(n, INT_MAX);
//     for(int i=0;i<n-1;i++){
//         for(int u=0;u<n;u++){
//             for(int v=0;v<n;v++){
//                 if((adjM[u][v]!=0 && dist[u]!=INT_MAX)){
//                     if(adjM[u][v] + dist[u] <= dist[v]){
//                         dist[v] = adjM[u][v] + dist[u];
//                     }
//                 }
//             }
//         }
//     }

//     for(int u=0;u<n;u++){
//         for(int v=0;v<n;v++){
//             if()
//         }
//     }
// }

// int main(){
//     int n;
//     cout<<"Enter number of vertices"<<endl;
//     cin>>n;
//     vector<vector<int>> adjM(n, vector<int>(n, 0));
//     cout<<"Enter Vertices (0 for no edge, weight if there is an edge)";
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cin>>adjM[i][j];
//         }
//     }
//     int src;
//     cout<<"Enter Source"<<endl;
//     cin>>src;
//     bellman_ford(adjM, src, n);
//     return 0;
// }
