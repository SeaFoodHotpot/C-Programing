#include <stdio.h>

void lee_jinsu(int num){
	if(num>1){
		lee_jinsu(num/2);}
	printf("%d",num%2);
}

int main(void){
	int inputs;
	printf("Please enter a number: ");
	scanf("%d",&inputs);
	lee_jinsu(inputs);
	return 0;
}
