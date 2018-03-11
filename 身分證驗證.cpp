#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int zzz();
int main()
{
	char id[26]={10,11,12,13,14,15,16,17,34,18,19,20,21,22,35,23,24,25,26,27,28,29,32,30,31,33};
	char num[10];
	char num2[2];
	char con[1];
	int R,tot=0;
	restart:
	system("cls");
	zzz();
	printf("input the Identity card number you want to verification:\n");
	scanf("%s",num);
	num2[0]=num[0];
	R=(int)num2[0];
	tot=id[R-65];
	sprintf(num2,"%d",tot);
	num2[0]=num2[0]-48;
	num2[1]=num2[1]-48;
	for(int i=1;i<10;i++)
	{
		num[i]=num[i]-48;
	}
	tot=num2[0]+num2[1]*9+num[1]*8+num[2]*7+num[3]*6+num[4]*5+num[5]*4+num[6]*3+num[7]*2+num[8]+num[9];
	zzz();
	if(tot%10==0)
		{
			printf("correct\n");
		}
		else
		{
			printf("incorrect\n");
		}
	printf("whether to continue(y/n):\n");
	scanf("%s",con);
	switch(con[0])
	{
		case 89:
			goto restart;
			break;
		case 121:
			goto restart;
			break;
		default:
			break;
	}
	return 0;
}
zzz()
{
	for(int i=0;i<5;i++)
	{
	printf("loading.");
	Sleep(200);
	printf(".");
	Sleep(200);
	printf(".");
	Sleep(200);
	system("cls");
	}
	return 0;
}