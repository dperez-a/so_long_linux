/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dani_mm__ <dani_mm__@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 18:30:03 by dani_mm__         #+#    #+#             */
/*   Updated: 2024/06/14 13:19:04 by dani_mm__        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

void handle_movement(t_game *game, char direction)
{
	if (!detect_collision(game, direction))
    {
		// Actualizar posición del jugador
		collect_object(game);
		display_move_count(game);
	}

	if (check_victory(game))
    {
		printf("You won!\n");
		exit(0);
	}
}

int handle_keypress(int keycode, t_mlx *mlx, t_game *game)
{
	if (keycode == 53) {
		mlx_destroy_window(mlx->mlx_ptr, mlx->win_ptr);
		exit(0);
	}
	if (keycode == 13) // W key
		handle_movement(mlx, 'W');
	if (keycode == 1) // S key
		handle_movement(mlx, 'S');
	if (keycode == 0) // A key
		handle_movement(mlx, 'A');
	if (keycode == 2) // D key
		handle_movement(mlx, 'D');
	update_window(game, mlx);
	return (0);
}

int handle_exit(t_mlx *mlx)
{
	mlx_destroy_window(mlx->mlx_ptr, mlx->win_ptr);
	exit(0);
	return (0);
}

void handle_events(t_mlx *mlx)
{
	mlx_hook(mlx->win_ptr, 2, 1L<<0, handle_keypress, mlx);
	mlx_hook(mlx->win_ptr, 17, 0, handle_exit, mlx);
}
