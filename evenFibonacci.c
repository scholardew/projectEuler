/*Sum the even Fibonacci numbers
 * */


#include <stdio.h>

#define maxNum 4000000
int main()
{
	int num1 = 1, num2 = 1, next;
	int sum = 0;

	while(next <= maxNum)
	{
		next = num1 + num2;
		if (next % 2 == 0)
			sum+= next;
		num1 = num2;
		num2 = next;
		
	}
	printf ("The sum is %d\n", sum);
	return 0;
}
