/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 14:49:07 by ycao              #+#    #+#             */
/*   Updated: 2017/09/19 20:10:04 by ycao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "fdf.h"

// int my_key_funct(int keycode, void *mlx)
// {
// 	printf("key event %d\n", keycode);
// 	mlx_pixel_put(mlx, win, 300, 300, 0xFF00FF);
// 	return (0);
// }

int		main()
{
	void	*mlx;
	void	*win;
	int x = 0;
	int y = 0;

	mlx = mlx_init();
	win = mlx_new_window(mlx, 420, 420, "42");
	sleep(2);
	y = 100;
	while (y < 200)
	{
		x = 100;
		while (x < 200)
		{
			mlx_pixel_put(mlx, win, x, y, 0xFF0000);

			x++;
		}
		y++;
	}
	// mix_key_hook(win, my_key_funct, mlx);
	mlx_loop(mlx);
	// sleep(5);
	// return(0);
}
