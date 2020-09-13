#include <stdio.h>
#include <math.h>
int main(){
	int a;
	printf("nhap a = ");
	scanf("%d",&a);
	if(a>=2){
		if(a<=7){
			printf("day la thu %d",a);
		}else{
			if(a==8){
				printf("day la chu nhat");
				
			}else{
				printf("day khong phai la ngay trong tuan");
			}
		}
	}else{
		printf("day khong phai la ngay trong tuan");
	}
}
