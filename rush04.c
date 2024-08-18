/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarao-de <jarao-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 10:27:11 by mhermini          #+#    #+#             */
/*   Updated: 2024/08/18 10:13:52 by jarao-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	row;
	int	col;

	row = 1;
	while (row <= y)
	{
		col = 1;
		while (col <= x)
		{
			if (((col == 1) && (row == 1)) || ((col == x) && (row == y)
					&& (col != 1) && (row != 1)))
				ft_putchar('A');
			else if (((col == x) && (row == 1))
				|| ((col == 1) && (row == y)))
				ft_putchar('C');
			else if ((col == 1) || (col == x) || (row == 1) || (row == y))
				ft_putchar('B');
			else
				ft_putchar(' ');
			col += 1;
		}
		ft_putchar('\n');
		row += 1;
	}
}
