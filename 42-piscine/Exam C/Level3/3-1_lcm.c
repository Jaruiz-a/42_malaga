unsigned int	ft_pgcd(int nbr1, int nbr2)
{
	if ((nbr1 > 0 && nbr2 > 0))
	{
		while (nbr1 != nbr2)
		{
			if (nbr1 > nbr2)
				nbr1 -= nbr2;
			else
				nbr2 -= nbr1;
		}
	}
	return (nbr1);
}


unsigned int	lcm(unsigned int a, unsigned int b)
{
	unsigned int		gcd;

	gcd = ft_pgcd(a, b);
	return (gcd ? ((a / gcd) * b) : 0);
}


/* ************************************************************************** */
/* ************************************************************************** */


unsigned int	lcm(unsigned int a, unsigned int b)
{
	int		gcd;
	int		tmp_a;
	int		tmp_b;

	gcd = 0;
	tmp_a = a;
	tmp_b = b;
	while (1)
	{
		if (a == 0)
			break;
		b %= a;
		if (b == 0)
			break;
		a %= b;
	}
	gcd = (!b) ? a : b;
	return (gcd ? ((tmp_a / gcd) * tmp_b) : 0);
}
