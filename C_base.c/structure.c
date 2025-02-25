#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

/*
구조체 선언 (명시적)
struct student
{
	char ch1;
	short num;
	char ch2;
	int score;
	double grade;
	char ch3;
};
struct student2
{
	char ch1;
	char ch2;
	short num;
	int score;
	double grade;
	char ch3;
};


void app()
{
	struct student s1;
	struct student2 s2;
	printf("구조체 1의 크기 %d\n", sizeof(struct student));
	printf("구조체 2의 크기 %d\n", sizeof(struct student2));

}

struct profile
{
	char name[20];
	int age;
	double height;
	char* intro;
};

void app()
{
	struct profile yuni;

	strcpy(yuni.name, "서하윤");
	yuni.age = 17;
	yuni.height = 164.5;

	yuni.intro = (char *)malloc(80);
	printf("자기 소개 : ");
	gets(yuni.intro);

	printf("이름 : %s\n", yuni.name);
	printf("나이 : %d\n", yuni.age);
	printf("키 : %.1lf\n", yuni.height);
	printf("자기소개 : %s\n", yuni.intro);
	free(yuni.intro);
}

struct profile
{
	int age;
	double height;
};

struct student
{
	struct profile pf;
	int id;
	double grade;
};

void app()
{
	struct student yuni;

	yuni.pf.age = 17;
	yuni.pf.height = 164.5;
	yuni.id = 315;
	yuni.grade = 4.3;

	printf("나이 : %d\n", yuni.pf.age);
	printf("키 : %.1lf\n", yuni.pf.height);
	printf("학번 : %d\n", yuni.id);
	printf("학점 : %.1lf\n", yuni.grade);

}

	struct vision
{
	double left;
	double right;
};
struct vision exchange(struct vision robot);
void app()
{
	struct vision robot;
	
	printf("시력 입력 : ");
	scanf("%lf%lf",&(robot.left), &(robot.right));
	robot = exchange(robot);
	printf("바뀐 시력 : %.1lf	%.1lf\n", robot.left, robot.right);

}

struct vision exchange(struct vision robot)
{
	double temp;

	temp = robot.left;
	robot.left = robot.right;
	robot.right = temp;
	return robot;
}

struct score
{
	int kor;
	int eng;
	int math;
};

void app() {
	struct score yuni = { 90, 80, 70 };
	struct score* ps = &yuni;

	printf("국어 : %d\n", (*ps).kor);
	printf("영어 : %d\n", ps->eng);
	printf("수학 : %d\n", ps->math);
}

struct address
{
	char name[20];
	int age;
	char tel[20];
	char addr[80];
};

void app()
{
	struct address list[5] = {
		{"홍길동", 23, "111-1111", "울릉도 독도"},
		{"이순신", 35, "222-2222", "서울 건천동"},
		{"장보고", 19, "333-3333", "완도 청해진"},
		{"유관순", 15, "444-4444", "충남 천안"},
		{"안중근", 45, "555-5555", "황해도 해주"}
	};

	int i;
	for (i = 0; i < 5; i++)
	{
		printf("%10s%5d%15s%20s\n", list[i].name, list[i].age, list[i].tel, list[i].addr);
	}
}

struct address
{
	char name[20];
	int age;
	char tel[20];
	char addr[80];
};
void print_list(struct address* lp);
void app()
{
	struct address list[5] = {
		{"홍길동", 23, "111-1111", "울릉도 독도"},
		{"이순신", 35, "222-2222", "서울 건천동"},
		{"장보고", 19, "333-3333", "완도 청해진"},
		{"유관순", 15, "444-4444", "충남 천안"},
		{"안중근", 45, "555-5555", "황해도 해주"}
	};
	print_list(list);
}

void print_list(struct address* lp)
{
	int i;

	for (i = 0; i < 5; i++)
	{
		printf("%10s%5d%15s%20s\n", (lp + i)->name, (lp + i)->age, (lp + i)->tel, (lp + i)->addr);
	}
}

enum season {
	SPRING,
	SUMMER,
	FALL,
	WINTER
};

struct s_name {
	char a;
};
typedef _Bool boolean;

void app()
{
	enum season ss;
	char* pc = NULL;
	scanf("%d", &ss);
	switch (ss-1) {
		case SPRING: pc = "inline"; break;
		case SUMMER: pc = "swimming"; break;
		case FALL: pc = "trip"; break;
		case WINTER: pc = "skiing"; break;
	}
	printf("나의 레저 활동 => %s\n", pc);
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct marriage {
	char name[20];
	int age;
	char gender;
	double height;
};

void app() {
	struct marriage m1 = { "Andy", 22, 'm', 187.5 };
	struct marriage* mp = &m1;

	printf("이름 : %s\n", mp->name);
	printf("나이 : %d\n", mp->age);
	printf("성별 : %s\n", mp->gender);
	printf("키 : %.1lf\n", mp->height);

}
*/
typedef struct train Train;

struct train
{
	int seats;
	Train *next;
};

void app() {
	Train* head = NULL, * tail = NULL;
	int i;
	for (i = 0; i <5; i++)
	{
		if (head == NULL)
		{
			head = tail = (Train*)malloc(sizeof(Train));
		}
		else
		{
			tail->next = (Train*)malloc(sizeof(Train));
			tail = tail->next;
		}
	}
	head->seats = 1;
	head->next->seats = 2;
	head->next->next->seats = 3;
	head->next->next->next->seats = 4;
	head->next->next->next->next->seats = 5;
	Train* current;
	current = head;
	while (current != NULL) {
		printf("%d ", current->seats);
		current = current->next;
	}
}
//*/

