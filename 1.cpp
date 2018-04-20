#include <stdio.h>
#include <windows.h>

struct complex_digits
{
	float a;
	float ib;
	
}first,second;

main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	printf("Эта программа складывает два комплексных числа вида a + ib\n");
	Sleep(250);
	
	puts("Введите a первого числа: ");
	scanf("%f", &first.a);
	
	puts("Введите b первого числа: ");
	scanf("%f", &first.ib);
	
	puts("Введите a второго числа: ");
	scanf("%f", &second.a);
	
	puts("Введите b второго числа: ");
	scanf("%f", &second.ib);
	
	printf("Получившееся число: %.1f + i*%.1f\n", first.a + second.a, first.ib + second.ib);
	
	Sleep(500);
	system("pause");
	
	return 0;
}
