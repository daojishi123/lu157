#include<stdio.h>

int main(void){
/*
	for(int i = 1; i <=10; i++){
		if(i != 5){
			printf("第%d次运球\n",i);
		}else{
			printf("第5次运球，肚子疼，停止运/球\n");
			break;
		}
	}
int a,sum=0;

	printf("请输入一个数：");
	scanf("%d",&a);
	
	for(int i = 1; i <= a; i+=2){
		sum = sum + i;
	}
	printf("前n项和是%d\n",sum);
	return 0;
*/

/*	
	int a,b=0;

	printf("请输入一个整数：");
	scanf("%d",&a);

	for(a; a > 0;){
		b = b * 10 +a % 10;
		a = a / 10;
	}
	printf("%d\n",b);
*/
	int b = 0, n = 0, x;

	for(int i = 100; i < 1000; i++){
		x = i;
		n = 0;
		for(x; x > 0; ){
			b = x % 10;
			n = n + b * b * b;
			x = x / 10;
		}
		if(i == n) printf("%d是水仙花数\n",i);
	}




}
