/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rapalmei <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 16:10:50 by rapalmei          #+#    #+#             */
/*   Updated: 2023/06/20 17:22:05 by rapalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}
/*
int main()
{
	char str[100] = "Bonjour a tous";
	printf("longeur de count avec strlen = ");
	printf("%lu", strlen(str));
	printf("\n");
	ft_strlen(str);
	printf("longeur de count avec ma fonction = ");
	return(0);
}
*/
