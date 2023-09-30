/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   24262.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 15:05:45 by jihoolee          #+#    #+#             */
/*   Updated: 2023/09/30 15:08:37 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

int	main(void)
{
	char	*msg;

	msg = "1\n0";
	write(STDOUT_FILENO, msg, ft_strlen(msg));
	return (0);
}
