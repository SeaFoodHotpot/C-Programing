#include <stdio.h>

int main(void){
	double input_num, result;
	printf("Please enter kilometers: ");
	scanf("%lf",&input_num);
	result=input_num/1.609;
	printf("%.1f km is equal to %.1f miles",input_num,result);
	return 0;
}
