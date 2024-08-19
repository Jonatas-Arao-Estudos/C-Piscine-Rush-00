/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a-rush03.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarao-de <jarao-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 10:27:11 by mhermini          #+#    #+#             */
/*   Updated: 2024/08/19 10:23:22 by jarao-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_printline(int size, char start, char line, char final)
{
	int	counter;

	ft_putchar(start);
	if (size >= 2)
	{
		counter = 1;
		while (counter <= size - 2)
		{
			ft_putchar(line);
			counter = counter + 1;
		}
		ft_putchar(final);
	}
}

void	rush(int x, int y)
{
	int	row;

	row = 1;
	if (x > 0 && y > 0)
	{
		while (row <= y)
		{
			if (row == 1)
				ft_printline(x, 'A', 'B', 'C');
			else if (row > 1 && row < y)
				ft_printline(x, 'B', ' ', 'B');
			else if (row == y)
				ft_printline(x, 'A', 'B', 'C');
			ft_putchar('\n');
			row = row + 1;
		}
	}
}
