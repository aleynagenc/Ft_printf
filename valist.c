#include <stdarg.h>

int ortalama(int miktar, ...)
{
	va_list arg;
	va_start(arg, miktar);
	int toplam = 0;
	while(miktar)
	{
		toplam += va_arg(arg,int);
		miktar--;
	}
	va_end(arg);
	return(toplam);
}
#include <stdio.h>

int main()
{
	printf("toplam :%d ", ortalama(3, 3, 4, 5));
	return 0;
}
