/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_append.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chughes <chughes@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 09:57:54 by chughes           #+#    #+#             */
/*   Updated: 2022/10/03 20:51:34 by chughes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

// Appends 's2' to 's1' and frees 's1'
char	*str_append(char *s1, char *s2)
{
	char	*rtn;
	int		i;
	int		j;

	if (s1 == NULL || s2 == NULL)
	{
		free(s2);
		return (NULL);
	}
	i = -1;
	j = -1;
	rtn = ft_calloc((ft_strlen(s1) + ft_strlen(s2) + 1), sizeof(char));
	if (rtn == NULL)
		return (NULL);
	while (s1[++i])
		rtn[i] = s1[i];
	while (s2[++j])
		rtn[i + j] = s2[j];
	free(s1);
	return (rtn);
}
