//
//  utflib.hpp
//  Emoji
//
//  Created by Eduard Dzhumagaliev on 10/26/19.
//  Copyright © 2019 Eduard Dzhumagaliev. All rights reserved.
//

#ifndef utflib_hpp
#define utflib_hpp

#include <stdio.h>
#include <iostream>

using namespace std;

namespace utflib {
    std::bitset<8> extractChar(unsigned char currentChar);
};

#endif /* utflib_hpp */
