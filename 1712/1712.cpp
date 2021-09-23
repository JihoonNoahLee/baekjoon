/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1712.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 23:58:54 by jihoolee          #+#    #+#             */
/*   Updated: 2021/09/23 23:59:09 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;

int	main(void)
{
	int	A, B, C;
	int	break_even_point;

	cin >> A >> B >> C;
	if (C - B <= 0)
		break_even_point = -1;
	else
		break_even_point = A / (C - B) + 1;
	cout << break_even_point;
	return (0);
}
