#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <time.h>
#include "Header.h"
void main()
{
	srand(time(NULL));
	short int w;
	printf("Enter number of task: ");
	scanf("%hu", &w);
	system("cls");
	switch (w)
	{
	case 1:
	{
		//���������� ������� ������� ���������� � ������� 
		//�������� � ����������, ������� ������� ������ 25 ���.
		infoHockey();
	}
	break;
	case 2:
	{
		//���������� ����� ��������� ���� �������, 
	    //���������� � ������� ���� � ������� �������� �� ���� �������.
		MARKET();
	}
	break;
	case 3:
	{
		//���������� ������� ��������� ������� 
		//� ����� � ����������� ����������.
		MARKET2();
	}
	break;
	case 4:
	{
		//���������� ������ �������� 
		//��������� � ���������� �������� � ���.
		WORKER();
	}
	break;
	case 5:
	{
		//���������� ������� ���������, ������� 
		//����� ���������� �� �95�, � ���������� �� ����������.
		STUDENT();
	}
	break;
	}
}