int	isin(char c, char *base)
{
	while (*base != '\0')
	{
		if (*base == c)
			return (1);
		base++;
	}
	return (0);
}

void	ae_atoi(char *str, char *dest, char *base, int *minus)
{
	if(*str == '-' || *str == '+' || *str == ' ')
	{
		if(*str == '-')
			*minus *= -1;
		str++;
	}
	while (*str != '\0')
	{
		if(isin(*str, base) == 1)
		{
			*dest = *str;
			str++;
			dest++;
		}
		else
			break;
	}
	*dest = '\0';
}

int	lenlen(char *str)
{
	int	i;
	int	dat[127];

	i = 0;
	while(i < 127)
	{
		dat[i] = 0;
		i++;
	}
	i = 0;
	while (str[i] != '\0')
	{
		if(dat[(int)str[i]] == 1 || str[i] == ' ' || str[i] == '-' || str[i] == '+')
			return (-1);
		dat[(int)str[i]] = 1;
		i++;
	}
	return (i);
}

int	toten(char *nbr, char *base, int basen)
{
	int	res;
	int	idx;

	res = 0;
	while (*nbr != '\0')
	{
		idx = 0;
		while(*nbr != base[idx])
			idx++;
		res = res * basen + idx;
		nbr++;
	}
	return (res);

}

int	myft_atoi_base(char *str, char *base)
{
	int		len;
	char	nbr[32];
	int		minus;

	minus = 1;
	len = lenlen(base);
	if(len == -1)
		return 0;
	ae_atoi(str, nbr, base, &minus);
	return (minus * toten(nbr, base, len));
}
