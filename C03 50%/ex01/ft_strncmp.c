/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rapalmei <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 15:38:44 by rapalmei          #+#    #+#             */
/*   Updated: 2023/06/19 15:38:51 by rapalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char*s2, unsigned int nb)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && (i < nb))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
/*
int	main()
{
	char s1[] = "ABcB", s2[] = "abcd",
			s3[] = "ABCBDBAABADCDCCBEbehsuuiii56733o082g87",
			s4[] = "ABCBDBAABADCDCCBrbehuuiii56733";

	printf("%d\n", ft_strncmp(s1, s2, 2));
	printf("%d\n", strncmp(s1, s2, 2));
	printf("%d\n", ft_strncmp(s3, s4, 19));
	printf("%d\n", strncmp(s3, s4, 19));
	printf("%d\n", ft_strncmp(s3, s4, 6));
	printf("%d\n", strncmp(s3, s4, 6));
}
*/
