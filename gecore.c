#include<stdio.h>
#include<math.h>
#include<windows.h>
#include<time.h>
#include<conio.h>
void cmd(){
	printf("��CMDģʽ�£����������ʵ�ó�����ļ������硰back.exe�����ص�����ģʽ��\n\n");
	system("cmd.exe");
}
void display(){
	int i,j;
	printf("\n-------------------------------------------------------------------------\n");
	for(i=1;i<10;i++)
	printf("%5d   ",i); 
	printf("\n-------------------------------------------------------------------------\n");
	for(i=1;i<10;i++)
	{
		for(j=1;j<=i;j++)
		printf("%2d*%d=%-3d",i,j,i*j);
		printf("\n");
	 }
	 printf("-------------------------------------------------------------------------\n");
	 printf("\n");
	 printf("�������ɣ�\n"); 
}
void oneforone(){
	int i,j,c,f,a,b,m,k,g,t,h;
	printf("\n");
	printf("һ��10����λ����������ֵ:\n");
	printf("�ڴ˴����룬�á�,���ֿ���ֵ:");
	scanf("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d",&i,&j,&c,&a,&b,&m,&k,&g,&t,&h);
	f=j+i+c;
	printf("������:%d\n",f);
	 
}
void fiveone(){
	int RR[7][2]={{3,0},{10,210},{20,1410},{25,2660},{30,4410},{35,7160},{45,15160}};
	float x,s=0.0;
	int g;
	printf("\n");
	printf("����۳�6��ר���\n�۳�����һ����������:\n");
	scanf("%f",&x);
	x=x-5000;
	if(x<3000) g=0;
	else if(x<12000) g=1;
	else if(x<25000) g=2;
	else if(x<35000) g=3;
	else if(x<55000) g=4;
	else if(x<80000) g=5;
	else g=6;
	printf("˰�ʼ���=%d\n",g);
	if(x>0)s=x*RR[g][0]/100-RR[g][1];
	printf("����˰��=%.2f\n",s);
}
void goodday(){
	int num=rand()%100+1;
	int guess=0;
	while (1)
	{
		printf("ʹ���£��ݺݵĲ£���������µ���1-100:");
		scanf("%d",&guess);
		if(guess<num)
		{
			printf("С��\n");
		}
		else if (guess>num)
		{
			printf("����\n");
		}
		else
		{
		printf("��ϲ�㣡�¶���\n");
		break;
		}
	}
}
int main(){
	char ZIFU;
	system("title GECOREʵ�ó���");
	printf("----------------------------------------------------------------------\n");
	printf("��ܰ��ʾ�����ĳ�������ƻᵼ�³������BUG�����������޸ģ�\n\n"); 
	printf("��ӭʹ��GECOREʵ�ó������\n");
	printf("������ʹ��Dev-C++ 6.7.5��д\n");
	printf("\n");
	printf("������ָ�����ݵ����֣�Ȼ����Enter:\n");
	printf("1.�žų˷���  2.����ӷ�������  3.����������ʾ��  4.�۳�����һ���������\n5.GECORE�ٷ�Bվ  6.��������Ϸ  7.̰����\n");
	printf("----------------------------------------------------------------------\n");
	printf("USER>:");
	ZIFU=getchar();
	switch(ZIFU){
		case'1':display(); break; 
		case'2':oneforone(); break;
		case'3':cmd(); break;
		case'4':fiveone();break;
		case'5':printf("\n��������������������"); ShellExecute(0, "open", "https://space.bilibili.com/3546579912886702", 0, 0, 1);break;
		case'6':goodday();break;
		case'7':system("tcs.exe");break;
	}
	system("back.exe");
	getch();
}
