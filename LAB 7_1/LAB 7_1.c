//Lab7_1.c R������� ������ ����� ����� �������� ������ � 10 ����� ����� �� ��������� �������

#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

bool Even(int k);

int main(void)
{
	int i, a[10], s = 0;
	setlocale(LC_CTYPE, "ukr");
	for (i = 0; i < 10; i++)
	{
		printf("����� �[%d]=", i + 1);
		scanf("%d", &a[i]);
		if (Even(a[i])) s += 1;
	}
	system("cls");

	printf("\n �� ����� ������ A[1,10] = {");
	for (i = 0; i < 10; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("\b\b}\n");
	printf(" �i���i��� ������ ������� � ��������� �������i = %d", s);

	int getch(); getch();
	return 0;
}
//������� �������� ������� �����
bool Even(int k)
{
	if (k % 2 == 0)  return true; else return false;
}
