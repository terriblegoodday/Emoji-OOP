//
//  utflib.cpp
//  Emoji
//
//  Created by Eduard Dzhumagaliev on 10/26/19.
//  Copyright © 2019 Eduard Dzhumagaliev. All rights reserved.
//

#include "utflib.hpp"

std::bitset<8> utflib::extractChar(unsigned char currentChar) {
    return std::bitset<8>(currentChar);
}
