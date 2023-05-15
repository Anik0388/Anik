// Prim's Algorithm in C++

#include <cstring>
#include <iostream>
using namespace std;


int main()
{
    int node,edge;
    cout<<"Enter the node and edge \n";
    cin>>node>>edge;
    int matrix[node+1][node+1]= {0};
    memset(matrix, 0 ,sizeof(matrix));
    for(int i = 0; i<edge; i++)
    {
        int n,m,w;
        cin>>n>>m>>w;
        matrix[n][m]=w;
        matrix[m][n]=w;
    }


    int no_edge;

    int visit[node];
    memset(visit, 0 ,sizeof(visit));

    no_edge = 0;

    visit[0]=1;
    int x,i,j;
    int y;

    while(no_edge<node-1)
    {
        int min  = INT_MAX;
        x=0;
        y=0;


        for(i = 0;i<node;i++)
        {
            if(visit[i])
            {
                for(j=0;j<node;j++)
                {
                    if(!visit[j] && matrix[i][j])
                    {
                        if(min>matrix[i][j])
                        {
                            min = matrix[i][j];
                            x=i;
                            y=j;
                        }
                    }
                }
            }
        }

        cout<<x<<" - "<< y<<" >= " <<matrix[x][y]<<endl;
        visit[y]=1;
        no_edge++;

    }






    return 0;
}
