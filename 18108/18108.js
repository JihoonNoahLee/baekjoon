/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   18108.js                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/28 20:57:45 by jihoolee          #+#    #+#             */
/*   Updated: 2026/11/28 21:06:57 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

const bulgi_to_seogi = (num) => num - 543;

function main() {
  const fs = require("fs")
  const input = fs.readFileSync("/dev/stdin").toString().trim();

  console.log(bulgi_to_seogi(input))
}

main();
