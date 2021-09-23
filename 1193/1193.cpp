/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1193.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 23:53:57 by jihoolee          #+#    #+#             */
/*   Updated: 2021/09/23 23:54:14 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;

int	main(void)
{
	int	num;
	int	diag = 1;

	cin >> num;
	while (num > diag)
	{
		num -= diag;
		diag++;
	}
	if (diag % 2 == 0)
		cout << num << '/' << diag + 1 - num;
	else
		cout << diag + 1 - num << '/' << num;
	return (0);
}
