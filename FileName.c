#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
	char number_str[100];
	int num = 0;
	printf("Please enter a number : ");
	scanf("%s", number_str);
	printf("The number of digits is : %d\n", num = strlen(number_str));
	return 0;
}