/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tunombre <tunombre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 16:00:00 by tunombre          #+#    #+#             */
/*   Updated: 2025/06/03 16:00:00 by tunombre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_comb(int *comb, int n, int *first)
{
	int	i;

	i = 0;
	if (!*first)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
	*first = 0;
	while (i < n)
		ft_putchar(comb[i++] + '0');
}

void	ft_print_combn(int n)
{
	int	comb[10];
	int	i;
	int	pos;
	int	first;

	if (n <= 0 || n >= 10)
		return ;
	i = -1;
	while (++i < n)
		comb[i] = i;
	first = 1;
	while (1)
	{
		print_comb(comb, n, &first);
		pos = n;
		while (--pos >= 0 && comb[pos] == (9 - (n - 1 - pos)))
			;
		if (pos < 0)
			break ;
		comb[pos]++;
		i = pos;
		while (++i < n)
			comb[i] = comb[i - 1] + 1;
	}
}
