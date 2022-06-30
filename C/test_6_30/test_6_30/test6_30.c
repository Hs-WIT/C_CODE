#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


int main()
{
	//数组
	int i=0;
	int arr[10] = { 0 };
	//输入
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	int max = arr[0];//假设数组第一个元素就是最大值
	//拿剩下的元素跟max比较
	for (i = 1; i < 10; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	//输出
	double sum = 0;
	for (i = 0; i < 10; i++)
	{
		sum = sum + arr[i];
	}
	
	printf("max=%d\n", max);
	printf("sum=%lf\n", sum);
	double avg = sum / 10;
	printf("avg=%lf\n", avg);
	return 0;
}


