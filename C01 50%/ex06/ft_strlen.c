/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rapalmei <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 12:26:03 by rapalmei          #+#    #+#             */
/*   Updated: 2023/06/13 12:27:06 by rapalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_putstr(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
	len++;
	}
	return (len);
}
/*
int main()
{
	char str[] =  "hello tout le monden\n";
	ft_putstr(str);
	return(0);
}*/
