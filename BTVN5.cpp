#include <stdio.h>
#include <math.h>
int main(){
	int a,b;
	printf("Nhap a=");
	scanf("%d",&a);
	printf("nhap b=");
	scanf("%d",&b);
	
	if(a>=b){
		float thuong;
		thuong = (float) a/b;
		printf("a/b = %f",thuong);
	}else{
	if(a<=b){
		printf("%d",a*b);
		}
	}
}
