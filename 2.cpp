#include <stdio.h>
#include <windows.h>

int fabs(int x);

struct dates
{
	int month;
	int year;
	int time;
	
} first, second, new_date;

main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	first.month = 10;
	first.year = 1927;		
	first.time = first.year*12 + first.month;
	
	second.month = 11;
	second.year = 1980;
	second.time = second.year*12 + second.month;
	
	loop:
	puts("Введите месяц и год");
	scanf("%d %d", &new_date.month, &new_date.year);
	
	if((new_date.month > 12) || (new_date.month < 0))
	{
		puts("Не правильно введены данные...");
		Sleep(700);
		puts("------------------------------");
		goto loop;
	}
	
	new_date.time = new_date.year*12 + new_date.month;
	
	if((first.time < new_date.time)&(second.time > new_date.time))	puts("Данная дата входит в отрезок\n");
	else	puts("Данная дата не входит в отрезок\n");
	
	system("pause");
	
	return 0;
}
