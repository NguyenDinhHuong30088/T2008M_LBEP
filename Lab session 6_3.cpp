#include<stdio.h>
int main(){
	int n;
	printf("Nhap n = ");
	scanf("%d",&n);
	int ary[n];
	for(int i=0;i<n;i++){
		printf("Phan Tu Thu %d: ",i);
		scanf("%d",&ary[i]);
	}
	int x;
	printf("Nhap So Vao: ");
	scanf("%d",&x);
	bool c = false;
	for(int i=0;i<n;i++){
		if(x==ary[i]){
			printf("%d Nam Trong Mang",x);
			c = true;
			break;
		}
	}
	if(!c){
		printf("Khong Co x Trong Mang");
	}
}
