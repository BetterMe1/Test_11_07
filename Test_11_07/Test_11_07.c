#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//Ѱ��keyֵ���±�
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;//sizeof(arr) / sizeof(arr[0])�����鳤�ȣ���������˼�Ϊ0������ټ�ȥ1�����Ҷ��±��Ϊ���鳤��-1��
	int key;
	printf("������Ҫ���ҵ�ֵ��");
	scanf("%d", &key);//����ҪѰ�ҵ�ֵ��
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
		printf("�ҵ���,�±���%d\n", mid);
	else
		printf("�Ҳ���\n");
	system("pause");
	return 0;
}