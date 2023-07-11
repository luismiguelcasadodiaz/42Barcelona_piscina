#include <stdio.h>

/* if first num
*
*
*/
void	show_first(int num)
{
		printf("%d", num);
}


void	show_number(int num)
{
		printf(", %d", num);
}


int	power_of(int base, int exp)
{
		int	power;

		power = 1;
		while (0 < exp)
		{
				power = power * base;
				--exp;
		}
		return (power);
}

/*========== find_initial ===========================
*if n = 5
*    10³   1000 x 1 = 1000
*    10²    100 x 2 =  200
*    10¹     10 x 3 =   30
     10⁰      1 x 4 =    4
	 ---------------------
	 sum            = 1234

	 while sum <= 10⁴ - 1 = 9999 ==> padding one;
*/

int	find_initial(int n)
{
	int c;
	int num;

	c=1;
	while (c < n)
	{
		num = num + c * power_of(10, n - c - 1);
	}
	return (num);
}

/*========== find_initial ===========================
*if n = 5
*    10⁴  10000 x 5 = 1000
*    10³   1000 x 6 = 1000
*    10²    100 x 7 =  200
*    10¹     10 x 8 =   30
     10⁰      1 x 9 =    4
	 ---------------------
	 sum            = 1234

	 while sum <= 10⁴ - 1 = 9999 ==> padding one;
*/

int find_final(int n)
{
        int c;
        int num;

        num = 0;
        c=0;
        while (c < n)
        {
                num = num + (10 - n  + c) * power_of(10, n - c -1);
                c++;
        }
        return (num);
}


void	ft_print_combn(int n)
{
	int	init;
	int	last;

	if (0 < n && n < 10)
	{
			init = find_initial(n);
			last = find_final(n);
			show_first(init++);
			while (init <= last)
				show_number(init++);
	}
}
