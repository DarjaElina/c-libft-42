/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delina <delina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:00:58 by delina            #+#    #+#             */
/*   Updated: 2023/12/29 21:15:56 by daraelina        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	count_segments(char const *str, char delimiter)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (*(str + i))
	{
		if (*(str + i) != delimiter)
		{
			count++;
			while (*(str + i) && *(str + i) != delimiter)
				i++;
		}
		else
		{
			i++;
		}
	}
	return (count);
}

static size_t	get_segment_length(char const *str, char delimiter)
{
	size_t	length;

	length = 0;
	while (*(str + length) && *(str + length) != delimiter)
		length++;
	return (length);
}

static void	free_segment_array(size_t index, char **segments)
{
	while (index > 0)
	{
		index--;
		free(*(segments + index));
	}
	free(segments);
}

static char	**split(char const *str, char del, char **segs, size_t seg_count)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i < seg_count)
	{
		while (*(str + j) && *(str + j) == del)
			j++;
		*(segs + i) = ft_substr(str, j, get_segment_length(&*(str + j), del));
		if (!*(segs + i))
		{
			free_segment_array(i, segs);
			return (NULL);
		}
		while (*(str + j) && *(str + j) != del)
			j++;
		i++;
	}
	*(segs + i) = NULL;
	return (segs);
}

char	**ft_split(char const *str, char delimiter)
{
	char	**segments;
	size_t	segment_count;

	if (!str)
		return (NULL);
	segment_count = count_segments(str, delimiter);
	segments = (char **)malloc(sizeof(char *) * (segment_count + 1));
	if (!segments)
		return (NULL);
	segments = split(str, delimiter, segments, segment_count);
	return (segments);
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
