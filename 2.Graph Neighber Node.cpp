#include<bits/stdc++.h>
using namespace std;
int AdjM[100][100];
void Neighber(int node,int TNode)
{
       for(int i=0;i<TNode;i++){

           if( AdjM[node][i]==1)
            cout<<i<<endl;


    }
}
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
    int n;cin>>n;
    Neighber(n,node);


}

