/* factorial es el numero que resulta de la multiplicacion de un numero    */
/* natural por todos los numeros que le anteceden exceptuando el cero      */

int	ft_iterative_factorial(int nb)
{
	int	fact;

	if (0 <= nb)
	{
		if (0 == nb)
			return (1);
		else
		{
			fact = nb;
			while (0 < --nb)
				fact = fact * nb;
			return (fact);
		}
	}
	else
		return (0);
}
