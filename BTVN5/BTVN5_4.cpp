#include <stdio.h>
int main(){
	int n,i,j,count = 0 ;
	printf ( " Nhap n: " );
	scanf ( " % d " , & n);
	if(n < 2 ){
		printf( " Khong co so nguyen to nho hon 2 " );
	}else{
		for(i=2;i<=n;i ++) {
            for (j=2 ;j<=i;j++){
                if(i% j == 0){
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
