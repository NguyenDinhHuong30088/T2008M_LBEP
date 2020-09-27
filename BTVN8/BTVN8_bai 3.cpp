#include <stdio.h>
#include <math.h>
int Chuvi (float a, float b, float c){
		float Cv;
		if(a+b>c,a+c>b,b+c>a){
			Cv = a+b+c;
		}
		return Cv;
}
int main(){
	int a,b,c;
	do{
	printf("Nhap canh a = ");
	scanf("%d",&a);
	printf("Nhap canh b = ");
	scanf("%d",&b);
	printf("Nhap canh c = ");
	scanf("%d",&c);
	if(a<=0 || b<=0 || c<=0 || a+b<c || a+c<b || b+c<a ){
			printf("Nhap lai !\n");
		}
}while ( a<=0 || b<=0 || c<=0 || a+b<c || a+c<b || b+c<a );
	printf("Chu vi cua tam giac la : %d",Chuvi(a,b,c));
}

