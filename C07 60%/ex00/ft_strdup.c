/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rapalmei <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 23:17:57 by rapalmei          #+#    #+#             */
/*   Updated: 2023/06/25 14:53:58 by rapalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	int		count;
	int		i;
	char	*copie;

	count = 0;
	while (src[count] != '\0')
	{
		count++;
	}
	copie = (char *) malloc(count + 1);
	if (copie != NULL)
	{
		i = 0;
		while (src[i] != '\0')
		{
			copie[i] = src[i];
			i++;
		}
		copie[i] = '\0';
		free(copie);
		return (0);
	}
}
/*
   int main(int argc, char** argv)
   {
   (void)argc;
   char* a = argv[1];
   ft_strdup(a);
   }
   */
