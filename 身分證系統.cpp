#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
char id[26]={10,11,12,13,14,15,16,17,34,18,19,20,21,22,35,23,24,25,26,27,28,29,32,30,31,33};
char num[9];
char num2[2];
int R,tot2=0;
int place;
char Fid[2];
char ID[10];
int gen;
int Op();
int verification();
int ver();
int VER();
int MLoading();
int ELoading();
int Error();
int Rand();
int main()
{
	while(1)
	{
		int mode;
		char temp[1];
		Op();
		printf("請問要啟動驗證器(1)、產生器(2)還是關閉程式(3):");
		scanf("%d",&mode);
		switch(mode)
		{
			case 1:
				system("cls");
				Op();
				srand(time(NULL));
				system("cls");
				printf("A=10 台北市    J=18 新竹縣    S=26 高雄縣 \n");
			  	printf("B=11 台中市    K=19 苗栗縣    T=27 屏東縣 \n");
			  	printf("C=12 基隆市    L=20 台中縣    U=28 花蓮縣 \n");
			    printf("D=13 台南市    M=21 南投縣    V=29 台東縣 \n");
			  	printf("E=14 高雄市    N=22 彰化縣    W=32 金門縣 \n");
			  	printf("F=15 台北縣    O=35 新竹市    X=30 澎湖縣 \n");
			  	printf("G=16 宜蘭縣    P=23 雲林縣    Y=31 陽明山 \n");
			  	printf("H=17 桃園縣    Q=24 嘉義縣    Z=33 連江縣 \n");
			  	printf("I=34 嘉義市    R=25 台南縣 \n");
			  	printf("輸入地區(10~35):");
			  	scanf("%d",&place);
			  	if(place>35|place<10)
			  	{
			  		Error();
			  		break;
				}
			  	printf("輸入你的性別(1:男,2:女):");
			  	scanf("%d",&gen);
				if(gen>2|gen<0)
			  	{
			  		Error();
			  		break;
				}
				sprintf(Fid,"%d",place);
				Fid[0]=Fid[0]-48;
				Fid[1]=Fid[1]-48;
				MLoading();
				Rand();
				ver();
				break;
			case 2:
				system("cls");
				Op();
				printf("輸入身分證字號\n");
				scanf("%s",num);
				num2[0]=num[0];
				R=(int)num2[0];
				tot2=id[R-65];
				sprintf(num2,"%d",tot2);
				num2[0]=num2[0]-48;
				num2[1]=num2[1]-48;
				for(int i=1;i<10;i++)
				{
					num[i]=num[i]-48;
				}
				tot2=num2[0]+num2[1]*9+num[1]*8+num[2]*7+num[3]*6+num[4]*5+num[5]*4+num[6]*3+num[7]*2+num[8]+num[9];
				verification();
				if(tot2%10==0)
					{
						printf("正確\n");
					}
					else
					{
						printf("錯誤\n");
					}
				break;
			case 3:
				ELoading();
				break;
			default:
				Error();
				break;
		}
		printf("\n是否要繼續(Y/N):");
		scanf("%s",temp);
		if(temp[0]=='Y'|temp[0]=='y')
		{
			
		}
		else
		{
			ELoading();
			break;
		}
	}
	return 0;

}

Error()
{
	printf("System Error");
	return 0;
}

Rand()
{
	int id[9],tot,Temp;
	char temp;
	do
	{
		id[0]=gen;
		for(int i=1;i<9;i++)
		{
			id[i]=rand() % 10;
		}
		tot=Fid[0]+Fid[1]*9+id[0]*8+id[1]*7+id[2]*6+id[3]*5+id[4]*4+id[5]*3+id[6]*2+id[7]+id[8];
	}while(tot%10!=0);
	Temp=Fid[0]*10+Fid[1];
	switch(Temp)
	{
		case 10:
			printf("A");
			ID[0]='A';
			break;
		case 11:
			printf("B");
			ID[0]='B';
			break;
		case 12:
			printf("C");
			ID[0]='C';
			break;
		case 13:
			printf("D");
			ID[0]='D';
			break;
		case 14:
			printf("E");
			ID[0]='E';
			break;
		case 15:
			printf("F");
			ID[0]='F';
			break;
		case 16:
			printf("G");
			ID[0]='G';
			break;
		case 17:
			printf("H");
			ID[0]='H';
			break;
		case 18:
			printf("J");
			ID[0]='J';
			break;
		case 19:
			printf("K");
			ID[0]='K';
			break;
		case 20:
			printf("L");
			ID[0]='L';
			break;
		case 21:
			printf("M");
			ID[0]='M';
			break;
		case 22:
			printf("N");
			ID[0]='N';
			break;
		case 23:
			printf("P");
			ID[0]='P';
			break;
		case 24:
			printf("Q");
			ID[0]='Q';
			break;
		case 25:
			printf("R");
			ID[0]='R';
			break;
		case 26:
			printf("S");
			ID[0]='S';
			break;
		case 27:
			printf("T");
			ID[0]='T';
			break;
		case 28:
			printf("U");
			ID[0]='U';
			break;
		case 29:
			printf("V");
			ID[0]='V';
			break;
		case 30:
			printf("X");
			ID[0]='X';
			break;
		case 31:
			printf("Y");
			ID[0]='Y';
			break;
		case 32:
			printf("W");
			ID[0]='W';
			break;
		case 33:
			printf("Z");
			ID[0]='Z';
			break;
		case 34:
			printf("I");
			ID[0]='I';
			break;
		case 35:
			printf("O");
			ID[0]='O';
			break;
		default:
			printf("Error");
			break;
	}
	for(int i=0;i<9;i++)
		{
			ID[i]=id[i];
			printf("%d",id[i]);
		}
	return 0;
}

Op()
{
	for(int i=0;i<5;i++)
	{
		printf("Opening.");
		Sleep(200);
		printf(".");
		Sleep(200);
		printf(".");
		Sleep(200);
		system("cls");
	}
	return 0;
}

MLoading()
{
	int j,k;
	for(int i=0;i<10;i++)
	{
		j=i;
		for(int i=0;i<3;i++)
		{
			k=i+1;
			printf("Making");
			for(int i=0;i<k;i++)
			{
				printf(".");
			}
			printf("\n");
			for(int i=0;i<j;i++)
			{
				printf("▊");
			}
			Sleep(200);
			system("cls");
		}
	}
	return 0;
}

ELoading()
{
	int j,k;
	for(int i=0;i<10;i++)
	{
		j=i;
		for(int i=0;i<3;i++)
		{
			k=i+1;
			printf("stopping");
			for(int i=0;i<k;i++)
			{
				printf(".");
			}
			printf("\n");
			for(int i=0;i<j;i++)
			{
				printf("▊");
			}
			Sleep(200);
			system("cls");
		}
	}
	return 0;
}

verification()
{
	int j,k;
	for(int i=0;i<10;i++)
	{
		j=i;
		for(int i=0;i<3;i++)
		{
			k=i+1;
			printf("Verifying");
			for(int i=0;i<k;i++)
			{
				printf(".");
			}
			printf("\n");
			for(int i=0;i<j;i++)
			{
				printf("▊");
			}
			Sleep(200);
			system("cls");
		}
	}
	return 0;
}

ver()
{
	char temp[1];
	printf("\n是否驗證剛剛產生的身分證字號(Y/N):");
	scanf("%s",temp);
	if(temp[0]=='Y'|temp[0]=='y')
	{
		VER(); 
	} 
	else
	{
		return 0;
	}
	return 0;
}

VER()
{
	system("cls");
	Op();
	tot2=Fid[0]+Fid[1]*9+ID[0]*8+ID[1]*7+ID[2]*6+ID[3]*5+ID[4]*4+ID[5]*3+ID[6]*2+ID[7]+ID[8];
	verification();
	if(tot2%10==0)
		{
			printf("正確\n");
		}
		else
		{
			printf("錯誤\n");
		}
	return 0;
}
