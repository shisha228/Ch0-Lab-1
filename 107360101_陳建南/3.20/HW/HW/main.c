#include<stdio.h>
#include<stdlib.h>


int main(void)

{
	float hours,rate,salary;
	char a = 'true';
	while (a)
	{
		printf("Enter # of hours worked ( -1 to end ): ");
		scanf_s("%f", &hours);

		if (hours == -1)
		{
			return 0;
		}
		printf("Enter hourly rate of work:");
		scanf_s("%f", &rate);
		salary = rate* hours;
		printf("Salary is %.2f\n", salary);
	}
	system("pause");
	return 0;
}