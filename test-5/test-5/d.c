#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int dig(int n) {
	if (n > 9) {

		return dig(n / 10) + n % 10;

	}
	else
	{
		return n;
	}
}
int main() {
	int num = 1729;
	int sum = dig(num);
	printf("%d\n",sum);
	return 0;
}
double Pow(int n,int k) {
	if (k == 0)
		return 1.0;
	else if (k > 0)
	return n * Pow(n, k - 1);
	else
		return 1.0 / (Pow(n, -k));
}

int main() {

	int n = 0;
	int k = 0;
	scanf("%d %d", &n, &k);
	double ret = Pow(n, k);
	printf("%lf\n",ret);
}

int a = 0;
int arr[5] = { 1,2,3,4,5 };//完全初始化 ==int arr[] = { 1,2,3,4,5 };
int arr[5] = { 1,2,3 };//不完全初始化
char ch1[5] = { 'b','i','t' };//有五个元素后面两个事\0  直到打印斜杠0才能停止会乱码长度是随机值
char ch2[] = { 'b','i','t' };//只有三个元素
char ch3[5] = "bit";//b i t \0 \0
char ch4[] = "bit";//b i t \0


int main() {
	int arr[10] = { 1 };
	arr[4] = 5;//下标引用
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++) {
		printf("%d", arr[i]);
	}
	return 0;
}

int main() {
	//printf("%x\n", 0x12);
	//printf("%p\n", 0x12);

	int arr[10] = { 0 };
	int i = 0;
	for (i = 0; i < 10;i++) {
		printf("&arr[%d] = %p\n", i, &arr[i]);//一维数组在内存中是连续存放的 随着下标的增长 地址是由低到高变化的
	}

	return 0;
}
