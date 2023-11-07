/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delina <delina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:07:58 by delina            #+#    #+#             */
/*   Updated: 2023/11/06 12:57:00 by delina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	s1_len;
	size_t	res_len;
	size_t	start;
	size_t	end;
	char	*res;

	if (!s1 || !set)
		return (NULL);
	s1_len = ft_strlen(s1);
	start = 0;
	end = s1_len;
	while (start < s1_len && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	res_len = end - start;
	res = (char *)malloc((res_len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	ft_memcpy(res, s1 + start, res_len);
	res[res_len] = '\0';
	return (res);
}
/*#include <stdio.h>
int	main(void)
{
	printf("%s", ft_strtrim("...//.Hello world./../", "._/"));
}*/