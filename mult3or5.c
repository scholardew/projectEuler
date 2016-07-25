#include <stdio.h>

/* If we list all the natural numbers below 10 that are multiples of 3 or 5, we get
 * 3, 5, 6, and 9.  The sum of these multiples is 23.  Find the sum of all the multiples
 * of 3 or 5 below 1000.
 */

#define maxNum  1000
#define natNum1  3
#define natNum2  5

int main()
{
	int sum = 0;
	int num1;
	int num2;
	int i;

	for(i = 1; i < maxNum; i++) {
		num1 = i % natNum1;
		num2 = i % natNum2;
		
		//Combine into one statement so the same number is not added twice
		if (num1 == 0 || num2 == 0) {
			sum+=i;
		} //end if

	}//end for

	printf ("The sum is: %d\n", sum);
    return 0;
}//end main


		



