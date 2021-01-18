#include<stdio.h>
#include<math.h>

int main(){
/*	
	int a, c, x;
	char b;
	
	printf("请输入一个四则运算：");
	scanf("%d%c%d",&a,&b,&c);
	
	x = b;
	
	switch(x){
	
		case 43 :printf("%d %c %d = %d\n",a,b,c,a+c);break; 
		case 45 :printf("%d %c %d = %d\n",a,b,c,a-c);break;
		case 42 :printf("%d %c %d = %d\n",a,b,c,a*c);break;
		case 47 :printf("%d %c %d = %d\n",a,b,c,a/c);break;
	}
*/


/*
	int num, x, y, sum=0;
	printf("请输入一个四位整型数：");
	scanf("%d",&num);

	x = (num % 100) / 10;
	
	while(num){
		y = num % 10;
		num /=10;
		if(y == x) sum++;
	}
	printf("十位出现%d次\n",sum);
*/


/*	int a, b;

	printf("请输入行数：");
	scanf("%d",&a);
	b = a - 1;
	for(int i = 1; i <= a; i++){
		
		for(int x1 = 1; x1 <= a - i; x1++){
			printf("  ");
		}
		for(int x = 1; x <= i + i -1; x++){
			printf(" *");
		}

		printf("\n");
	}
	
	for(int j = b; j >0; j--){
		
		for(int x1 = a - j; x1 > 0; x1--){
			printf("  ");
		}
		for(int x = j + j -1; x > 0; x--){
			printf(" *");
		}

		printf("\n");
	}

*/


/*
	int a,b;
	
	for(int i = 0; i < 2000; i++){
		for(int j = 0; j < (sqrt(2000)); j++){
			if(j * j == i + 100){
				for(int x = 0; x < (sqrt(2000)); x++){
					if(x * x == i + 268){
						printf("%d\n",i);
						
					}
				}
			}
		}
	
	
	}
*/


/*  
	//1.

	int y, m, sum=0;
		
	printf("请输入年:");
	scanf("%d",&y);
	printf("请输入月:");
	scanf("%d",&m);
		
	if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10){
		sum = 31;
	}
	else if (m == 4 || m == 6 || m == 9 || m == 11){
		sum = 30;
	} else {
		if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0){
			sum = 29;
		} else {
			sum = 28;
		}
	}
	printf("%d年%d月有%d天\n", y, m ,sum);
*/

/*
	//2.

	int a, b, c = 0;
	printf("请输入范围：");
	scanf("%d",&a);
	
	for(int i = 1; i < a; i++){
		b = 0;
		for(int j = 1; j < i; j++){
			if(i % j == 0){
				b += j;
			}
		}
		if(b == i){
			printf("%d\n",i);
			c++;
		}
	}
	printf("共%d个\n", c);

*/


/*
	//3.

	for(int i = 1; i < 10; i++){
		for(int x = i - 1; x > 0; x--){
			printf("         ");
		}

		for(int j = i; j < 10; j++){
		

			for(int y = j; y <= j; y++){
				printf("%2d*%2d=%2d ", i, j, i*j);
			
			}
		}
		printf("\n");
	}

*/

/*	
	//4.

	int y, m, d, sum = 0;

	printf("请输入年:");
	scanf("%d",&y);
	printf("请输入月:");
	scanf("%d",&m);
	printf("请输入日:");
	scanf("%d",&d);

	for (int i = 1; i < m; i++) {
		if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10)
			sum += 31;
		else if (i == 4 || i == 6 || i == 9 || i == 11)
			sum += 30;
		else
			if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
				sum += 29;
			else 
				sum += 28;
	}

	sum += d;

	printf("%d/%d/%d是这一年的第%d天\n", y, m, d, sum);

*/



}
