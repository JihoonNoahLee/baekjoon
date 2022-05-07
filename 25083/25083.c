/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   25083.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 16:54:34 by jihoolee          #+#    #+#             */
/*   Updated: 2022/05/07 17:10:10 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	main(void)
{
	char	*buf;

	buf = "         ,r'\"7\n"
		"r`-_   ,'  ,/\n"
		" \\. \". L_r'\n"
		"   `~\\/\n"
		"      |\n"
		"      |";
	write(STDOUT_FILENO, buf, ft_strlen(buf));
	return (0);
}
