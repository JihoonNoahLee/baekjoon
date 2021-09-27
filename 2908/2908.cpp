/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2908.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 14:32:19 by jihoolee          #+#    #+#             */
/*   Updated: 2021/09/27 14:32:29 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

using namespace std;

int	revert_num_str(string num_str)
{
	int	result = 0;

	for (int i = num_str.size() - 1; i >= 0; i--)
		result = result * 10 + (num_str[i] - '0');
	return (result);

}

int	main(void)
{
	string	a;
	string	b;
	int		a_rev;
	int		b_rev;

	cin >> a >> b;
	a_rev = revert_num_str(a);
	b_rev = revert_num_str(b);
	if (a_rev > b_rev)
		cout << a_rev;
	else
		cout << b_rev;
	return (0);
}
