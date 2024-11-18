/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dani_mm__ <dani_mm__@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 11:43:13 by dani_mm__         #+#    #+#             */
/*   Updated: 2024/05/15 11:43:17 by dani_mm__        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"

int	update(t_game *game)
{
	if (!game)
		exit(0);
	if (game->enemy->count)
		move_enemy(game);
	animate_enemy(game, game->enemy->dir);
	mlx_clear_window(game->mlx_ptr, game->win_ptr);
	draw_map(game);
	return (0);
}

void	init_game(t_game *game)
{
	init_img(game);
	init_player(game);
	init_enemy(game);
	check_map(game);
	draw_map(game);
}

int	main(int argc, char **argv)
{
	t_game	*game;

	if (argc == 2)
	{
		check_path(argv[1]);
		game = ft_calloc(1, sizeof(t_game));
		game->mlx_ptr = mlx_init();
		if (!init_map(game, argv[1]))
			exit_game(game, "Error: Invalid map\n", 1);
		game->win_ptr = mlx_new_window(game->mlx_ptr, game->map->width,
				game->map->height + SS * 2, "so_long");
		init_game(game);
		mlx_key_hook(game->win_ptr, move_player, game);
		mlx_loop_hook(game->mlx_ptr, update, game);
		mlx_hook(game->win_ptr, 17, 0, update, NULL);
		mlx_loop(game->mlx_ptr);
	}
	else
		ft_putstr_fd("Error : ./so_long <map_path>\n", 1);
	return (0);
}
