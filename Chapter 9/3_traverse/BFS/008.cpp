#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <queue>
#define max 10

using namespace std;

struct node{
	int id;
	int layer;
};

int n,l,num_follow,id_follow;
vector<node> vt[max];
bool inq[max]={false};

int BFS(int s,int l);

int main(){
	node user;
	scanf("%d%d",&n,&l);
	for(int i=1;i<=n;i++){
		scanf("%d",&num_follow);
		for(int j=0;j<num_follow;j++){
			scanf("%d",&id_follow);
			user.id=i;
			vt[id_follow].push_back(user);
		}
	}
	// for(int i=1;i<=n;i++){
	// 	for(int j=0;j<vt[i].size();j++){
	// 		printf("%d",vt[i][j]);
	// 	}
	// 	printf("\n");
	// }
	int test_num,ques_num;
	scanf("%d",&test_num);
	for(int i=0;i<test_num;i++){
		memset(inq,false,sizeof(inq));
		scanf("%d",&ques_num);
		int ans=BFS(ques_num,l);
		printf("%d\n",ans);
	}
	system("pause");
	return 0;
}

int BFS(int s,int l){
	queue<node> q;
	node start;
	start.id=s;
	start.layer=0;
	q.push(start);
	int count=0;
	inq[start.id]=true;	
	while(q.empty()!=true){
		node topNode=q.front();
		q.pop();
		int u=topNode.id;
		for(int i=0;i<vt[u].size();i++){
			node next=vt[u][i];
			next.layer=topNode.layer+1;
			if(inq[next.id]==false && next.layer<=l){
				q.push(next);
				count++;
				inq[next.id]=true;
			}
		}
	}
	return count;
}