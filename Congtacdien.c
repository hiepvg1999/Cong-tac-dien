#include <stdio.h>
#define hang 5
#define cot 3
void menu();
void battattheohang();
void battattheocot();
void battattheovitri();
void congsuathientai();
int den[hang][cot],congsuat[hang][cot];//mang den de luu trang thai va mang cong suat de luu cong suat hien tai
int main()
{
	int i,j;
	int choice; 
	for (i=1;i<=hang;i++)
	{
		for (j=1;j<=cot;j++)
            {
            	den[i][j]=0;   //khoi tao trang thai tat
            }
	}
		
    do{
    	menu();
    	
    	scanf("%d",&choice);
    	switch(choice){
    		case 1: {
            battattheohang();

    		};
    		break;
    		case 2: {
    		battattheocot();

    		};
    		break;
            case 3:{
            battattheovitri();

            };
            break;
    		case 4:{
            congsuathientai();
    		};
    		break;
    		case 5:{
    			printf("\n\nCAM ON .\n");
    		};
    		break;
    		default: printf("Nhap sai roi!.\n");
    	}

    }while(choice!=5);
	return 0;
}
int batden(){
	return 1;
}
int tatden(){
	return 0;
}
void menu(){
	printf("1.Cho nguoi dung bat va tat den theo hang\n");
	printf("2.Cho nguoi dung bat va tat den theo cot\n");
	printf("3.Cho nguoi dung bat va tat den theo vitri\n");
	printf("4.In ra cong suat hien tai\n");
	printf("5. Thoat\n");
	printf("Your choice: ");
}
void battattheohang(){
	int choice,n,i;  //n la hangf 
printf("Che do bat tat den theo hang:\n");
printf("Bat hay tat??\n");
printf("Your choice: ");
scanf("%d",&choice);
/*1 la bat va 2 la tat*/
switch(choice){
	case 1:{
    tt1:do{
    	printf("Hang thu: ");
    	scanf("%d",&n);
    }while(n<0||n>hang);
    if(den[n][1]==0||den[n][2]==0||den[n][3]==0)
    {
    	for(i=1;i<=cot;i++)
    		den[n][i]=1;
    }
    else goto tt1;
	};
	break;
	case 2:{
     tt2:do{
    	printf("Hang thu: ");
    	scanf("%d",&n);
    }while(n<0||n>hang);
    if(den[n][1]==1||den[n][2]==1||den[n][3]==1)
    {
    	for(i=1;i<=cot;i++)
    		den[n][i]=0;
    }
    else goto tt2;
	};
	break;
	default: printf("Nhap so 1 hoac 2.\n");
}
}
void battattheocot(){
	int choice,n,i;  //n la cot
printf("Che do bat tat den theo cot:\n");
printf("Bat hay tat??\n");
printf("Your choice: ");
scanf("%d",&choice);
/*1 la bat va 2 la tat*/
switch(choice){
	case 1:{
    tt3:do{
    	printf("Cot thu: ");
    	scanf("%d",&n);
    }while(n<0||n>cot);
    if(den[1][n]==0||den[2][n]==0||den[3][n]==0||den[4][n]==0||den[5][n]==0)
    {
    	for(i=1;i<=hang;i++)
    		den[i][n]=1;
    }
    else goto tt3;
	};
	break;
	case 2:{
     tt4:do{
    	printf("Cot thu: ");
    	scanf("%d",&n);
    }while(n<0||n>cot);
    if(den[1][n]==1||den[2][n]==1||den[3][n]==1||den[4][n]==1||den[5][n]==1)
    {
    	for(i=1;i<=hang;i++)
    		den[i][n]=0;
    }
    else goto tt4;
	};
	break;
	default: printf("Nhap so 1 hoac 2.\n");
}
}
void battattheovitri(){
 
	int choice,n,m;  //n la hang m la cot
printf("Che do bat tat den theo vitri:\n");
printf("Bat hay tat??\n");
printf("Your choice: ");
scanf("%d",&choice);
/*1 la bat va 2 la tat*/
switch(choice){
	case 1:{
    tt5:do{
    	printf("Hang cot: ");
    	scanf("%d%d",&n,&m);
    }while(n<0||n>hang||m<0||m>cot);
    if(den[n][m]==0)
    {
    den[n][m]=1;
    }
    else goto tt5;
	};
	break;
	case 2:{
    tt6:do{
    	printf("Hang cot: ");
    	scanf("%d%d",&n,&m);
    }while(n<0||n>hang||m<0||m>cot);
    if(den[n][m]==1)
    {
    den[n][m]=0;
    }
    else goto tt6;
	};
	break;
	default: printf("Nhap so 1 hoac 2.\n");
}
}

void congsuathientai(){
int i,j;
printf("Trang thai den hien tai:\n");
for (i=1;i<=hang;i++)
{
	for(j=1;j<=cot;j++)
		printf("%-6d",den[i][j] );
	printf("\n");
}
printf("\n");
for (i=1;i<=hang;i++)
{
	for(j=1;j<=cot;j++)
		if(i%2==1&&j%2==1)
		{
			congsuat[i][j]=10;
		}
		else if(i%2==0&&j%2==0)
		{
			congsuat[i][j]=20;
		}
		else congsuat[i][j]=15;
}
printf("Cong suat o trang thai hien tai:\n");
for (i=1;i<=hang;i++)
{
	for(j=1;j<=cot;j++)
		printf("%-6d",den[i][j]*congsuat[i][j] );
	printf("\n");
}
printf("\n");
}