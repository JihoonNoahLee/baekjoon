/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10699.js                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 16:32:31 by jihoolee          #+#    #+#             */
/*   Updated: 2024/03/02 16:33:20 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

let today = new Date();

let year = today.getFullYear();
let month = String(today.getMonth() + 1).padStart(2, '0');
let day = String(today.getDate()).padStart(2, '0');

console.log(`${year}-${month}-${day}`);
