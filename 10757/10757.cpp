/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10757.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 15:53:02 by jihoolee          #+#    #+#             */
/*   Updated: 2021/09/29 17:10:39 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

using namespace std;

int	bring_last_digit(string *num_str)
{
	int	last_digit;

	if ((*num_str).size() == 0)
		return (0);
	last_digit = (*num_str).back() - '0';
	(*num_str).pop_back();
	return (last_digit);
}

int	main(void)
{
	string	A, B;
	string result;
	int		carry = 0;
	int		a, b, sum;

	cin >> A >> B;
	result.resize(max(A.size(), B.size()) + 1);
	for (int i = 0; i < result.size(); i++)
	{
		a = bring_last_digit(&A);
		b = bring_last_digit(&B);
		sum = carry + a + b;
		result[result.size() - 1 - i] = '0' + sum % 10;
		carry = sum / 10;
	}
	if (result[0] == '0')
		result.erase(0, 1);
	cout << result;
	return (0);
}
