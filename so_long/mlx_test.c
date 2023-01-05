/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_test.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etbernar <etbernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 11:52:55 by etbernar          #+#    #+#             */
/*   Updated: 2023/01/05 15:51:05 by etbernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./minilibx_macos/mlx.h"
#include <unistd.h>
#include <stdlib.h>


typedef struct	s_vars 
{
	void	*mlx;
	void	*win;
	void	*img;
	int		i;
	int		j;
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

int mouse_event(int button, int x, int y, t_vars *vars)
{
    ft_putnbr(button);
	return(0);
}

int	key(int keycode, t_vars *vars)
{
	vars->i = 50;
	vars->j = 50;
	if (keycode == 53)
	{
		mlx_destroy_window(vars->mlx, vars->win);
		free(vars->mlx);
	}
	if (keycode == 0)
	{
		while (vars->i < 500)
		{
			mlx_pixel_put(vars->mlx, vars->win, vars->i, vars->j, 0x614894);
			vars->i++;
			vars->j++;
		}
	}
	else 
		ft_putnbr(keycode);
	return (0);
}

int main()
{
	t_vars	vars;

	int i;
	int j;

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

/*

*/