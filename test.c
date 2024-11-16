// #include <stdio.h>
// int main(void)
// {
// 	int n = 10;
// 	int array[n];
// 	for (int i = 0; i < n; ++i)
// 	{
// 		printf("&array[%d] = %p\n", i, &array[i]);
// 		printf("&array[%d] = %ld\n", i, &array[i]);
// 	}
// }

#include <stdio.h>

int main() {

	printf("%%d: 42 = %d\n", 42);
	printf("%%i: 42 = %i\n", 42);

	printf("%%d: 042 = %d\n", 042);
	printf("%%i: 042 = %i\n", 042);

	printf("%%d: 0x42 = %d\n", 0x42);
	printf("%%i: 0x42 = %i\n", 0x42);
    return 0;
}
