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
int arr[5] = { 1,2,3,4,5 };//��ȫ��ʼ�� ==int arr[] = { 1,2,3,4,5 };
int arr[5] = { 1,2,3 };//����ȫ��ʼ��
char ch1[5] = { 'b','i','t' };//�����Ԫ�غ���������\0  ֱ����ӡб��0����ֹͣ�����볤�������ֵ
char ch2[] = { 'b','i','t' };//ֻ������Ԫ��
char ch3[5] = "bit";//b i t \0 \0
char ch4[] = "bit";//b i t \0


int main() {
	int arr[10] = { 1 };
	arr[4] = 5;//�±�����
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
		printf("&arr[%d] = %p\n", i, &arr[i]);//һά�������ڴ�����������ŵ� �����±������ ��ַ���ɵ͵��߱仯��
	}

	return 0;
}
