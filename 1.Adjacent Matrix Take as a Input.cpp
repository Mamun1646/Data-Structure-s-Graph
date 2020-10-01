#include<bits/stdc++.h>
using namespace std;
int AdjM[100][100];
int main()
{   freopen("input1.txt","r",stdin);
    int node,edge;
    cin>>node>>edge;
    int v1,v2;
    for(int i=0;i<edge;i++){
            cin>>v1>>v2;
            AdjM[v1][v2]=1;
            AdjM[v2][v1]=1;

    }
   for(int i=0;i<node;i++){
        for(int j=0;j<node;j++){
            cout<<AdjM[i][j]<<" ";
        }
            printf("\n");
            }

}

