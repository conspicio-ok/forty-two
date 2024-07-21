/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raserre- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 11:20:51 by raserre-          #+#    #+#             */
/*   Updated: 2024/06/29 11:20:56 by raserre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	print_line(int len, char start, char middle, char end);

void	rush(int x, int y)
{
	int	i;

	i = 0;
	if (x > 0 && y > 0)
	{
		print_line(x, '/', '*', '\\');
		while (i < y - 2)
		{
			print_line(x, '*', 'X', '*');
			i++;
		}
		if (y > 1)
			print_line(x, '\\', '*', '/');
	}
}