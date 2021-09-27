/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   11720.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 14:58:47 by jihoolee          #+#    #+#             */
/*   Updated: 2021/09/27 14:58:48 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

using namespace std;

int	main(void)
{
	int		len;
	int		sum = 0;
	string	nums;

	cin >> len >> nums;
	for (int i = 0; i < len; i++)
		sum += nums[i] - '0';
	cout << sum;
	return (0);
}
