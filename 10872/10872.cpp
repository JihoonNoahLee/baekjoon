/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10872.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 19:50:56 by jihoolee          #+#    #+#             */
/*   Updated: 2021/10/07 19:52:12 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;

int	factorial(int num)
{
	if (num == 0 || num == 1)
		return (1);
	return (num * factorial(num - 1));
}

int	main(void)
{
	int	num;

	cin >> num;
	cout << factorial(num);
	return (0);
}
