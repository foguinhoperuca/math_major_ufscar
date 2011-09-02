# include <stdio.h>
# include <math.h>

# define COLLEGE "UFSCAR"
float calcGrade (float grade1, float grade2)
{
	return (grade1 + grade2) / 2;
}

float calcIMC(float height, float weight)
{
	if (height == 0)
		return 0;

	return weight / pow(height, 2);
}

int main (void)
{
	char name[100];

	printf("Hello world!\n");

	printf("Calc your grade!\n");
	printf("%.2f is your final grade! \n", calcGrade(10.0, 5.0)); 


	printf("Calc your IMC!\n");
	float imc = calcIMC(1.64, 100.00);

	if (imc < 25)
		printf("Very low!\n");
	else if (imc < 27.5)
		printf("Normal IMC...\n");
	else if(imc < 30.0)
		printf("little high...\n");
	else
		printf("really high!!!\n");

	printf("%.2f is your IMC! \n", imc); 

	scanf("%s", name);
	printf("Your name is %s!\n", name);

	printf("Bye! You are at %s\n", COLLEGE);

	return 0;
}
