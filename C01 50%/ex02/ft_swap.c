/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rapalmei <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 15:10:06 by rapalmei          #+#    #+#             */
/*   Updated: 2023/06/12 15:10:11 by rapalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
void	ft_swap(int *a, int *b)
{
	int	c;

	c = 0;
	c = *a;
	*a = *b;
	*b = c;
}
/*
int main()
{
	int	*a;
	int	*b;
	int i;
	int j;
	
	a = &i;
	b = &j;
	i = 12;
	j = 24;
	printf("%d", *a);
	printf("%d", *b);
	printf("\n");
	ft_swap(a, b);
	printf("%d", *a);
	printf("%d", *b);

}
*/
