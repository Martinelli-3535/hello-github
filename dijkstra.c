#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define TRUE 1
#define FALSE 0
#define MAX_VERTICES 100
#define INF 1000000
#define NODES 7


typedef struct GraphType {
	int n;
	int weight[MAX_VERTICES][MAX_VERTICES];
}GraphType;

int distance[MAX_VERTICES];
int found[MAX_VERTICES];
int path[NODES];

int choose(int distance[], int n, int found[])
{
	int i, min, minpos;
	min = INT_MAX;
	minpos = -1;
	for (int i = 0; i < n; i++)
		if (distance[i] < min && !found[i])
		{
			min = distance[i];
			minpos = i;
		}
	return minpos;
}

void print_status(GraphType* g)
{
	static int step = 1;
	printf("STEP %d:", step++);
	printf("distance: ");
	for (int i = 0; i < g->n; i++)
	{
		if (distance[i] == INF)
			printf(" * ");
		else
			printf("%2d ", distance[i]);
	}
	printf("\n");
	printf("  found  ");
	for (int i = 0; i < g->n; i++)
		printf("%2d ", found[i]);
	printf("\n\n");
}

void shortest_path(GraphType* g, int start)
{
	int i, u, w;
	
	for (i = 0; i < g->n; i++)
	{
		distance[i] = g->weight[start][i];
		path[i] = 0; // path 초기화
		found[i] = FALSE;
	}
	found[start] = TRUE;
	distance[start] = 0;
	for (i = 0; i < g->n; i++)
	{
		print_status(g);
		u = choose(distance, g->n, found);
		found[u] = TRUE;

		for (w = 0; w < g->n; w++)
		{
			if (!found[w])
				if (distance[u] + g->weight[u][w] < distance[w])
				{
					distance[w] = distance[u] + g->weight[u][w];
					path[w] = u; // 최단경로를 찾는 과정에서 동선을 path에 넣어준다.
				}
		}
	}
}

void print_path(int start, int end)
{
	printf(" %d->%d: %d",start,end, end); // 0->3 식으로 출발 노드와 도착 노드를 출력해주고, 도착노드를 한번 더 출력한다.
	int p = end; 
	do {
		printf("<-%d", path[p]); // 경유 노드를 출력한다.
		p = path[p]; //union_find식으로 노드를 찾아가는 과정
	} while (path[p]); //path[p] 가 존재하지 않으면 종료
	printf("<-%d" , start); // 출발 노드를 한번 출력해준다.	
}

int main(void)
{
	GraphType g = { 7,
	{{0,7,INF,INF,3, 10, INF},
	{7,0,4,10,2,6,INF },
	{INF,4,0,2,INF,INF,INF},
	{INF,10,2,0,11,9,4},
	{3,2,INF,11,0,INF,5},
	{10,6,INF,9,INF,0,INF},
	{INF,INF,INF,4,5,INF,0}}
	};

	shortest_path(&g, 0);	
	print_path(0, 3); // 역순으로 출력이 되었는데, 스택을 생성하여 집어넣은 후 하나씩 pop하면 정방향으로도 출력 가능하다.

	printf("\n");

	for (int i = 0; i < 7; i++)
	{
		printf("%d ", path[i]);
	}
	return 0;
}
	
