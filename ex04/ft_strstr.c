/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgomes-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 20:09:09 by rgomes-d          #+#    #+#             */
/*   Updated: 2025/03/31 15:41:27 by rgomes-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find);

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	idx;

	i = 0;
	while (str[i] != '\0')
	{
		idx = 0;
		while (str[i + idx] == to_find[idx])
		{
			idx++;
			if (to_find[idx] == '\0')
				return (&str[i]);
		}
		i++;
	}
	return ((void *)0);
}
/*
int	main(void)
{
	ft_strstr("tentativa", "tiva");
}
*/
