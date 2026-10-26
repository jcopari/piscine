void	ft_swap(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_rev_int_tab(int *tab, int size)
{
	if(!tab || size <= 1)
		return ;
	
	int *begin = &tab[0];
	int *end = &tab[(size - 1)];
	while(begin < end)
	{
		ft_swap(begin, end);
		begin++;
		end--;
	}
}