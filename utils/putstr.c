#include "../headers/utils.h"
#include <unistd.h>

void putstr(char *str)
{
	int len;
	len = ft_strlen(str);
	write(1, str, len);
}
