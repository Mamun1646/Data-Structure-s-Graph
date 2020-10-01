#include<bits/stdc++.h>
using namespace std;
#define white 1
#define gray  2
#define black 3

int AdjM[100][100];
int node,edge;
int color[100];
int STime[100];
int FTime[100];
int Time=1;


void visitDfs(int x)
{
    color[x]=gray;
    STime[x]=Time;
    ++Time;
    for(int i=0;i<node;i++)
    {
        if(AdjM[x][i]==1){
               if(color[i]==white) {
            visitDfs(i);}
    } }


    color[x]=black;
    FTime[x]=Time;
    ++Time;


}
void dfs()
{
    for(int i=0;i<node;i++)
        color[i]=white;
        for(int i=0;i<node;i++){
            if(color[i]==white){
                    visitDfs(i);

            }}
}

int main()
{   freopen("input3.txt","r",stdin);

    cin>>node>>edge;
    int v1,v2;
    for(int i=0;i<edge;i++){
            cin>>v1>>v2;
            AdjM[v1][v2]=1;
            AdjM[v2][v1]=1;

    }
    dfs();
    for(int i=0;i<node;i++)
    {
        cout<<(char)('A'+i)<<"=Starting Time: "<<STime[i]<<" Finishing Time: "<<FTime[i]<<endl;
    }



}


