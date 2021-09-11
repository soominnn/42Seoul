/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyevkim <hyevkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 16:15:16 by hyevkim           #+#    #+#             */
/*   Updated: 2021/09/11 16:41:23 by hyevkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_horizontal(int x)
{
	int		i;

	ft_putchar('o');
	i = 1;
	while (i < x - 1)
	{
		ft_putchar('-');
		i++;
	}
	if (x != 1)
		ft_putchar('o');
	ft_putchar('\n');
}

void	ft_vertical(int x, int y)
{
	int		i;
	int		j;

	j = 1;
	while (j < y - 1)
	{
		ft_putchar('|');
		i = 1;
		while (i < x - 1)
		{
			ft_putchar(' ');
			i++;
		}
		if (x != 1)
			ft_putchar('|');
		ft_putchar('\n');
		j++;
	}
}

void	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
		return ;
	ft_horizontal(x);
	if (y != 1)
	{
		ft_vertical(x, y);
		ft_horizontal(x);
	}
}
