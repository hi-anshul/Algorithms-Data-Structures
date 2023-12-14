#include <bits/stdc++.h>
using namespace std;

void bfsPrint(vector<vector <int>> v, int sv,vector<bool> &visited){
    int n = v.size();
    queue<int> q;
    q.push(sv);
    visited[sv] = true;

    while(!q.empty()){
        int cv = q.front();
        q.pop();
        cout<<cv<<endl;
        for (int i = 0; i < n; i++) {
            if(v[cv][i]==1 && visited[i]==false){
                q.push(i);
                visited[i]=true;
            }
        }
    }

}

void BFS(vector<vector<int>> matrix){
    int n = matrix.size();
    vector<bool> visited(n,false);
    for (int i = 0; i < n; i++) {
        if(!visited[i]){
            bfsPrint(matrix,i,visited);
        }
    }
}

void printDFS(vector<vector<int>> v, int sv, vector<bool> &visited){
    cout<<sv<<endl;
    visited[sv] = true;
    int n = v.size();
    for (int i = 0; i < n; i++) {
        if(v[sv][i]== 1 && visited[i]==false){
            printDFS(v,i,visited);
        }
    }
}

void DFS(vector<vector<int>> matrix){
    int n = matrix.size();
    vector<bool> visited(n,false);
    for (int i = 0; i < n; i++) {
        if(!visited[i]){
           printDFS(matrix,i,visited);
        }
    }
}

void connectedComponents(vector<vector<int>> matrix){
    int n = matrix.size();
    vector<bool> visited(n,false);
    int count = 0;
    for (int i = 0; i < n; i++) {
        if(!visited[i]){
            count++;
            bfsPrint(matrix,i,visited);
        }
    }
    cout<<"The no of connected components is: "<<count<<endl;
}

int main() {
    int n, e;
    cin>>n>>e;

    vector<vector<int>> matrix(n,vector<int>(n,0));

    for (int i = 1; i <= e; i++) {
        int fv,sv;
        cin>>fv>>sv;
        matrix[fv][sv] =1;
        matrix[sv][fv] =1;
    }
    vector<bool> visited(n,false);
    cout<<"DFS"<<endl;
    DFS(matrix);

    cout<<"Connected Components with BFS"<<endl;
    connectedComponents(matrix);

return 0;
}
