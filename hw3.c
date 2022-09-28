#include <stdio.h>

int main(void){
	int i,j,k,l;
    for(i=0;i<5;i++){
    	for(j=0;j<5-i;j++){
    		printf(" ");}
      
    	for(k=0;k<2*i+1;k++){
    		printf("*");}
      
    	for(l=0;l<5-i;l++){
    		printf(" ");}	
      
    	printf("\n");}
    return 0;
}
