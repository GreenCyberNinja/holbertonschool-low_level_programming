#include <stdio.h>
#include <stdlb.h>
#include <time.h>
/**
* main - cycles through all password combos at once
*
* Return: void
*/

int main(void)
{
	char d[63] = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"
	char password[100];
	int x;
	int y;
	int sum;

	srand(time(NULL));
	sum = 0;
	x = 0;

	while (sum < (27772 - 122))

{
	y = rand() % 62;
	password[x] = d[y];
	sum = sum + password[x];
	x++;

}
	y = 2772 - sum;
	password[x] = y;
	x++;
	password[x] = '\0';
	printf("%s", password)

	return (0);
}
