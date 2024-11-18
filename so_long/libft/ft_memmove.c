/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dani_mm__ <dani_mm__@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 11:22:41 by dani_mm__         #+#    #+#             */
/*   Updated: 2024/05/28 12:15:05 by dani_mm__        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t	n)
{
	size_t	i;

	if (dest == NULL && src == NULL)
		return (NULL);
	i = 0;
	if (dest > src)
	{
		while (n > 0)
		{
			((unsigned char *)dest)[n -1] = ((unsigned char *)src)[n - 1];
		n --;
		}
	}
	else
	{
		while (i < n)
		{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
		}
	}
	return (dest);
}

// #include <stdio.h>

// int     main()
// {
//         size_t c = 5;
//         char dest[] = "ABCDEF";
//         const char src[] = "12345";

//         size_t c1 = 5;
//         char dest1[] = "ABCDEF";
//         const char src1[] = "12345";

//         printf("dest = %s\n", dest);
//         printf("src = %s\n", src);

//         memmove(dest, src, c);
//         printf("vrai fct : %s\n", dest);

//         ft_memmove(dest1, src1, c1);
//         printf("pas vrai fonction : %s\n", dest1);
// }