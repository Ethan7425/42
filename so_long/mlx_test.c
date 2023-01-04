/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_test.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etbernar <etbernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 11:52:55 by etbernar          #+#    #+#             */
/*   Updated: 2023/01/04 16:24:53 by etbernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./minilibx_macos/mlx.h"
#include <unistd.h>


typedef struct	s_vars 
{
	void	*mlx;
	void	*win;
}				t_vars;

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	unsigned int	nb;

	if (n < 0)
	{
		ft_putchar('-');
		nb = -n;
	}
	else
		nb = n;
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		nb %= 10;
	}
	ft_putchar(nb + '0');
}

int mouse_event(int button, int x, int y, void *param)
{
    ft_putnbr(button);
	return(0);
}

int	key(int keycode, t_vars *vars)
{
	if (keycode == 53)
		mlx_destroy_window(vars->mlx, vars->win);
	else 
		ft_putnbr(keycode);
	return (0);
}

int main()
{
	t_vars	vars;
	int		i;
	int		j;

	i = 500;
	j = 50;
	vars.mlx = mlx_init();
	vars.win = mlx_new_window(vars.mlx, 500, 500, "test");

	while (i > 0 && j < 500)
	{
		mlx_pixel_put(vars.mlx, vars.win, i, j, 0x669894);
		i--;
		j++;
	}

	mlx_mouse_hook(vars.win, &mouse_event, 0);
	mlx_key_hook(vars.win, key, &vars);
	mlx_loop(vars.mlx);
}

// Command compil -> gcc -I /usr/X11/include -g -L minilibx_macos  -l mlx -framework OpenGL -framework AppKit mlx_test.c && ./a.out

