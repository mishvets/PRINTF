// #include "libftprintf.h"
 #include <stdio.h>
// #include <limits.h>
// #include <float.h>

// #define PRNT "%012d", 42
//#define PRNT "{%f} ", -0.0
//#define PRNT "{%.Lf}", LDBL_MAX
//#define PRNT "{%f}", 88.4e30
//#define PRNT "{%Lf}", 88.4e30L
//#define PRNT "{%  .20f}", 5.1e-17
//#define PRNT "{%#0.4f}", 0.0


//#define PRNT "{%#.f} ", 1.0
//#define PRNT "{%1c} ", 0
//#define PRNT "{%#10-*.*x} ", 12, -5, 16
//#define PRNT "{%20.ld et %.4hhi !} ", 0x11ffaa147, (signed char)-8
//#define PRNT "{%f%} ", 9.994499
//#define PRNT "{%20. 10x} ", 16
//#define PRNT "{%#5. 0c} ", 'd'
//#define PRNT "{%*.-*s}", -4, -10, "hallo"

//#define PRNT "{%*.-f}", -4, 1.0
//#define PRNT "{%-5f}", 0.0/0.0
//#define PRNT "{%f%}", 9.0

//#define PRNT "{%7. 0f} ", 2.45
//#define PRNT "{%Lhhhf} ", 9.994499L
//#define PRNT "{%Llf} ", 9.994499L
//#define PRNT "{%#10-**x} ", 12, 16 // not correct
//#define PRNT "{%.s} ", 5
//#define PRNT "{%.0f}", 0.5
#include "libftprintf.h"

int main()
{
	ft_printf("%+l010d", 10);
//	char c = 0;
//	char *str;
//	str = ft_strnew(2);
//	str[0] = c;
//	write(1, str, 1);
//	printf("\n%d\n", printf(PRNT));
	//system("leaks PRINTF -q");
	return 0;
}
