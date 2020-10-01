#include<bits/stdc++.h>
using namespace std;
#define white 1
#define gray  2
#define black 3

int AdjM[100][100];
int node,edge;
int color[100];
int parent[100];
int dis[100];
void bfs(int startingNode)
{       queue<int>q;
    for(int i=0;i<node;i++){
        color[i]=white;
        parent[i]=-1;
        dis[i]=INT_MIN;
        }
         parent[startingNode]=-1;
        dis[startingNode]=0;
        q.push(startingNode);

    while(!q.empty())
    {
            int x;
            x=q.front();
            q.pop();
            color[x]=gray;
            //cout<<x<<" ";
            for(int i=0;i<node;i++)
            {
                if(AdjM[x][i]==1){
                    if(color[i]==white){
                    //x er neighber i
                    // x hocce i er parent
                    parent[i]=x;
                    dis[i]=dis[x]+1;
                    q.push(i);
                }}
            }
            color[x]=black;
            cout<<x<<" ";
    }



}



int main()
{   freopen("input4.txt","r",stdin);

    cin>>node>>edge;
    int v1,v2;
    for(int i=0;i<edge;i++){
            cin>>v1>>v2;
            AdjM[v1][v2]=1;
            AdjM[v2][v1]=1;

    }
    bfs(0);
    cout<<endl;
    cout<<parent[6]<<" "<<dis[3];




}


