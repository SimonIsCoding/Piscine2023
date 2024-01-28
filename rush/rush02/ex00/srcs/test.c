#include <unistd.h>
#include <stdio.h>

void	calc(char *nums, char *dic);

int	height_arg(char *argv)
{
	int	i;
	int	ascii;

	i = 0;
	ascii = 0;
	while (argv[i] != '\0')
	{
		ascii = ascii + (argv[i] * '0');
		i++;
	}
	return (ascii);
}

int	main(int argc, char **argv)
{
	if (argc > 0)
	{
		printf("%d\n", height_arg(argv[1]));
	}
	return (0);
}
