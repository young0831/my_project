#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
void app() {
	int* pi;
	int i, sum = 0;
	pi = (int*)calloc(5, sizeof(int));
	if (pi == NULL)
	{
		printf("�޸𸮰� �����մϴ�!\n");
		exit(1);
	}
	for (i = 0; i < 5; i++)
	{
		printf("%5d", pi[i]);
	}
	free(pi); // free�Լ� ����Ͽ� �޸� ����
}

void app() {
	int* pi;
	int size = 5, count = 0, num, i;
	pi = (int*) calloc(size, sizeof(int));
	while (1) {
		printf("����� �Է��ϼ��� => ");
		scanf("%d", &num);
		if (num < 0) break;
		if (count == size)
		{
			size += 5;
			pi = (int*)realloc(pi, size * sizeof(int));
		}
		pi[count++] = num;
	}
	for (i = 0; i < count; i++)
	{
		printf("%5d", pi[i]);
	}
	free(pi);
}

void app() {
	int* pa;
	int* pb;
	pa = (int*)malloc(5 * sizeof(int));
	for (int i = 0; i < 5; i++)
	{
		pa[i] = (i + 1) * 100;
	}
	for (int i = 0; i < 5; i++)
	{
		printf("%5d", pa[i]);
	}
	memset(pa, 0, 5 * sizeof(int));
	for (int i = 0; i < 5; i++) {
		printf("%5d", pa[i]);
	}
}

void app() {
	int* pa;
	int* pb ;
	pa = (int*)malloc(5 * sizeof(int));
	pb = (int*)malloc(5 * sizeof(int));
	for (int i = 0; i < 5; i++)
	{
		pa[i] = (i + 1) * 100;
	}
	for (int i = 0; i < 5; i++)
	{
		printf("%5d", pa[i]);
	}
	memcpy(pb, pa, 5 * sizeof(int)); // memcpy �� strcpy �� ���� ���� �ֳ�?

	for (int i = 0; i < 5; i++) {
		printf("%5d", pb[i]);
	}
}

void print_str(char** ps);

void app() {
	char temp[80];
	char* str[3];
	int i;

	for (i = 0; i < 3; i++)
	{
		printf("���ڿ��� �Է��ϼ��� : ");
		gets(temp);
		str[i] = (char*)malloc(strlen(temp) + 1);
		strcpy(str[i], temp);
	}
	for (i = 0; i < 3; i++)
	{
		printf("%s\n",str[i]);
	}
	for (i = 0; i < 3; i++)
	{
		free(str[i]);
	}
}

void print_str(char** ps) {
	while (*ps != NULL) {
		printf("%s\n", *ps);
		ps++;
	}
}
void app() {
	int** matrix;
	//4���� �� ������ �Ҵ�
	matrix = (int**)malloc(4 * sizeof(int*));
	//5���� �� ������ �Ҵ�
	for (int i = 0; i < 4; i++)
	{
		matrix[i] = (int*)malloc(5 * sizeof(int));

	}
}

void app() {
	int** matrix;
	//4���� �� ������ �Ҵ�
	matrix = (int**)malloc(4 * sizeof(int*));
	//5���� �� ������ �Ҵ�
	for (int i = 0; i < 4; i++)
	{
		matrix[i] = (int*)malloc(5 * sizeof(int));

	}
	//�� ����
	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 5; x++)
		{
			matrix[y][x] = (y + 1) * 10 + (x + 1);
		}
	}
	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 5; x++)
		{
			printf("%5d", matrix[y][x]);
		}
		printf("\n");
	}

	for (int y = 0; y < 4; y++)
	{
		free(matrix[y]);
	}
	free(matrix);
}







*/