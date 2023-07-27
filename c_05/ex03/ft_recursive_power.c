/* **************************************************** */
/*		nb	power	sol	                                */
/*		0	0		1                                   */
/*		0	p		0^p=0                               */
/*		n	0		1                                   */
/*		n	p		n^p                                 */
/*                                                      */
/*      when power = 0 solution is 1                    */
/*                                                      */
/*       n^p = n * n * ... p times                      */
/*                                                      */

int	ft_recursive_power(int nb, int power)
{
	if (0 <= power)
	{
		if (power == 0)
			return (1);
		return (nb * ft_recursive_power(nb, power -1));
	}
	else
	{
		return (0);
	}
}
