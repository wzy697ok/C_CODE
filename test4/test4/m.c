#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

// int get_max(int x, int y)
//{//������
//	int z = 0;
//	if (x > y)
//		z = x;
//	else
//		z = y;
//	return z;
//
//}
//int main() {
//
//	int a = 20;
//	int b = 10;
//	int max = get_max(a,b);//�����ĵ���
//	printf("max=%d\n",max);
//	return 0;
//}
// void Swap(int *pa, int *pb) //�β� ���Զ�����
// //�����������͵ĵط�д�� void  ��ʾ��������������κ�ֵ
//  {
//	 int z = 0;
//	z = *pa;  //pa��ŵ���a�ĵ�ַ pb�Ƿ�b�ĵ�ַ
//	*pa = *pb;
//	*pb = z;
//
//}
//int main() {
//	int a = 10;//ʵ��
//	int b = 20;
//	
//	printf("a=%d b=%d\n", a, b);
//	Swap(&a, &b);//ʵ��
//		printf("a=%d b=%d\n",a, b);
//	return 0;
//}

//is_l( int x) {
//	if ((x % 4 == 0 && x % 100 != 0) || (x % 400 == 0))
//		return 1;
//	else
//		return 0;
//
//
//}
//
//int main() {
//	int y = 0;
//	for (y = 1000; y <= 2000; y++) {
//		if (is_l(y) == 1) {
//			//�����귵��1���Ƿ���0
//			printf("%d ", y);
//		}
//	}
//
//	return 0;
//}
//void add(int*p) {
//	(*p)++;
//
//}
//int main() {
//	int num = 0;
//	add(&num);
//	printf("%d ",num);
//	add(&num);
//	printf("%d ", num);
//	add(&num);
//	printf("%d ", num);
//	return 0;
//}

//������Ƕ�׺���ʽ����
//void test2() {
//	printf("hehe");
//}
//void test1() {
//	int i = 0;
//	for(i=0;i<3;i++){
//		test2();
//	}
//	
//		
//}
//
//
//int main() {
//	test1();
//	return 0;
//}


//int main() {
//
//	int l = strlen("abc");
//	printf("%d\n",l);
//	printf("%d\n", strlen("abc"));//��ʽ����
//	printf("%d", printf("%d", printf("%d", 43)));//��ӡ��Ļ�ַ����ĸ���
//	return 0;
//}

//int main() {
//	int a = 1;
//	int b = 3;
//	//��������  ��֪
//	int ADD(int, int);
//
//	int c = ADD(a, b);
//	printf("%d\n", c);
//	return 0;
//}
//int ADD(int x, int y) {
//	return x + y;
//}
//���뾲̬��
// pragma commment (lib,"�ļ���.lib")
//#include "sub.h"
//int main() {
//	int a = 10;
//	int b = 9;
//	int c = sub(a, b);
//	printf("%d\n", c);
//	return 0;
//}

//�ݹ�
//int main() {
//
//	printf("hehe");
//	main();
//	return 0;
//}

//void print(unsigned int n) {
//	if (n > 9) {
//
//		print(n / 10);
//	}
//	printf("%d", n % 10);
//}
//
//int main() {
//	unsigned int num = 0;
//	scanf("%u",&num);
//	print(num);//��ӡ�����������ֵ�ÿһλ
//
//	return 0;
//}

////д�ݹ��ʱ��
//�������ݹ� ������������
//�ݹ��β���̫���ջ*/���
//https://stackoverflow.com

//int mystrlen(char* str) {
//	int count = 0;
//	while (*str != '\0') {
//		count++;
//		str++;
//	}
//	return count;
//}

//int mystrlen(char* str) {
//	if (*str != '\0')
//		return 1 + mystrlen(str + 1);
//	else
//		return 0;
//}
//int main() {
//	char arr[] = "bit";
//	printf("%d\n",mystrlen(arr));
//
//	return 0;
//}

//ѭ����һ�ֵ���

//��쳲�������


//int fib(int n) {
//	if (n <= 2)
//		return 1;
//	else
//		return fib(n - 1) + fib(n - 2);
//
//}
//int main() {
//	int n = 0;
//	
//	int ret = fib(n);
//	printf("%d\n",ret);
//	return 0;
//}
//int fib(int n) {
//	int a = 1;
//	int b = 1;
//	int c = 0;
//
//	while (n>=3) {
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//}
//	return c;
//}
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fib(n);
//	printf("%d\n", ret);
//	return 0;
//}
void print_table(int n) {
	int i = 0;
	for (i = 1; i <= n; i++) {
		int j = 0;
		for (j = 1; j <= i; j++) {
			printf("%d*%d=%d ", i, j, i * j);
		}
		printf("\n");
	}

}

int main() {  //��ӡ�˷���
	int n = 0;
	scanf("%d", &n);
	print_table(n);

	return 0;
}
