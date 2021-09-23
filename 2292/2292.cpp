/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2292.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 00:00:05 by jihoolee          #+#    #+#             */
/*   Updated: 2021/09/24 00:00:07 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;

int	main(void)
{
	int	dst;
	int	steps = 0;

	cin >> dst;
	for (steps = 0; dst - 6 * steps > 1; steps++)
		dst -= 6 * steps;
	cout << steps + 1;
	return (0);
}
