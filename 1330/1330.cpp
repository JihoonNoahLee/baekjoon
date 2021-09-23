/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1330.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 23:56:16 by jihoolee          #+#    #+#             */
/*   Updated: 2021/09/23 23:56:37 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;

int main(void)
{
	int	a;
	int b;

	cin >> a >> b;
	if (a - b > 0)
		cout << ">";
	else if (a - b < 0)
		cout << "<";
	else
		cout << "==";
	return (0);
}
