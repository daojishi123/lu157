#include<stdio.h>
int main(void)
{
	int y,m,d,y1=1990,x,mun=0,d1=1,mun1=0,z;
	printf("请输入年月日：");
	scanf("%d %d %d",&y,&m,&d);

	for(y1;y1 < y;y1++){
		if(y1 % 4 == 0 && y1 % 100 != 0 || y1 % 400 == 0){
			mun += 366;
		}else{
			mun += 365;
		}	
	}
		
	for(int i = 1;i < m; i++){
		if(i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12){
			x = 31;
			mun1 += x;
		}else if(i == 4 || i == 6 || i == 9 || i == 11){
			x = 30;mun1 += x;
		}else if(i == 2){
			if(y % 4 == 0 && y % 100 != 0 || y % 400 ==0){
				x = 29;mun1 += x;
			}else{
				x = 28;mun1 += x;
			}
		}
	}

	mun = mun + mun1 + d;
	z = mun % 7;
	printf("      %d 年 %d 月\n 日 一 二 三 四 五 六\n",y,m);
	
	while(z){
		printf("   ");
		z--;
	}	

	if(x == 0){
		x = 31;
	}
	for(int i = 1;i <= x; i++){
		printf(" %2d",d1);
		d1++;
	
		if((i+mun % 7) % 7 == 0) printf("\n");
	}

	printf("\n");
	printf("%d\n",mun);
	printf("%d\n",mun1);
	
	return 0;
}


int year(int){


}
