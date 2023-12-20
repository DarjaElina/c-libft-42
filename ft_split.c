/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delina <delina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:00:58 by delina            #+#    #+#             */
/*   Updated: 2023/11/27 00:09:31 by daraelina        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	ft_count_len(const char *s, char c)
{
	size_t	len_count;

	len_count = 0;
	while (s[len_count] != '\0' && s[len_count] != c)
		len_count++;
	return (len_count);
}

static size_t	ft_count_strs(const char *s, char c)
{
	size_t	str_count;
	size_t	start;

	str_count = 0;
	start = 0;
	while (s[start] == c)
		start++;
	while (s[start] != '\0')
	{
		if (s[start] == c)
		{
			str_count++;
			while (s[start] == c)
				start++;
		}
		else
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
	char	**res;
	size_t	i;
	size_t	j;
	size_t	len_count;

	if (!s)
		return (NULL);
	j = 0;
	i = 0;
	res = (char **)malloc((ft_count_strs(s, c) + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	while (s[i] != '\0' && j <= ft_count_strs(s, c))
	{
		len_count = ft_count_len(&s[i], c);
		if (len_count > 0)
		{
			res[j++] = ft_strldup(&s[i], c);
			i += len_count;
		}
		else
			i++;
	}
	res[j] = NULL;
	return (res);
}
/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	int	i;
	i = 0;
//	int j = 0;
	//char **arr = ft_split(",,,,,,,,split,,,,this,,,for,,,me,,,!,,,", ',');
	char *s = "      split       this for   me  !       ";
	char **result = ft_split(s, ' ');
	while (i <= 9)
	{
	
		printf("%s\n", result[i]);
		i++;
	}
	char * * tab = ft_split("  tripouille  42  ", ' ');
	printf("%d\n", strcmp(tab[1], "42"));
	printf("%d\n", strcmp(tab[0], "tripouille"));
	char *splitme = strdup("Tripouille ");
	tab = ft_split(splitme, ' ');
	i = 0;
	while (i <= 1)
	{	
		printf("%s\n", tab[i]);
             	i++;
	}
	i = 3;
	splitme = strdup("--1-2--3---4----5-----42");
	tab = ft_split(splitme, '-');
//	while (i <= 5)
//	{
//		printf("%s\n", tab[i]);
//		i++;
//	}
	printf("%s\n", tab[9]); 
}*/
