#include<stdio.h>
#include<math.h>

int caopiao(int sum);
int chepai(int sum);
int suishu(int sum);
int xunhuan(int sum);
int data(int x);
int main(void){
	
	int sz;
	int jw,jm,jz;
	int sum;
	printf("求纸币数量请输入1：\n求车牌请输入2：\n求年龄请输入3：\n求完全平方数请按4：\n求素数请按5：\n求鸡的数量请输入6\n");
	scanf("%d",&sz);
	
	switch(sz){
		case 1:printf(" \n");
			   for(int i = 0;i < 10;i++){
				   for(int j = 0;j < 25;j++){
					   for(int x = 0;x < 50;x++){
						   for(int y = 0;y < 100;y++){
							   if((i * 50 + j * 20 + x * 10 + y * 5 == 500)  && (i > 0 && j > 0 && x > 0 && y > 0)){
								   sum = i + j + x + y;
								   printf("需要%2d张50元,需要%2d张20元,需要%2d张10元,需要%2d张5元,共%2d张。\n",i,j,x,y,sum);
							   }	   
						   }
					   }
				   }
			   }

			   break;
		
		case 2:printf(" \n");
			   printf("车牌是%d\n",chepai(0));
			   break;
		
		case 3:printf(" \n");
			   printf("第五个人%d岁。",suishu(10));
			   break;
		
		case 4:printf(" \n");
			   printf("完全平方数有：");
			   
			   for(int i = 10;i <= sqrt(200);i++){
				   printf("%d  ",xunhuan(i));
			   }
			   break;
		
		case 5:printf(" \n");
			   
			   for(int i = 100;i < 1000;i++){
					while(data(i)){
						printf("%d  ",i);
						break;
					}
			   }
			   break;

		case 6:printf(" \n");
			   for(jw = 0;jw < 33;jw++){
				   for(jm = 0;jm < 50;jm++){
					   for(jz = 0;jz < 100;jz += 3){
						   if(jw * 3 + jm * 2 + jz / 3 == 100 && jw + jm + jz == 100){
							   printf("鸡翁%2d只，鸡母%2d只，鸡崽%2d只\n",jw,jm,jz);
						   }
					   }
				   }
			   }
			   break;
	}
}

int chepai(int sum){
	
	for(int i = 0;i <= 9;i++){
		for(int j = 0;j <= 9;j++){
			sum = i * 1000 + i * 100 + j * 10 + j;
			for(int y = 1;y <= 100;y++){
				if(i != j && sum == (y * y)){
					return sum;
					break;
				}
			}
		}
	}

}

int suishu(int age){
	
	for(int i = 1;i < 5;i++){
		age += 2;
	}

	return age;

}

int xunhuan(int sum){

	for(int i = 100;i <= 200;i++){
		for(int j = sum;j <= sqrt(200);j++){
			if(i == j * j){
				return j;
				break;
			}

		}
	}
}

int data(int x){

	int j;

	for(j = 2; j < x;j++){
		if(x % j == 0){
			break;
		}
	}
	if(x == j){
		return 1;
		
	}else{
		return 0;
	}
	
}







