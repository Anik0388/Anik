
#include <iostream>
using namespace std;
#include <limits.h>


int V=9;


int minDistance(int dist[], bool sptSet[])
{
	int min = INT_MAX, min_index;

	for (int v = 0; v < V; v++)
		if (sptSet[v] == false && dist[v] <= min)
			min = dist[v], min_index = v;

	return min_index;
}



void printSolution(int dist[])
{
	cout << "Vertex \t Distance from Source" << endl;
	for (int i = 0; i < V; i++)
		cout << i << " \t\t\t\t" << dist[i] << endl;
}

int main()
{

    int graph[V][V];
	for (int i = 0; i < 14; ++i)
    {
    	int x,y,z;
    	cin>>x>>y>>z;
    	graph[x][y]=z;
    	graph[y][x]=z;

    }

	int dist[V];

	bool sptSet[V];

	for (int i = 0; i < V; i++)
		dist[i] = INT_MAX, sptSet[i] = false;


	dist[0] = 0;


	for (int count = 0; count < V - 1; count++) {

		int u = minDistance(dist, sptSet);

		sptSet[u] = true;


		for (int v = 0; v < V; v++)

			if (!sptSet[v] && graph[u][v] && dist[u] != INT_MAX && dist[u] + graph[u][v] < dist[v])
				dist[v] = dist[u] + graph[u][v];
	}
    printSolution(dist);


	return 0;
}


