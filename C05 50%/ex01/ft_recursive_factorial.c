/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rapalmei <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 04:55:41 by rapalmei          #+#    #+#             */
/*   Updated: 2023/06/21 05:47:14 by rapalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0)
	{
		return (1);
	}
	return (nb * ft_recursive_factorial (nb - 1));
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
        int result = ft_recursive_factorial(num);
        printf ("fateur de %d : %d\n", num, result);
}
*/
