/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   7287.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 16:38:54 by jihoolee          #+#    #+#             */
/*   Updated: 2024/03/02 16:42:37 by jihoolee         ###   ########.fr       */
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
	const char	*right_questions;
	const char	*id;

	right_questions = "195";
	id = "jihoonlee199";
	write(STDOUT_FILENO, right_questions, ft_strlen(right_questions));
	write(STDOUT_FILENO, "\n", 1);
	write(STDOUT_FILENO, id, ft_strlen(id));
	return (0);
}
