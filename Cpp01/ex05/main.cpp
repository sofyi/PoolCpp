/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angel <angel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 11:37:12 by angel             #+#    #+#             */
/*   Updated: 2025/12/08 11:45:51 by angel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


int main()
{
    Harl client;
    
    client.compain("DEBUG");
    client.compain("INFO");
    client.compain("WARNING");
    client.compain("ERROR");
    client.compain("HALLO");   
}