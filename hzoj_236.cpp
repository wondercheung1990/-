#include <stdio.h>

#define MAX 10

int arr[MAX+5]={0};

void f(int limit,int pos,int l,int r){
	if(pos==limit){
		for(int i=0;i<limit;i++){
			if(i) printf(" ");
			printf("%d",arr[i]);
		}
		printf("\n");
		return ;
	}
	for(int i=l;i<=r&&r-i+pos+1>=limit;i++){
		arr[pos]=i;
		f(limit,pos+1,i+1,r);
	}
	return ;
}

int main(void){
	int n=0,m=0;
	scanf("%d %d",&n,&m);
	f(m,0,1,n);
	return 0;
}
