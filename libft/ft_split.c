/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-boul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 23:28:45 by xle-boul          #+#    #+#             */
/*   Updated: 2021/11/09 11:25:56 by xle-boul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* splits a string according to the separator and creates
a new string (malloc) with every bit */

typedef struct s_len
{
	size_t	j;
	size_t	len;
	size_t	n;
	size_t	ct;
	size_t	i;
}			t_len;

static int	ft_count(char const *s, char c)
{
	t_len	n;

	n.ct = 0;
	n.i = 0;
	if (*s == '\0')
		return (0);
	while (*s != '\0')
	{
		if (*s == c)
			n.i = 0;
		else if (n.i == 0)
		{
			n.i = 1;
			n.ct++;
		}
		s++;
	}
	return (n.ct);
}

static int	ft_word(char const *s2, char c, size_t i)
{
	t_len	l;

	l.len = 0;
	while (s2[i] != c && s2[i] != '\0')
	{
		l.len++;
		i++;
	}
	return (l.len);
}

char	**ft_free_stuff(char **new, size_t i)
{
	while (i > 0)
	{
		i--;
		free((void *)new[i]);
	}
	free(new);
	return (NULL);
}

static char	**ft_resolve(char const *s, char **new, char c, size_t len)
{
	t_len	i;

	i.i = 0;
	i.j = 0;
	while (s[i.i] != '\0' && i.j < len)
	{
		i.n = 0;
		while (s[i.i] == c)
			i.i++;
		new[i.j] = (char *)malloc(sizeof(char) * ft_word(s, c, i.i) + 1);
		if (new[i.j] == NULL)
			return (ft_free_stuff(new, i.j));
		while (s[i.i] != '\0' && s[i.i] != c)
			new[i.j][i.n++] = s[i.i++];
		new[i.j][i.n] = '\0';
		i.j++;
	}
	new[i.j] = 0;
	return (new);
}

char	**ft_split(char const *s, char c)
{
	char	**new;
	t_len	len;

	if (s == NULL)
		return (NULL);
	len.len = ft_count(s, c);
	new = (char **)malloc(sizeof(char *) * (len.len + 1));
	if (new == NULL)
		return (NULL);
	return (ft_resolve(s, new, c, len.len));
}

/*
int main()
{
	char	s[] = "  lorem  ipsum    dolor sit   ";
	char	c = ' ';
	char	**new;

	int	x;
	x = 0;
	new = ft_split(s, c);
	while (*new)
	{
		printf("%d %s\n", x, *new);
		new++;
		x++;
	}	
	return (0);
}
*/
