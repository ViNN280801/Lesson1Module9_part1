struct Hockey {
	char surname[11];
	int age;
	int countGames;
	int goals;
};
void infoHockey();
void crateName(char * name, int length);
struct market{
	char name[10];
	char proizvoditel[10];
	int yearOfProduct;
	int count;
	int price;
};
void MARKET();
void MARKET2();
struct DoB {
	int day;
	int month;
	int year;
};
struct worker {
	char surname[12];
	DoB DateOfBirth;
	char post[12];
	int salary;
	char education[12];
};
void WORKER();
struct student {
	char surname[12];
	char group[12];
	DoB DateOfBirth;
	int assessmentPhysics;
	int assessmentMath;
	int assessmentInfo;
};
void STUDENT();