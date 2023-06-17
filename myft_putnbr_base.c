#include <unistd.h>

int	super_strlen(char *base)
{
	int	len;
	int	i;
	int	dat[127];

	i = 0;
	while (i < 127)
	{
		dat[i] = 0;
		i++;
	}
	len = 0;
	while (*base != '\0')
	{
		if (dat[(int)*base] == 1)
			return (-1);
		if (*base == '+' || *base == '-')
			return (-1);
		dat[(int)*base] = 1;
		len++;
		base++;
	}
	if (len < 2)
		return (-1);
	return (len);
}

void	transprint(int nbr, char *base, int len)
{
	char	fp[32];
	char	*pfp;

	pfp = fp;
	while (nbr > 0)
	{
		*pfp = *base + (nbr % len);
		pfp++;
		nbr = nbr / len;
	}
	while (pfp >= fp)
	{
		write(1, pfp, 1);
		pfp--;
	}
	return;
}

void	myft_putnbr_base(int nbr, char *base)
{
	int	len;

	if (nbr < 0)
	{
		nbr *= -1;
		write(1, "-", 1);
	}
	len = super_strlen(base);
	if (len == -1)
		return;
	transprint(nbr, base, len);
	return;
}
