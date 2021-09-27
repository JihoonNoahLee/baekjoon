/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   15596.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 15:02:49 by jihoolee          #+#    #+#             */
/*   Updated: 2021/09/27 15:02:49 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>

using namespace std;

long long	sum(vector<int> &a)
{
	long long	sum = 0;

	for (int i = 0; i < a.size(); i++)
		sum += a[i];
	return (sum);
}
