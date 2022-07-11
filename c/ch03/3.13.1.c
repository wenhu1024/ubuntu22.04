#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
	printf("singed_char : MAX:%d\t MIN:%d\t \n",SCHAR_MAX,SCHAR_MIN);
	printf("unsigned_char : MAX:%d\t MIN:%d\t \n",UCHAR_MAX,0);
	putchar('\n');
	printf("signed_short_int : MAX:%d\t MIN:%d\t \n",SHRT_MAX,SHRT_MIN);
	printf("unsigned_short_int : MAX:%d\t MIN:%d\t \n",USHRT_MAX,0);
	putchar('\n');
	printf("signed_int : MAX:%d\t MIN:%d\t \n",INT_MAX,INT_MIN);
	printf("unsigned_int : MAX:%d\t MIN:%d\t \n",UINT_MAX,0);
	putchar('\n');
	printf("signed_long_int : MAX:%ld\t MIN:%ld\t \n",LONG_MAX,LONG_MIN);
	printf("unsigned_long_int : MAX:%ld\t MIN:%ld\t \n",ULONG_MAX,0);
	return EXIT_SUCCESS;
}
