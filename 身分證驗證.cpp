#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char id[26]={10,11,12,13,14,15,16,17,34,18,19,20,21,22,35,23,24,25,26,27,28,29,32,30,31,33};
	char num[10];
	char num2[2];
	int R,tot=0;
	printf("input the Identity card number you want to verification:\n");
	scanf("%s",num);
	num2[0]=num[0];
	R=(int)num2[0];
	tot=id[R-65];
	sprintf(num2,"%d",tot);
	tot=num2[0]-48+(num2[1]-48)*9+num[1]*8+num[2]*7+num[3]*6+num[4]*5+num[5]*4+num[6]*3+num[7]*2+num[8]+num[9];
	if(tot%10==0)
	{
		printf("correct");
	}
	else
	{
		printf("incorrect");
	}
	return 0;
}