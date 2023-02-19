#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/*main- this is the main */

/*Return: return 0 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	int a = 0;

	if (a > 0)
	{

	/*if the condition is greaterthan zero print positive*/
		printf("is positive");
	} else if (0)
	{

	/*print the number is zero*/
		printf("is zero");
	} else if (a < 0)
	{

		printf("is negative");
	} else

	{

		printf("the number is invalid");
	}

	return (0);
}
