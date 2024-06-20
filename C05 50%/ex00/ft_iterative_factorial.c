/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rapalmei <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 04:19:06 by rapalmei          #+#    #+#             */
/*   Updated: 2023/06/21 05:45:43 by rapalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = nb - 1;
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0)
	{
		return (1);
	}
	while (1 < i)
	{
		nb = nb * i;
		i--;
	}
	return (nb);
}
/*
int main(int argc , char **argv)
{
	if (argc != 2)
	{
		printf ("merci d'ajouter un argument apres %s", argv[0]);
		return 1;
	}
		int num = atoi(argv[1]);
		int result = ft_iterative_factorial(num);
		printf ("fateur de %d : %d\n", num, result);
}
*/
