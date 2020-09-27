#include <stdio.h>
#include<math.h>
int ucln(int a, int b){
    while (a*b != 0){ 
        if (a > b){
        a = a % b;
        }else{
            b %= a;
        }
    }
    return a + b;
}
int main(){
	int a,b;
	printf("Nhap a = ");
	scanf("%d",&a);
	printf("Nhap b = ");
	scanf("%d",&b);
	printf("Uoc Chung Lon Nhat Cua 2 So La: %d",ucln(a,b));
}
