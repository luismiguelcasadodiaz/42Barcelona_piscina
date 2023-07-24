#include <unistd.h>
#include <ctype.h>

int	main(void)
{
	int i;

	i = 0;
	while (i < 128)
	{
		write(1, "\\", 1);
		write(1, &"0123456789abcdef"[i / 16], 1);
		write(1, &"0123456789abcdef"[i % 16], 1);
		write(1, &" => ", 4);
		if (isprint(i))
			write(1, &" PY ", 4);
		else
			write(1, &" PN ", 4);
		if (iscntrl(i))
			write(1, &" CY ", 4);
		else
			write(1, &" CN ", 4);

		write(1, "\n", 1);
		i++;
	}
	return (0);
}
