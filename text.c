#include<stdio.h>
#include<Windows.h>
//#pragma warning(disable:4996)
int main(){
//打印100到200之间的素数
	int i = 100;
	for (; i <= 200; i++){
		int j = 0;
		for (j = 2; j <i / 2; j++){
			if (i % j == 0){
				break;
			}
		}
		if (j == (i / 2)){
			printf("%d\n", i);
		}
	}
	/*int i = 100;
	for (; i <= 200; i++){
		int j = 0;
		for (j=2; j < i; j++){
			if (i%j == 0){
				break;
			}
		}
		if (i == j){
			printf("%d\n", i);
		}
	}
	*/
system("pause");
	return 0;
}

/*int main(){
	//输出乘法口诀表
	int i = 1;
	int sum = 0;
	for (; i <= 9; i++){
		int j = 1;
		for (; j <= i; j++){
			sum = i*j;
			printf("%d*%d=%d ", i, j, sum);
		}
		printf("\n");
	}
system("pause");
	return 0;
}*/

//判断1000年到2000年之间的闰年，4年一闰100年不闰400年一闰
/*int main(){
	int i = 1000;
	for (; i <= 2000; i++){
		if (i % 4 == 0&&i%100!=0||i%400==0){
			printf("%d\n", i);
		}
	}
system("pause");
	return 0;
}*/
//给定两个整形变量的值，将两个值得内容进行交换
/*int main(){
	int a = 2;
	int b = 3;
	//printf("请输入两个整数:");
	//scanf_s("&d&d", &a, &b);
	printf("a=%d b=%d\n", a, b);
	int sum = 0;
	sum = a;
	a = b;
	b = sum;
	printf("a=%d b=%d ", a, b);
system("pause");
	return 0;
}*/
//不允许创建临时变量，交换两个数的内容
/*int main(){
	int a = 2;
	int b = 3;
	printf("a=%d b=%d\n", a, b);
	//a = a + b;
	//b = a - b;
	//a = a - b;
	a = a^b;
	b = a^b;
	a = a^b;
	printf("a=%d b=%d", a, b);
    system("pause");
	return 0;
}*/
//求10个整数中的最大值
/*int main(){
 int arr[10] = { 9, 4, 7, 8, 5, 1, 10, 6, 2, 3, };
 int i = 0;
 int max = 0;
 for (; i < 10; i++){
	 if (arr[i]>arr[0]){
		 max = arr[0];
		 max = arr[i];
	 }
	  }
 printf("%d", max);
system("pause");
	return 0;
}*/
//将三个数按从大到小输出
/*int main(){
	int a = 1;
	int b = 2;
	int c = 3;
	//printf("请输入三个整数：");
		//scanf("%d%d%d", a, b, c);
	if (a > b&&a > c){
		if (b > c){
			printf("%d %d &d", a, b, c);
		}
	}
	if (a > b&&a < c){
		printf("%d %d %d", c, a, b);
}
    printf("%d %d %d", c, b, a);
system("pause");
	return 0;
}*/
//求两个数的最大公约数
/*int main(){
	int x = 10;
	int y = 15;
	while (1){
		if (x > y){
			x = x - y;
		}
		else if (x < y){
			y = y - x;
		}
		else{
			break;
		}
	}
	printf("%d", x);
	//   int x = 1;
	     int y = 2;
	     int min = x > y ? y : x;
	     while (min > 1){
		 if (x%min == 0 && y%min == 0){
		 break;
	     }
		 min--;
	     }
	//   printf("%d", min);
system("pause");
	return 0;
}*/
