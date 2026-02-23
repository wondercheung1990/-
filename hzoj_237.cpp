#include <stdio.h>

#define MAX 10

int arr[MAX+5]={0};
int visit[MAX+5]={0};

void f(int pos,int l,int r){
	if(pos==r){
		for(int i=0;i<r;i++){
			if(i) printf(" ");
			printf("%d",arr[i]);
		}
		printf("\n");
		return ;
	}
	for(int i=l;i<=r;i++){
		if(visit[i]) continue;
		arr[pos]=i;
		visit[i]=1;
		f(pos+1,l,r);
		visit[i]=0;
	}
	return ;
}

int main(void){
	int n=0;
	scanf("%d",&n);
	f(0,1,n);
	return 0;
}
