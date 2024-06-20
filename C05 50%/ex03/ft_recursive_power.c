/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rapalmei <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 06:42:30 by rapalmei          #+#    #+#             */
/*   Updated: 2023/06/21 17:52:37 by rapalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
	{
		return (1);
	}
	if (power < 0)
	{
		return (0);
	}
	return (nb * ft_recursive_power(nb, power -1));
}
/*
int main(int argc,char **argv)
{
	if (argc != 3)
	{
		printf ("merci d'ajouter deux argument apres %s", argv[0]);
		return 1;
		}

	int num = atoi(argv[1]);
	int power = atoi(argv[2]);
	int result = ft_recursive_power(num, power);
	printf ("%d puissance %d = %d\n", num, power, result);
	return (0);
}
*/
