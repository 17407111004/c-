#include<stdio.h>
#include<Windows.h>
//#pragma warning(disable:4996)
int main(){
//��ӡ100��200֮�������
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
	//����˷��ھ���
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

//�ж�1000�굽2000��֮������꣬4��һ��100�겻��400��һ��
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
//�����������α�����ֵ��������ֵ�����ݽ��н���
/*int main(){
	int a = 2;
	int b = 3;
	//printf("��������������:");
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
//����������ʱ����������������������
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
//��10�������е����ֵ
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
//�����������Ӵ�С���
/*int main(){
	int a = 1;
	int b = 2;
	int c = 3;
	//printf("����������������");
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
//�������������Լ��
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
