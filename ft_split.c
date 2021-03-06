/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftudini <ftudini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 15:44:34 by ftudini           #+#    #+#             */
/*   Updated: 2021/03/06 15:36:21 by ftudini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_free_words(int n_words, char **words)
{
	int y;

	y = 0;
	while (y < n_words)
	{
		free(words[y]);
		y++;
	}
	free(words);
}

static int	ft_count_words(const char *str, char sep)
{
	int y;
	int count;
	int new_word;

	y = 0;
	count = 0;
	new_word = 0;
	while (str[y])
	{
		if (str[y] != sep)
		{
			if (!new_word)
				count++;
			new_word = 1;
		}
		else
			new_word = 0;
		y++;
	}
	return (count);
}

static int	ft_new_word_pos(const char *str, int n_word, char sep)
{
	int i;
	int word_count;
	int new_word;

	i = 0;
	new_word = 0;
	word_count = 0;
	while (str[i])
	{
		if (str[i] != sep)
		{
			if (!new_word)
			{
				word_count++;
				if (word_count == n_word + 1)
					break ;
			}
			new_word = 1;
		}
		else
			new_word = 0;
		i++;
	}
	return (i);
}

static char	*ft_word(const char *str, int n_word, char sep, char **words)
{
	int		i;
	int		j;
	int		k;
	char	*word;

	i = ft_new_word_pos(str, n_word, sep);
	k = i;
	while (str[k] && str[k] != sep)
		k++;
	word = (char *)malloc((k - i + 1) * sizeof(char));
	if (!word)
	{
		ft_free_words(n_word, words);
		return (0);
	}
	j = 0;
	while (i < k)
		word[j++] = str[i++];
	word[j] = 0;
	return (word);
}

char		**ft_split(char const *s, char c)
{
	char	**words;
	int		tot_words;
	int		i;

	tot_words = ft_count_words(s, c);
	words = (char **)malloc((tot_words + 1) * sizeof(char *));
	if (!words)
		return (0);
	words[tot_words] = NULL;
	i = 0;
	while (i < tot_words)
	{
		words[i] = ft_word(s, i, c, words);
		i++;
	}
	return (words);
}
