#include <stdio.h>
#include <windows.h>

struct data
{
	char name[20];
	char surname[20];
	int mark;
};

main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	int sum;
	puts("Введите количество студентов");
	scanf("%d", &sum);
	
	data  man[sum];
	
	for(int i = 0; i < sum; i++)
	{
		printf("Введите имя, фамилию и оценку студента № %d\n", i + 1);
		scanf("%s %s %d", &man[i].name, &man[i].surname, &man[i].mark);
	}
	
	int mark_sum = 0;
	
	for(int i = 0; i < sum; i++)	mark_sum += man[i].mark;
	
	mark_sum /= sum; 
	
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	
	for(int i = 0; i < sum; i++)
	{
		if(man[i].mark > mark_sum)
		{
			SetConsoleTextAttribute(hConsole, (WORD) ((0 << 4) | 2));
			printf("%s %s\n", man[i].name, man[i].surname);
		}
		else
		{
			printf("%s %s\n", man[i].name, man[i].surname);
		}
		SetConsoleTextAttribute(hConsole, (WORD) ((0 << 4) | 7));
	}
	
	system("pause");
	
	return 0;
}
