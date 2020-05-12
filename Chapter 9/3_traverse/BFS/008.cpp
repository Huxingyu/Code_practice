#include<stdlib.h>
#include<iostream>
#include<vector>
#include<queue>

using namespace std;

struct Node{
	int id, level;
};

int maxlevel, numforward;
vector<Node> Adj[1001];

void BFS(int start){
	bool inq[1001] = {false};
	queue<Node> q;
	q.push({start,0});
	inq[start] = true;
	while (!q.empty()){
		Node now = q.front();
		q.pop();
		for (int i = 0; i < Adj[now.id].size(); i++){
			Node next = Adj[now.id][i];
			next.level = now.level + 1;
			if (!inq[next.id] && next.level <= maxlevel){
				inq[next.id] = true;
				q.push(next);
				numforward++;
			}
		}
	}
}
int main()
{
	int n, m, followed, k, query;
	scanf("%d%d", &n, &maxlevel);
	for (int i = 1; i < n + 1; i++){
		scanf("%d", &m);
		for (int j = 0; j < m; j++){
			scanf("%d", &followed);
			Adj[followed].push_back({i,0});
		}
	}
	scanf("%d", &k);
	for (int i = 0; i < k; i++){
		scanf("%d", &query);
		numforward = 0;
		BFS(query);
		printf("%d\n", numforward);
	}
    system("pause");
	return 0;
}