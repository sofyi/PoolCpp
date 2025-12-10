/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 18:43:28 by slamhaou          #+#    #+#             */
/*   Updated: 2025/12/08 18:43:32 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl client;

    client.compain("HALLO");   
    client.compain("DEBUG");
    client.compain("INFO");
    client.compain("WARNING");
    client.compain("ERROR");
}