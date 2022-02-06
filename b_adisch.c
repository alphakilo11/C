#include <stdio.h>
#include <math.h>

void b_adisch_code(int x, int base)
/* codes decimal integers to positional notation
ENHANCE include coding of non-integers
ENHANCE integer is returned, which could be interpreded as decimal number somewhere down the line
ENHANCE use ABCDEF for base 16
*/
{
	if (!x) { /*workaround for 0 */
		printf("%i", 0);
		return;
	}
	int i = ceil(log(x + 1) / log(base)); /* number of required bits BUG: Returns 0 for 0 */

	int result[i];
	i--;
	int j = i;

	for (; i >= 0; i--) {
		result[i] = x % base;
		x = x / base;
	}

	for (int k = 0; k <= j; k++) {
		printf("%i", result[k]);
	}

}
