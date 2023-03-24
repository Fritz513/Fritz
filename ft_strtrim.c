/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabler <fgabler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 17:23:50 by fgabler           #+#    #+#             */
/*   Updated: 2023/03/24 17:55:14 by fgabler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

/*int	ft_checkback(char *str, char *set)
{
	unsigned int	i;

	i = 0;
	if (str == )
}*/
int	ft_checkfront(char const *str, char const *set)
{
	unsigned int	i;

	i = 0;
	if (!str[i])
		return (0);
	while (str[i])
	{
		if (!ft_strchr(set, str[i]))
			break ;
		i++;
	}
	return (i);
}

int	ft_checkback(char const *str, char const *set)
{
	unsigned int	len;
	unsigned int	i;

	len = ft_strlen(str);
	i = ft_strlen(str);
	if (!str[0])
		return (0);
	while (len)
	{
		if (!ft_strchr(set, str[len]))
			break ;
		len--;
	}
	len = len + 1;
	return (i - len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int			start;
	int			end;

	start = ft_checkfront(s1, set);
	end = ft_checkback(s1, set);
	return (ft_strdup(&s1[start]));
}