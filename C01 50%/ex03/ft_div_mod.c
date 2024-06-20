/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rapalmei <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 13:03:14 by rapalmei          #+#    #+#             */
/*   Updated: 2023/06/12 17:58:13 by rapalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int main()
{
	int *div;
	int *mod;
	int a;
	int b;

	div = &a;
	mod = &b;
	a = 9;
	b = 2;
	printf("%s", "a  = ");
	printf("%d",  *div);
	printf("\n");
	printf("%s", "b = ");
	printf("%d", *mod);
	printf("\n");
	ft_div_mod(a, b, div, mod);
	printf("%s", "division = ");
	printf("%d", *div);
	printf("\n");
	printf("%s", "modulo = ");
	printf("%d", *mod);
	printf("\n");
	return (0);
}
*/
