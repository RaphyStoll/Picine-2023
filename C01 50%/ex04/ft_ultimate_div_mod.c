/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rapalmei <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 14:35:02 by rapalmei          #+#    #+#             */
/*   Updated: 2023/06/12 16:27:41 by rapalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;

	c = *a;
	*a = c / *b;
	*b = c % *b;
}
/*
int main()
{
	int	*a;
	int *b;
	int i;
	int j;

	a = &i;
	b = &j;
	i = 9;
	j = 2;
	printf("%s", "a = ");
	printf("%d", *a);
	printf("\n");
	printf("%s", "b = ");
	printf("%d", *b);
	printf("\n");
	ft_ultimate_div_mod(a, b);
	printf("%s", "division = ");
	printf("%d", *a);
	printf("\n");
	printf("%s", "modulo = ");
	printf("%d", *b);
	printf("\n");
	return 0;
}
*/
