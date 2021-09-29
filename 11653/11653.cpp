/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   11653.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 23:53:50 by jihoolee          #+#    #+#             */
/*   Updated: 2021/09/29 23:58:01 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;

int	main(void)
{
	int	num;
	int	div = 2;

	cin >> num;
	while (num > 1)
	{
		if (num % div == 0)
		{
			cout << div << endl;
			num /= div;
		}
		else
			div++;
	}
	return (0);
}
