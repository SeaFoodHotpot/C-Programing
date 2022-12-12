#include <stdio.h>
#include <string.h>
	
void convCase(char *ch){
	int len=strlen(ch);
	int i;
	const int diff='a'-'A';
	for(i=0;i<len;i++){
    	if(ch[i]>='A'&&ch[i]<='Z'){
	    	ch[i]+=diff;}
	    else if(ch[i]>='a'&&ch[i]<='z'){
		    ch[i]-=diff;}
	    else{
		    i=i;}}
}

int main(void){
	char ch[100]={0};
	scanf("%[^\n]s", ch);
	convCase(ch);
	printf("%s",ch); 
	return 0;
}
