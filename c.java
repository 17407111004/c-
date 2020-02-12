public class c {
    //#include<stdio.h>
//#include<Windows.h>
/*int main(){
	//将数组A中的内容和B中的内容互换
	int arr1[] = { 1, 2, 3, 4, 5 };
	int arr2[] = { 6, 7, 8, 9, 0 };
	int arr3[5];
	int i = 0;
	for (; i < 5; i++){
		arr3[i] = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = arr3[i];
	}
	for (i = 0; i < 5; i++){
		printf("%d ", arr1[i]);
	}
	printf("\n");
	for (i = 0; i < 5; i++){
		printf("%d ", arr2[i]);
	}
	system("pause");
	return 0;
}*/
//计算1/1-1/2+1/3-1/4......+1/99-1/100的值
 /*
 double getValue(){
	double sum = 0;
	int i = 1;
	for (; i <= 100; i++){
		if (i % 2 ==0){
			sum -= 1 / i;
		}
		else{
			sum += 1 / i;
		}
	}
	return sum;
}
int main(){
	printf("%lf\n", getValue());
system("pause");
	return 0;
}*/
//编写程序数一下1到100中所以整数中出现多少个数字9.
/*
int main(){
	int i = 0;
	int sum = 0;
	int x = 0;
	int y = 0;
	for (i = 1; i <= 100; i++){
		x= i / 10;
		  y = i % 10;
		  if (x == 9){
			  sum++;
		  }
		  if (y == 9){
			  sum++;
		  }
	}
	printf("%d\n", sum);
system("pause");
	return 0;
}*/
/*在屏幕上输出以下图形
*
* *
* * *
......
* * * * * * * *
......
* * *
* *
*
*/

/*
int main(){
	int i = 1;
	for (; i <=9; i++){
		int j = 1;
		for (; j <= 2 * i - 1; j++){
			printf("*");

		}
		printf("\n");
	}
	for (i = 8; i >=1; i--){
		int j = 1;
		for (j=1; j <= i*2-1; j++){
			printf("*");

		}
		printf("\n");
	}
system("pause");
	return 0;
}*/
//求出100到999之间的所有水仙花数并输出
//3位数的每位上的数字的3次幂之和等于它本身
/*
int main(){
	int i = 100;
	int j,sum,k,l,m;

	for (; i <= 999; i++){
		j = i % 10;
		sum = i / 10;
		k = sum % 10;
		l = sum / 10;
		m = l*l*l + k*k*k + j*j*j;
		if (i == m){
			printf("%d\n", i);
		}
	}
system("pause");
	return 0;
}*/
//求Sn=a+aa+aaa+aaaa+aaaaa的前五项之和，其中a是一个数字
// 0*10+2=2  2*10+2=22  22*10+2=222  222*10+2=2222  2222%10+2=22222
/*
int main(){
	int i = 0;
	int a = 0;
	int sum = 0;
	int num = 2;
	for (; i < 5; i++){
		a = a * 10 + num;
		sum = sum + a;
	}
	printf("%d", sum);
	system("pause");
	return 0;
}*/
//完成猜数字游戏 用随机数生成1到100之间的数，然后用户输入数字，系统会自己判断猜大了还是小了，还是猜中了，当
//猜中后，系统会提示用户是否再来一局。否则结束游戏
#include<stdio.h>
#include<Windows.h>
#include<time.h>
/*
int Menu()//打印菜单
{
	printf("***************\n");
	printf("    1,开始游戏 \n");
	printf("    0,退出游戏 \n");
	printf("***************\n");
	printf("请输入数字\n");
	int choice = 0;
	scanf_s("%d", &choice);
	return choice;
}
//计算机产生一个随机数1到100之间 并开始猜
void Game(){
	printf("进入游戏\n");
	int result = rand() % 100 + 1;//产生一个随机数
	while (1){
		printf("请输入数字\n");
		int num = 0;
		scanf_s("%d", &num);
		if (num < result){
			printf("猜低了\n");
        }
		else if (num>result){
			printf("猜高了\n");
		}
		else{
			printf("恭喜你猜对了！\n");
			break;
		}
	}
}

int main(){
	srand((unsigned)time(NULL));//生成一个随机数种子
	while (1){
		int choice = Menu();
		if (choice == 1){
			Game();
		}
		else if (choice == 0){
			printf("退出游戏\n");
			break;
		}
		else{
			printf("输入有误！请重新输入\n");
		}
	}
	system("pause");
	return 0;
}*/

}
