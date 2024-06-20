/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rapalmei <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 06:31:12 by rapalmei          #+#    #+#             */
/*   Updated: 2023/06/21 17:57:40 by rapalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_iterative_power(int nb, int power)
{
	unsigned int	resultat;

	resultat = nb;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (1 < power)
	{
		resultat = resultat * nb;
		power--;
	}
	return (resultat);
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
	int result = ft_iterative_power(num, power);
	printf ("puissance de %d^%d: %d\n", num, power, result);
}
*/
