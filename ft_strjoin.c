/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delina <delina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 22:02:44 by delina            #+#    #+#             */
/*   Updated: 2023/11/06 12:49:51 by delina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(const char *s1, char const *s2)
{
	char	*res;
	size_t	i;
	size_t	j;
	size_t	total_len;

	total_len = ft_strlen(s1) + ft_strlen(s2) + 1;
	i = 0;
	j = 0;
	res = (char *)malloc(total_len * sizeof(char));
	if (!res)
		return (NULL);
	while (i < ft_strlen(s1))
	{
		res[i] = s1[i];
		i++;
	}
	while (j < ft_strlen(s2))
	{
		res[i] = s2[j];
		i++;
		j++;
	}
	res[i] = '\0';
	return (res);
}
/*#include <stdio.h>
int main(void)
{
	printf("%s", ft_strjoin("Hello", "world"));
}*/
