/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: terjimen <marvin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 19:29:20 by terjimen          #+#    #+#             */
/*   Updated: 2023/11/08 20:03:42 by terjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	char	*s2;

	i = 0;
	s2 = (char *) malloc(ft_strlen(s1) + 1 * sizeof(char));
	if (s2 == NULL)
		return (NULL);
	while (s1[i])
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
/*
int	main(void)
{
	const char *og = "Hola amigo";

	char *cp = strdup(og);

	if (cp != NULL)
	{
		printf("OG: %s\n", og);
		printf("CP: %s\n", cp);

	free(cp);
	}
	else
		printf("ERROR.\n");

	return(0);
}
*/
