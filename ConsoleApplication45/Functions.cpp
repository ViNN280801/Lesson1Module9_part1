#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <time.h>
#include "Header.h"
void infoHockey()
{
	Hockey *hockey;

	hockey = (Hockey*)malloc(sizeof(Hockey));

	for (short int i = 0; i < 11; i++)
	{
		hockey->surname[i] = 95 + rand() % 25;
		hockey->age = 20 + rand() % 40;
		hockey->countGames = 0 + rand() % 35;
		hockey->goals = 0 + rand() % 20;
	}

	for (short int i = 0; i < 11; i++)
	{
		printf("--- --- --- The %d player --- --- --- \n\n", i);
		printf("Surname -%s\n", hockey->surname);
		printf("Age - %d\n", hockey->age);
		printf("Count games - %d\n", hockey->countGames);
		printf("Count goals - %d\n\n", hockey->goals);
	}

	for (short int i = 0; i < 11; i++)
	{
		if (hockey->age < 25)
		{
			printf("////////////***\\\\\\\\\\\\\n\n");
			printf("Hockey players, which age lower than 25 years: ");
			printf("%d\n\n", i);
		}
		else
			printf("Nobody hasn't age lower than 25.\n");
	}

}
void crateName(char * name, int length)
{
	for (int i = 0; i < length - 1; i++)
	{
		*(name + i) = (char)(95 + rand() % 25);
	}
	*(name + length) = '\0';
}
void MARKET()
{
	market *st;
	st = (market*)malloc(sizeof(market));

	int sum = 0;
	for (short int i = 0; i < 10; i++)
	{
		st->name[i] = 97 + rand() % 24;
		st->proizvoditel[i] = 97 + rand() % 24;
		st->yearOfProduct = 1940 + rand() % 78;
		st->count = 1 + rand() % 99;
		st->price = 1 + rand() % 200;
	}

	for (short int i = 0; i < 10; i++)
	{
		printf("--- --- --- The %d product --- --- --- \n", i);
		printf("Name: %s\n", st->name);
		printf("Fabricator: %s\n", st->proizvoditel);
		printf("Year of produce - %d\n", st->yearOfProduct);
		printf("Count: %d\n", st->count);
		printf("Price - %d$\n", st->price);
		printf("--- --- --- --- --- --- --- \n\n");
	}

	for (short int i = 0; i < 10; i++)
	{
		if (st->yearOfProduct == 2018)
		{
			sum += st->price;
			printf("--- --- --- The %d product --- --- --- \n", i);
			printf("Name: %s\n", st->name);
			printf("Fabricator: %s\n", st->proizvoditel);
			printf("Year of produce - %d\n", st->yearOfProduct);
			printf("Count: %d\n", st->count);
			printf("Price - %d$\n", st->price);
			printf("--- --- --- --- --- --- --- \n\n");
		}
		else
			printf("This market doesn't has product, which fabricated in 2018.\n");
	}
}
void MARKET2()
{
	market *st;
	st = (market*)malloc(sizeof(market));

	int sum = 0, sr;
	for (short int i = 0; i < 10; i++)
	{
		st->name[i] = 97 + rand() % 24;
		st->proizvoditel[i] = 97 + rand() % 24;
		st->yearOfProduct = 1940 + rand() % 78;
		st->count = 1 + rand() % 99;
		st->price = 1 + rand() % 200;
	}
	int  MinPrice = st->price;

	for (short int i = 0; i < 10; i++)
	{
		printf("--- --- --- The %d product --- --- --- \n", i);
		printf("Name: %s\n", st->name);
		printf("Fabricator: %s\n", st->proizvoditel);
		printf("Year of produce - %d\n", st->yearOfProduct);
		printf("Count: %d\n", st->count);
		printf("Price - %d$\n", st->price);
		printf("--- --- --- --- --- --- --- \n\n");
	}

	for (short int i = 0; i < 10; i++)
	{
		sum += st->price;
		sr = sum / st->count;
		if (st->price < MinPrice)
		{
			MinPrice = st->price;
		}
	}
	printf("Minimal price = %d$\n", MinPrice);
	printf("Srednee arifm = %d$\n", sr);
}
void WORKER()
{
	worker *st;
	st = (worker*)malloc(sizeof(worker));

	for (short int i = 0; i < 12; i++)
	{
		st->surname[i] = 97 + rand() % 24;
		st->DateOfBirth.day = 1 + rand() % 31;
		st->DateOfBirth.month = 1 + rand() % 12;
		st->DateOfBirth.year = 1970 + rand() % 20;
		st->post[i] = 97 + rand() % 24;
		st->salary = 1000 + rand() % 59000;
		st->education[i] = 97 + rand() % 24;
	}

	int youngest = st->DateOfBirth.year;
	for (short int i = 0; i < 12; i++)
	{
		printf("--- --- --- The %d worker --- --- --- \n", i);
		printf("Surname: %s\n", st->surname);
		printf("Date of birth: %d.%d.%d\n", st->DateOfBirth.day, st->DateOfBirth.month, st->DateOfBirth.year);
		printf("Post: %s\n", st->post);
		printf("Salary: %d$\n", st->salary);
		printf("Education: %s\n", st->education);
		printf("--- --- --- --- --- --- ---\n\n");
	}

	for (short int i = 0; i < 12; i++)
	{
		if (st->DateOfBirth.year > youngest)
		{
			printf("--- --- --- YOUNGEST --- --- ---\n");
			printf("The most youngest worker is - %s\n", st->surname);
			printf("Date of birth: %d.%d.%d\n", st->DateOfBirth.day, st->DateOfBirth.month, st->DateOfBirth.year);
			printf("Post: %s\n", st->post);
			printf("Salary: %d$\n", st->salary);
			printf("Education: %s\n", st->education);
			printf("--- --- --- --- --- --- ---\n\n");
		}
	}
	printf("--- --- --- YOUNGEST --- --- ---\n");
	printf("The most youngest worker is - %s\n", st->surname);
	printf("Date of birth: %d.%d.%d\n", st->DateOfBirth.day, st->DateOfBirth.month, st->DateOfBirth.year);
	printf("Post: %s\n", st->post);
	printf("Salary: %d$\n", st->salary);
	printf("Education: %s\n", st->education);
	printf("--- --- --- --- --- --- ---\n\n");
}
void STUDENT()
{
	student *st;
	st = (student*)malloc(sizeof(student));

	int counter = 0;
	for (short int i = 0; i < 12; i++)
	{
		st->surname[i] = 97 + rand() % 24;
		st->group[i] = 97 + rand() % 24;
		st->DateOfBirth.day = 1 + rand() % 31;
		st->DateOfBirth.month = 1 + rand() % 12;
		st->DateOfBirth.year = 1980 + rand() % 20;
		st->assessmentPhysics = 1 + rand() % 100;
		st->assessmentMath = 1 + rand() % 100;
		st->assessmentInfo = 1 + rand() % 100;
	}

	for (short int i = 0; i < 12; i++)
	{
		printf("--- --- --- The %d student --- --- ---\n", i);
		printf("Surname: %s\n", st->surname);
		printf("Group: %s\n", st->group);
		printf("Date of birth: %d.%d.%d\n", st->DateOfBirth.day, st->DateOfBirth.month, st->DateOfBirth.year);
		printf("Rating in physics: %d\n", st->assessmentPhysics);
		printf("Rating in mathmatics: %d\n", st->assessmentMath);
		printf("Rating in informatics: %d\n", st->assessmentInfo);
		printf("--- --- --- --- --- --- ---\n\n");
	}

	for (short int i = 0; i < 12; i++)
	{
		if (st->assessmentMath >= 95)
		{
			printf("--- *** --- *** --- *** ---\n");
			printf("Counts of students are passed math by rating 95 - %d\n", counter);
			printf("The %d surname is - %s\n", i, st->surname[i]);
			printf("--- --- --- --- --- --- ---\n");
		}
	}
}