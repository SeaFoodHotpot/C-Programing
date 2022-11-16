#include <stdio.h>
#include <math.h>

void pyojoon(double *nums,double *ppc){
	int i;
	double average,sum;
	
	for(i=0;i<5;i++){
		average+=nums[i];}
	average/=5;
	
	for(i=0;i<5;i++){
		sum+=pow((nums[i]-average),2);}
	
	*ppc=sqrt(sum/5);//표준편차 
}

int main(void){
	double nums[5], pyo;
	int i;
	printf("Enter 5 real numbers: ");
	for(i=0;i<5;i++){
		scanf("%lf", &nums[i]);}
	pyojoon(nums,&pyo);
	printf("Standard Deviation = %.3f",pyo);
}
