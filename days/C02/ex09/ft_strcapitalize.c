/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayait-mo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 11:17:59 by ayait-mo          #+#    #+#             */
/*   Updated: 2024/07/06 11:28:22 by ayait-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	if (str[i] != '\0' && str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] -= 32;
	}
	while (str[i] != '\0')
	{
		if ((str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '-'
				|| str[i] == '+') && str[i + 1] >= 'a' && str[i + 1] <= 'z')
		{
			str[i + 1] -= 32;
		}
		i++;
	}
	return (str);
}
