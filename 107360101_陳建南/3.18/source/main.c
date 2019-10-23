#include <stdio.h>
#include <stdlib.h>
int main()\
{
	float base;
	float salary;
	float sales;
	base = 200;
	sales = 1;
	while (sales >= 1)
	{
		if (sales == -1)
			break;

		printf("Enter Sales, -1 to end: \n", sales);
		scanf_s("%f", &sales);

		salary = base + 0.09 * sales;


		printf("Salary is %f. \n", salary);

	}
	system("pause");
	return 0;
}
