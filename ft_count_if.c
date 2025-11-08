
int	ft_count_if(char **tab, int (*f)(char*))
{
	int i = 0;
	int res = 0;
	while (tab[i] != 0)
	{
		if (f(tab[i]) == 1)
			res++;
		i++;
	}
	return (res);
}

int     ft_isalpha(char *c)
{
	int i = 0;
	while (c[i])
	{
      	if ((c[i] >= 'A' && c[i] <= 'Z') || (c[i] >= 'a' && c[i] <= 'z'))
                i++;
        else
        	return (0);
    }
    return (1);
}

int main(void)
{
	char *tab[7] = {"un", "de", "33", "tr", "04", 0};
	int l = ft_count_if(tab, &ft_isalpha);
	__builtin_printf("%d\n", l);
	return(0);
}