/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rapalmei <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 18:46:55 by rapalmei          #+#    #+#             */
/*   Updated: 2023/06/27 05:34:25 by rapalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;
	int	*result_array;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	result_array = (int *)malloc(size * sizeof(int));
	if (result_array == NULL)
	{
		*range = NULL;
		return (-1);
	}
	i = 0;
	while (min < max)
	{
		result_array[i] = min;
		min++;
		i++;
	}
	*range = result_array;
	return (size);
}
/*
int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: ./test min max\n");
        return 1;
    }

    int min = atoi(argv[1]);
    int max = atoi(argv[2]);

    int *range;
    int size = ft_ultimate_range(&range, min, max);

    if (size == -1) {
        printf("Erreur d'allocation mémoire.\n");
        return 1;
    }

    if (range == NULL) {
        printf("min est supérieur ou égal à max.\n");
        return 1;
    }

    printf("Tableau alloué : ");
    for (int i = 0; i < size; i++) {
        printf("%d ", range[i]);
    }
    printf("\n");

    free(range);

    return 0;
}*/
