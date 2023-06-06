char*	mystrnstr(char *big, char *small, int len)
{
	int	y;

	y = 0;

	if(*small == '\0')
		return(big);
	
	while(*big != '\0' && len > 0)
	{
		while(big[y] == small[y] && len - y > 0)
		{
			y++;
			if(small[y] == '\0')
				return(big);
		}
		big++;
		len--;
		y = 0;
	}
	return(NULL);
}
