/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rapalmei <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 15:39:32 by rapalmei          #+#    #+#             */
/*   Updated: 2023/06/19 16:01:26 by rapalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_strcpy(char *dest, char *src, int i, unsigned int nb)
{
	unsigned int	j;

	j = 0;
	while (src[j] != '\0' && j < nb)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
}

int	ft_strlen(char *str)
{
	int	strlen_counter;

	strlen_counter = 0;
	while (*str != '\0')
	{
		strlen_counter ++;
		str++;
	}
	return (strlen_counter);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;

	i = ft_strlen(dest);
	ft_strcpy(dest, src, i, nb);
	return (dest);
}
/*
int	main()
{
	char str1[] = "ah oui oui";
	char str2[50] = "pouet pouet le clown";

	ft_strncat(str2, str1, 2);
	printf("%s", str2);
}
*/
