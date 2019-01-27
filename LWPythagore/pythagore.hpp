//
//  pythagore.hpp
//  Pythagore
//
//  Created by LEVASSEUR Wesley on 27/01/2019.
//  Copyright © 2019 LEVASSEUR Wesley. All rights reserved.
//

#ifndef pythagore_hpp
#define pythagore_hpp

#include <stdio.h>

class LW {
public:
    class Math {
    public:
        class Pythagore {
        public:
            static double cal_hypotenuse(double other_1, double other_2);
            static double cal_other(double hypothenuse, double other);
            static bool verify(double hypothenuse, double other_1, double other_2);
        };
    };
};

#endif /* pythagore_hpp */
