#include <stdio.h>

int main(void){
	int even[5]={'@','@','@','@','@'};
	int odd[5]={'@','@','@','@','@'};
	int inputs[5];
	int i;
	int even_count=0,odd_count=0;
	
	printf("Please input five integers: ");//입력받기 
	for(i=0;i<5;i++){
		scanf("%d",&inputs[i]);}
	
	for(i=0;i<5;i++){ //짝수 홀수 구분해서 리스트에 입력 
		if(inputs[i]%2==0){//짝수 even
		even[even_count]=inputs[i];
		even_count++;}
		else if(inputs[i]%2==1){//홀수 Odd 
		odd[odd_count]=inputs[i];
		odd_count++;}}
	
	printf("\nOdd numbers: ");//홀수 출력 
	for(i=0;i<5;i++){
		if(odd[i]=='@'){
			i=i;}
		else{
			printf("%d ",odd[i]);}}
			
	printf("\nEven numbers: ");//짝수 출력 
	for(i=0;i<5;i++){
		if(even[i]=='@'){
			i=i;}
		else{
			printf("%d ",even[i]);}}
			
	return 0;
}
