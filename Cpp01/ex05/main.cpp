/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 18:43:28 by slamhaou          #+#    #+#             */
/*   Updated: 2025/12/11 18:16:59 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl client;

    client.complain("HALLO");   
    client.complain("DEBUG");
    client.complain("INFO");
    client.complain("WARNING");
    client.complain("ERROR");
}
