/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dani_mm__ <dani_mm__@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 11:23:17 by dani_mm__         #+#    #+#             */
/*   Updated: 2024/05/28 12:15:43 by dani_mm__        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countword(const char *s, char c)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			word++;
			while (s[i] != c && s[i])
			{
				i++;
			}
		}
		else
			i++;
	}
	return (word);
}

static int	ft_size_word(const char *s, char c, int i)
{
	int	size;

	size = 0;
	while (s[i] != '\0' && s[i] != c)
	{
		size++;
		i++;
	}
	return (size);
}

static void	ft_free(char **s, int j)
{
	while (j-- > 0)
		free (s[j]);
	free (s);
}

char	**ft_split(const char *s, char c)
{
	char	**dest;
	int		i;
	int		j;
	int		word;
	int		size;

	i = 0;
	j = -1;
	word = ft_countword(s, c);
	dest = (char **)malloc(sizeof(char *) * (word + 1));
	if (dest == NULL)
		return (NULL);
	while (++j < word)
	{
		while (s[i] == c && s[i])
			i++;
		size = ft_size_word(s, c, i);
		dest[j] = ft_substr(s, i, size);
		if (dest[j] == NULL)
			ft_free(dest, j);
		i = i + size;
	}
	dest[j] = NULL;
	return (dest);
}

// #include <stdio.h>

// int	main()
// {
// 	char dest[] = "salut comment ca va ";
//     ft_split(dest, ' ');
// 	printf("%d\n", ft_countword(" salut ca va comment ", ' '));
// 	printf("%d\n", ft_size_word(" salut ca va comment ", ' ', 1));
// }