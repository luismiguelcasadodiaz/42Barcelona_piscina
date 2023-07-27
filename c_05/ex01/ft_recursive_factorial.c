/* factorial es el numero que resulta de la multiplicacion de un numero    */
/* natural por todos los numeros que le anteceden exceptuando el cero      */

int	ft_recursive_factorial(int nb)
{
	if (0 <= nb)
	{
		if (nb == 0)
			return (1);
		else
			return (nb * ft_recursive_factorial(nb - 1));
	}
	else
		return (0);
}
