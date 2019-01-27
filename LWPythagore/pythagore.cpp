//
//  pythagore.cpp
//  Pythagore
//
//  Created by LEVASSEUR Wesley on 27/01/2019.
//  Copyright © 2019 LEVASSEUR Wesley. All rights reserved.
//

#include "pythagore.hpp"
#include <math.h>

double LW::Math::Pythagore::cal_hypotenuse(double other_1, double other_2) {
    return sqrt(pow(other_1, 2.0) + pow(other_2, 2.0));
}

double LW::Math::Pythagore::cal_other(double hypothenuse, double other) {
    return sqrt(pow(hypothenuse, 2.0) - pow(other, 2.0));
}

bool LW::Math::Pythagore::verify(double hypothenuse, double other_1, double other_2) {
    return (pow(hypothenuse, 2.0) == pow(other_1, 2.0)+pow(other_2, 2.0));
}
