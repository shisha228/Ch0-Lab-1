#include<stdio.h>
#include<stdlib.h>


int main(void)

{
	float principal, days, interest,rate;
	char a = 'true';
	while (a)
	{
		printf("Enter loan principal ( -1 to end ): ");
		scanf_s("%f", &principal);

		if (principal == -1)
		{
			return 0;
		}
		printf("Enter interest rate:");
		scanf_s("%f", &rate);
		printf("Enter term of loan in day:");
		scanf_s("%f", &days);
		interest = (principal * days * rate) / 365;
		printf("Interest charge is %.2f\n", interest);
	}
	
	system("pause");
	return 0;
}