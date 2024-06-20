/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rapalmei <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 16:38:03 by rapalmei          #+#    #+#             */
/*   Updated: 2023/06/24 17:52:44 by rapalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_sqrt(int nb)
{
	int	i;
	int	racine;

	i = 1;
	racine = 0;
	while (i * i <= nb && i <= 46340)
	{
		if (i * i == nb)
		{
			racine = i;
			return (racine);
		}
		i++;
	}
	return (0);
}
/*
int	main(int argc, char **argv)
{
	int	nombre = atoi(argv[1]);
	int resultat = ft_sqrt(nombre);
	printf("La racine carrée entière de %d est : %d\n", nombre, resultat);
	return 0;
}
*/
