#include<stdio.h>
int main(void)
{
	/*int a;
	for(int i;i<=100;i++){
	a=a+i;
	}
	printf("前100项的和是%d",a);
	*/

	
	/*int a;
	for(int i;i<=100;i++){
		if(i % 3 == 0 && i % 5 == 0){
		printf("%d能同是被3和5整除\n",i);
		a+=1;

		}
	}
	printf("一百以内有%d个能被3和5整除的数",a);
	*/
	
    /*
	int a,b;
	printf("请输入一个整数：");
	scanf("%d",&a);
	for(a;a>0;a){
	b=a%10;
	a=a/10;
	printf("%d\n",b);
	}
	*/
	/*
	int a,b=0;
	printf("输入：");
	scanf("%d",&a);
	for(a;a>0;){
	b=b*10+a%10;
	a=a/10;
	}
	printf("%d",b);
	*/

	/*
	int a;
	for(int i = 100;i<1000;i++){
		a = i % 10;
		if(a == 6 && i % 3 == 0 && i % 5 !=0){
		printf("%d，",i);
		}
	}
	*/


	int n,y,r,y1,y2=0;
	printf("请输入年：");
	scanf("%d",&n);
 	printf("请输入月：");
	scanf("%d",&y);
	printf("请输入日：");
	scanf("%d",&r);

		for(int i = 1;i <= y;i++){
			if(i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10){
				y1 = 31;
			}else if(i == 4 || i == 6 || i == 9 || i == 11){
				y1 = 30;
			}else{
				if(n % 4 == 0 && n % 100 != 0 || n % 400 ==0){
					y1 = 29;
				}else{
					y1 = 28;
				}
			}
		y2 = y2 + y1 - 31;
		}
	y2 = y2 + r;
	
	printf("%d年%d月%d日是这年的第%d天\n",n,y,r,y2);


	return 0;
	


}
