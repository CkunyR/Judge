#include <stdio.h>

int main()
{
	int i = 1;
	/*while (i <= 100)
	{
		if (i & 2 != 0)
			printf("%d ", i);
		i++;
	}*/

	while (i <= 100)
	{
		printf("%d ", i);
		i += 2;
	}
	

	return 0;
}