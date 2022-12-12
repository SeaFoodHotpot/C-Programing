#include <stdio.h>

struct countrys{
	char name[50];
	char country[50];
	int people;
};

void BufferClear(void){
	while(getchar()!='\n');
}

void input_information(char *name, char *country, int *people){
	printf("Name > ");
	scanf("%[^\n]s",name);
	BufferClear();
	printf("Country > ");
	scanf("%[^\n]s",country);
	BufferClear();
	printf("Population > ");
	scanf("%d",people); 
	BufferClear();
}

int main(void){
	struct countrys cnt1,cnt2,cnt3;
	printf("Input three cities: \n");
	input_information(cnt1.name,cnt1.country,&cnt1.people);
	input_information(cnt2.name,cnt2.country,&cnt2.people);
	input_information(cnt3.name,cnt3.country,&cnt3.people);
	printf("\nPrinting the three cities: \n");
	printf("%s in %s with a population of %d people\n",cnt1.name,cnt1.country,cnt1.people);
	printf("%s in %s with a population of %d people\n",cnt2.name,cnt2.country,cnt2.people);
	printf("%s in %s with a population of %d people\n",cnt3.name,cnt3.country,cnt3.people);
	return 0;
}
