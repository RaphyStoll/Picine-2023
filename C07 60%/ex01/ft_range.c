/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rapalmei <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 17:06:05 by rapalmei          #+#    #+#             */
/*   Updated: 2023/06/27 01:03:22 by rapalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	size;
	int	*range;

	range = NULL;
	if (min >= max)
	{
		return (NULL);
	}
	size = max - min;
	range = (int *) malloc(size * sizeof(int));
	if (range == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (min < max)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}
/*
int main(int argc, char *argv[])
{
   if (argc != 3) {
   printf("Utilisation : ./programme min max\n");
   return 1;
   }

   int min = atoi(argv[1]);
   int max = atoi(argv[2]);
   int *result = ft_range(min, max);

   if (result == NULL) {
   printf("Erreur : min est supérieur ou égal à max\n");
   } else {
   printf("Tableau généré : ");
   for (int i = 0; i < max - min; i++) {
   printf("%d ", result[i]);
   }
   printf("\n");
   free(result);
   }

   return 0;
   }*/
