void	ft_swap(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int *begin = &tab[0];
	int *end = &tab[(size - 1)];
	while(end != begin)
	{
		ft_swap(begin, end);
		if((begin+1) == end)
			return ;
		begin++;
		end--;
	}
}