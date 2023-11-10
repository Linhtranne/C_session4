#include<stdio.h>
int main(){

	int number;
	printf("Nhap so : ");
	scanf("%f",&number);
if (number % 3 == 0 && number % 5 == 0){
        printf("true\n", number);
    } else {
        printf("False \n", number);
    }

    return 0;
}