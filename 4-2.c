#include <stdio.h>
#include <ctype.h>
 
#define MAXLEN 100
 
double atof(char s[]);
 
int main()
{
	int c, i = 0;
	char line[MAXLEN];
	
	printf("input string numer:\n");
	while ((c = getchar()) != EOF)
		line[i++] = c;
	printf("int number:%g\n", atof(line));
	
	return 0;
}
 
double atof(char s[])
{
	double val, power, e;
	int i, sign, sign_2, val_2;
	
	for (i = 0; isspace(s[i]); i++)
		;
	sign = (s[i] == '-') ? -1 : 1;
	if (s[i] == '+' || s[i] == '-')
		i++;
	for (val = 0.0; isdigit(s[i]); i++)
		val = 10.0 * val + (s[i] - '0');
	if (s[i] == '.')
		i++;
	for (power = 1.0; isdigit(s[i]); i++)
	{
		val = 10.0 * val + (s[i] - '0');
		power *= 10.0;
	}
	if (s[i] == 'e' || s[i] == 'E')    //增加的部分
		i++;
	sign_2 = (s[i] == '-') ? -1 : 1;
	i++;
	for (val_2 = 0; isdigit(s[i]); i++)
		val_2 = 10 * val_2 + (s[i] - '0');
	for (i = 0, e = 1.0; i < val_2; i++)
	{
		if (sign_2 == -1)
			e /= 10.0;
		else e *= 10.0;
	}
	
	return sign * val / power * e;
}









































