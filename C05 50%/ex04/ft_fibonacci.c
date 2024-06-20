/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rapalmei <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 18:07:25 by rapalmei          #+#    #+#             */
/*   Updated: 2023/06/24 15:19:31 by rapalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	if (index == 2)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*
int main(int argc, char **argv)
{
    int a = atoi(argv[1]);
	int b = atoi(argv[2]);
	int c = atoi(argv[3]);
	int d = atoi(argv[4]);
	int e = atoi(argv[5]);
	int f = atoi(argv[6]);
	int g = atoi(argv[7]);
	int h = atoi(argv[8]);
	int i = atoi(argv[10]);
	int j = atoi(argv[11]);
	int k = atoi(argv[12]);
	int l = atoi(argv[13]);
	int m = atoi(argv[14]);
	int n = atoi(argv[15]);
	int o = atoi(argv[16]);
	int p = atoi(argv[17]);
	int q = atoi(argv[18]);
	int r = atoi(argv[19]);
	int s = atoi(argv[20]);
	int t = atoi(argv[21]);
	int u = atoi(argv[22]);
	int x = atoi(argv[23]);
	int y = atoi(argv[24]);
	int z = atoi(argv[25]);
   printf ("%d\n", ft_fibonacci(a));
   printf ("%d\n", ft_fibonacci(b));
   printf ("%d\n", ft_fibonacci(c));
   printf ("%d\n", ft_fibonacci(d));
   printf ("%d\n", ft_fibonacci(e));
   printf ("%d\n", ft_fibonacci(f));
   printf ("%d\n", ft_fibonacci(g));
   printf ("%d\n", ft_fibonacci(h));
   printf ("%d\n", ft_fibonacci(i));
   printf ("%d\n", ft_fibonacci(j));
   printf ("%d\n", ft_fibonacci(k));
   printf ("%d\n", ft_fibonacci(l));
   printf ("%d\n", ft_fibonacci(m));
   printf ("%d\n", ft_fibonacci(n));
   printf ("%d\n", ft_fibonacci(o));
   printf ("%d\n", ft_fibonacci(p));
   printf ("%d\n", ft_fibonacci(q));
   printf ("%d\n", ft_fibonacci(r));
   printf ("%d\n", ft_fibonacci(s));
   printf ("%d\n", ft_fibonacci(t));
   printf ("%d\n", ft_fibonacci(u));
   printf ("%d\n", ft_fibonacci(x));
   printf ("%d\n", ft_fibonacci(y));
   printf ("%d\n", ft_fibonacci(z));
}
*/
