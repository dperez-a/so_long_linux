/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dani_mm__ <dani_mm__@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 13:30:24 by dani_mm__         #+#    #+#             */
/*   Updated: 2024/06/04 18:37:28 by dani_mm__        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

void initialize_game(t_game *game)
{
	// Inicialización del juego
}

int detect_collision(t_game *game, char direction)
{
	// Detectar colisiones con muros
	return 0; // Placeholder
}

void collect_object(t_game *game)
{
	// Recolectar objeto y actualizar el estado del juego
}

int check_victory(t_game *game)
{
	// Verificar condición de victoria
	return 0; // Placeholder
}

void display_move_count(t_game *game)
{
	printf("Movements: %d\n", game->move_count);
}
