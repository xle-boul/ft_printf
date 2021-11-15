#include "libprintf.h"

int main()
{
	char	s[] = "blabla";
	printf("% +0-#p$", s);
	printf("\n");
	ft_printf("% +0-#p$", s);
	return 0;
}