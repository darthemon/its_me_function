int	myft_atoi(char *str)
{
	int	minus;
	int	result;

	while (*str == 32)
		str++;
	minus = 1;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			minus *= -1;
		str++;
	}
	result = 0;
	while (*str >= '0' && *str <= '9')
	{
		result = (result * 10) + *str - 48;
		str++;
	}
	return (result * minus);
}
