#include<stdio.h>
#include<ctype.h>

#define ARR_SIZE 100000
void validateString(char str[ARR_SIZE]);
int main(void)
{
	int testCase = 0;
	
	scanf("%d", &testCase);
	
	if (testCase < 1)
	{
		return 1;
	}

	while (testCase > 0)
	{
		char str[ARR_SIZE];

		scanf("%s", str);

		validateString(str);
		--testCase;
	}

	return 0;

}

void validateString(char str[ARR_SIZE])
{
	int index = 0;
	int a = 0, e = 0, i = 0, o = 0, u = 0;

	while (str[index] != '\0')
	{
		switch (tolower(str[index])) {
			case 'a':
				a++;
				break;
			case 'e':
				e++;
				break;
			case 'i':
				i++;
				break;
			case 'o':
				o++;
				break;
			case 'u':
				u++;
				break;
			default :
				break;
		} 
		index++;
	}

	if (a > 0 && e > 0 && i > 0 && o > 0 && u > 0) {
		printf("lovely string\n");
	} else {
		printf("ugly string\n");
	}

	return;
}