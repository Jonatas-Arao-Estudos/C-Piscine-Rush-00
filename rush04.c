/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   e.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhermini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 10:27:11 by mhermini          #+#    #+#             */
/*   Updated: 2024/08/17 10:27:22 by mhermini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int x, int y)
{
	int	put_x;
	int	put_y;

	put_x = 1;
	put_y = 1;
	while (put_y <= y)
	{
		while (put_x <= x)
		{
			if (put_x == 1 && put_y == 1
				|| put_x == x && put_y == y && put_x != 1 && put_y != 1)
				write (1, "A", 1);
			else if (put_x == x && put_y == 1
					|| put_x == 1 && put_y == y )
					write (1, "C", 1);
	 			else if (put_x == 1 || put_x == x || put_y == 1 || put_y == y)
	 				  	write (1, "B", 1);
	 			   else
	 				  write (1, " ", 1);
	 		put_x +=1;
		}
		put_x = 1;
		write (1, "\n", 1);
		put_y +=1;
	}
}
