#include<stdio.h>
#include<string.h>

void main()
{
	int a,len,upr=0,lwr=0,no=0,special=0;
	char psw[100];
	
	printf("enter the strong password:- \n");
	gets(psw);
	
	len=strlen(psw);
	printf("length of your password is :- %d\n",len);
	
	for(a=0;a<=len;a++){
		if(psw[a]>='A' && psw[a]<='Z' ) upr++;
		if(psw[a]>='a' && psw[a]<='z' ) lwr++;
		if(psw[a]>='0' && psw[a]<='9' ) no++;
		if(psw[a]=='@' || psw[a]=='$' ) special++;
	}
		if(upr>0 && lwr>0 && no>0 && special>0){
			printf("strong password");
		}
		else{
			printf("weak pasword");
		}
}
