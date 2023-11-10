#include<stdio.h>
#include<math.h>
int main(){
	float so_moi, so_cu;
	printf("nhap so moi va so cu : ");
	scanf(" %f %f" ,&so_moi ,&so_cu);
	float dien = so_moi - so_cu;
	if( 0 <= dien < 50 ){
		printf("so dien la %1.f\n" ,dien * 10000 );
	}
	else if(50 <= dien < 100 ){
		printf("so dien la %1.f\n" ,dien * 15000 );
	}
    else if(100 <= dien < 150 ){
		printf("so dien la %1.f\n" ,dien * 20000 );
	}
	else if(150 <= dien < 200 ){
		printf("so dien la %1.f\n" ,dien * 25000 );
	}
	else if( dien > 2000 ){
		printf("so dien la %1.f\n" ,dien * 30000 );
	}
	return 0;
}
