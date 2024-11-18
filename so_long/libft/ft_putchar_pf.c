/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_pf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dani_mm__ <dani_mm__@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 13:06:31 by dperez-a          #+#    #+#             */
/*   Updated: 2024/05/29 08:59:35 by dani_mm__        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_pf(char c, size_t *counter)
{
	write(1, &c, 1);
	(*counter)++;
}
/*int main()
{
    size_t counter = 0;
    char c = 'A';

    ft_putchar_pf(c, &counter);
    printf("\nPrinted %zu characters.\n", counter);

    return 0;
}*/
