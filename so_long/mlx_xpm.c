/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_xpm.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etbernar <etbernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 10:53:17 by etbernar          #+#    #+#             */
/*   Updated: 2023/01/05 15:25:07 by etbernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./minilibx_macos/mlx.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct s_img
{
	void	*mlx_img;
	char	*addr;
	int		bpp; /* bits per pixel */
	int		line_len;
	int		endian;
}	t_img;


int main()
{
	void	*mlx;
	void	*win;
	void	*img;
	char	*path = "./xpm/test.xpm";
	int	height;
	int	width;

	//height = 13;
	//width = 13;
	
	mlx = mlx_init();
	win = mlx_new_window(mlx, 500, 500, "test");
	img = mlx_xpm_file_to_image(mlx, path, &width, &height);
	mlx_loop(mlx);
}

void	img_pix_put(t_img *img, int x, int y, int color)
{
	char    *pixel;
	int		i;

	i = img->bpp - 8;
    pixel = img->addr + (y * img->line_len + x * (img->bpp / 8));
	while (i >= 0)
	{
		/* big endian, MSB is the leftmost bit */
		if (img->endian != 0)
			*pixel++ = (color >> i) & 0xFF;
		/* little endian, LSB is the leftmost bit */
		else
			*pixel++ = (color >> (img->bpp - 8 - i)) & 0xFF;
		i -= 8;
	}
}

void	render_background(t_img *img, int color)
{
	int	i;
	int	j;

	i = 0;
	while (i < 500)
	{
		j = 0;
		while (j < 500)
		{
			img_pix_put(img, j++, i, color);
		}
		++i;
	}
}