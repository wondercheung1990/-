#include <stdio.h>

#define MAX 10

int arr[MAX+5]={0};

void f(int pos,int l,int r){
	if(l>r) return ;
	for(int i=l;i<=r;i++){
		arr[pos]=i;
		for(int j=0;j<=pos;j++){
			if(j) printf(" ");
			printf("%d",arr[j]);
		}
		printf("\n");
		f(pos+1,i+1,r);
	}
	return ;
}
 
int main(void){
	int n=0;
	scanf("%d",&n);
	f(0,1,n);
	return 0;
}
