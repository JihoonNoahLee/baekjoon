/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2751.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:09:51 by jihoolee          #+#    #+#             */
/*   Updated: 2021/11/24 15:24:49 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int	main(void)
{
	vector<int>	arr;
	int			arr_len;

	cin >> arr_len;
	arr.resize(arr_len);
	for (int i = 0; i < arr_len; i++)
		cin >> arr[i];
	sort(arr.begin(), arr.end());
	for (int i = 0; i < arr_len; i++)
		cout << arr[i] << "\n";
	return (0);
}
