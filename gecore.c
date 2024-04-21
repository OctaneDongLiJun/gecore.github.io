#include<stdio.h>
#include<math.h>
#include<windows.h>
#include<time.h>
#include<conio.h>
void cmd(){
	printf("在CMD模式下，你可以输入实用程序的文件名，如“back.exe”返回到正常模式下\n\n");
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
	 printf("输出已完成！\n"); 
}
void oneforone(){
	int i,j,c,f,a,b,m,k,g,t,h;
	printf("\n");
	printf("一共10个空位，请输入数值:\n");
	printf("在此处输入，用“,”分开数值:");
	scanf("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d",&i,&j,&c,&a,&b,&m,&k,&g,&t,&h);
	f=j+i+c;
	printf("计算结果:%d\n",f);
	 
}
void fiveone(){
	int RR[7][2]={{3,0},{10,210},{20,1410},{25,2660},{30,4410},{35,7160},{45,15160}};
	float x,s=0.0;
	int g;
	printf("\n");
	printf("输入扣除6项专项附加\n扣除五险一金后的月收入:\n");
	scanf("%f",&x);
	x=x-5000;
	if(x<3000) g=0;
	else if(x<12000) g=1;
	else if(x<25000) g=2;
	else if(x<35000) g=3;
	else if(x<55000) g=4;
	else if(x<80000) g=5;
	else g=6;
	printf("税率级别=%d\n",g);
	if(x>0)s=x*RR[g][0]/100-RR[g][1];
	printf("个人税率=%.2f\n",s);
}
void goodday(){
	int num=rand()%100+1;
	int guess=0;
	while (1)
	{
		printf("使劲猜，狠狠的猜！请输入你猜的数1-100:");
		scanf("%d",&guess);
		if(guess<num)
		{
			printf("小了\n");
		}
		else if (guess>num)
		{
			printf("大了\n");
		}
		else
		{
		printf("恭喜你！猜对了\n");
		break;
		}
	}
}
int main(){
	char ZIFU;
	system("title GECORE实用程序");
	printf("----------------------------------------------------------------------\n");
	printf("温馨提示：更改程序的名称会导致程序出现BUG，所以请勿修改！\n\n"); 
	printf("欢迎使用GECORE实用程序服务\n");
	printf("本程序使用Dev-C++ 6.7.5编写\n");
	printf("\n");
	printf("请输入指定内容的数字，然后按下Enter:\n");
	printf("1.九九乘法表  2.三格加法计算器  3.启动命令提示符  4.扣除五险一金后月收入\n5.GECORE官方B站  6.猜数字游戏  7.贪吃蛇\n");
	printf("----------------------------------------------------------------------\n");
	printf("USER>:");
	ZIFU=getchar();
	switch(ZIFU){
		case'1':display(); break; 
		case'2':oneforone(); break;
		case'3':cmd(); break;
		case'4':fiveone();break;
		case'5':printf("\n哔哩哔哩，启动！！！"); ShellExecute(0, "open", "https://space.bilibili.com/3546579912886702", 0, 0, 1);break;
		case'6':goodday();break;
		case'7':system("tcs.exe");break;
	}
	system("back.exe");
	getch();
}
