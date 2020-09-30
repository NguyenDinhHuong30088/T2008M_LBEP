#include <stdio.h>
int main(){
	int a,b,i,j,count = 0 ;
	printf("Nhap a,b: ");
	scanf("%d%d",&a,&b);
	if(b < 2 ) {
		printf ( " Khong co so nguyen to nho hon 2 " );
	}else{
		for (i = a; i <= b; i ++) {
            for (j = 2 ; j <= i; j ++) {
                if(i% j == 0 ) {
                    count++;
                }
            }
            if (count == 1 ) {
                printf ( " \ t % d \ n " , i);
            }
            count = 0 ;
        }
	}
}
