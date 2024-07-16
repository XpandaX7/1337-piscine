/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayait-mo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 11:38:24 by ayait-mo          #+#    #+#             */
/*   Updated: 2024/07/07 11:49:42 by ayait-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	start;
	int	end;
	int	temo;

	start = 0;
	end = size - 1;
	while (start < end)
	{
		temo = tab[start];
		tab[start] = tab[end];
		tab[end] = temo;
		start++;
		end--;
	}
}
