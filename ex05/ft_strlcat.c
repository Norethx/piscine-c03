/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgomes-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 14:08:11 by rgomes-d          #+#    #+#             */
/*   Updated: 2025/03/31 15:43:39 by rgomes-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	lensrc;
	unsigned int	lendest;
	unsigned int	i;

	i = 0;
	lensrc = ft_strlen(src);
	lendest = ft_strlen(dest);
	if (size <= lendest)
		return (lensrc + size);
	while (i < ((size - lendest) - 1) && src[i] != '\0')
	{
		dest[lendest + i] = src[i];
		i++;
	}
	dest[lendest + i] = '\0';
	return (lensrc + lendest);
}
/*
int main(void)
{
    unsigned int i;
    char string1[10] = "lock";
    i = ft_strlcat(string1, " lock",10);

    return (0);
}
*/
