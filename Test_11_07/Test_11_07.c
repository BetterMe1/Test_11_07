#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//寻找key值的下标
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;//sizeof(arr) / sizeof(arr[0])是数组长度；由于最左端记为0，因此再减去1将最右端下标记为数组长度-1；
	int key;
	printf("请输入要查找的值：");
	scanf("%d", &key);//输入要寻找的值；
	int mid = 0;
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (arr[mid]>key)
		{
			right = mid - 1;
		}
		else if (arr[mid] < key)
		{
			left = mid + 1;
		}
		else
			break;
	}
	if (left <= right)
		printf("找到了,下标是%d\n", mid);
	else
		printf("找不到\n");
	system("pause");
	return 0;
}