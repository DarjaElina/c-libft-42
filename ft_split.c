/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delina <delina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:00:58 by delina            #+#    #+#             */
/*   Updated: 2023/11/07 14:01:22 by delina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	ft_count_len(const char *s, char c)
{
	size_t	len_count;

	len_count = 0;
	while (s[len_count] != c)
	{
		len_count++;
	}
	return (len_count);
}

static size_t	ft_count_strs(const char *s, char c)
{
	size_t	str_count;
	size_t	start;

	str_count = 0;
	start = 0;
	while (ft_strtrim(s, &c)[start] != '\0')
	{
		if (ft_strtrim(s, &c)[start] == c)
			str_count++;
		start++;
	}
	return (str_count);
}

static char	*ft_strldup(const char *s1, char c)
{
	char	*s2;
	size_t	i;
	size_t	len;

	len = ft_count_len(s1, c);
	i = 0;
	s2 = (char *)malloc((len + 1) * sizeof(char));
	if (!s2)
		return (NULL);
	while (s1[i] != '\0' && s1[i] != c)
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

char	**ft_split(const char *s, char c)
{
	size_t	strs;
	char	**res;
	size_t	i;
	size_t	j;
	size_t	len_count;

	j = 0;
	i = 0;
	strs = ft_count_strs(s, c);
	res = (char **)malloc(strs * sizeof(char *));
	if (!res)
		return (NULL);
	while (s[i] != '\0' && j <= strs)
	{
		len_count = ft_count_len(&s[i], c);
		if (len_count > 0)
		{
			res[j] = ft_strldup(&s[i], c);
			j++;
			i += len_count;
		}
		i++;
	}
	free(res);
	return (res);
}
/*#include <stdio.h>
int	main(void)
{
	int	i;
	i = 0;
	char **arr = ft_split(",I,like,big,fat,cats!,", ',');
	while (i <= 4)
	{
	
		printf("%s\n", arr[i]);
		i++;
	}
}*/
