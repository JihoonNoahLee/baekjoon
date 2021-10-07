/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10870.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 19:55:44 by jihoolee          #+#    #+#             */
/*   Updated: 2021/10/07 20:01:20 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;

int	fibonacci(int num)
{
	if (num == 0)
		return (0);
	else if (num == 1)
		return (1);
	else
		return (fibonacci(num - 1) + fibonacci(num - 2));
}

int	main(void)
{
	int	num;

	cin >> num;
	cout << fibonacci(num);
	return (0);
}
