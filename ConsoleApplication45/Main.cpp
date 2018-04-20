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
		//Определить средний возраст хоккеистов и вывести 
		//сведения о хоккеистах, возраст которых меньше 25 лет.
		infoHockey();
	}
	break;
	case 2:
	{
		//Определить общую стоимость всех товаров, 
	    //выпущенных в текущем году и вывести сведения об этих товарах.
		MARKET();
	}
	break;
	case 3:
	{
		//Определить среднюю стоимость товаров 
		//и товар с минимальной стоимостью.
		MARKET2();
	}
	break;
	case 4:
	{
		//Определить самого младшего 
		//работника и напечатать сведения о нем.
		WORKER();
	}
	break;
	case 5:
	{
		//Напечатать фамилии студентов, которые 
		//сдали математику на «95», и определить их количество.
		STUDENT();
	}
	break;
	}
}