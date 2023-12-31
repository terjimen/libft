/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: terjimen <marvin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:54:40 by terjimen          #+#    #+#             */
/*   Updated: 2023/11/16 14:57:29 by terjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		s;
	int		e;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	s = 0;
	e = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[s]) && s <= e)
		s++;
	if (s > e)
		return (ft_strdup(s1 + e + 1));
	while (ft_strchr(set, s1[e]) && e >= 0)
		e--;
	str = malloc(e - s + 2);
	if (!str)
		return (NULL);
	ft_strlcpy(str, &s1[s], e - s + 2);
	return (str);
}
/*
int	main(void)
{
	const char	*s1 = "   Hola, amigo   ";
	const char	*set = " ";
	char		*cut_str;

	cut_str = ft_strtrim(s1, set);
	if (cut_str)
	{
				printf("Cadena original: \"%s\"\n", s1);
		printf("Cadena recortada: \"%s\"\n", cut_str);

		free(cut_str);
	}
	else
	{
		printf("Error al recortar la cadena.\n");
	}

}
*/
