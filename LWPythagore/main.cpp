//
//  main.cpp
//  Pythagore
//
//  Created by LEVASSEUR Wesley on 27/01/2019.
//  Copyright © 2019 LEVASSEUR Wesley. All rights reserved.
//

#include <iostream>
#include "pythagore.cpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    double AC = 9, BC=13;
    double AB = LW::Math::Pythagore::cal_hypotenuse(AC, BC);
    std::cout << "Dans le triangle ABC, rectancle en C d'après le théorème de Pythagore on a :\n"
    << "[AB² = AC² + BC²]: sachant que AC=" << AC << " et BC=" << BC << " donc AB= " << AB
    << std::endl;
    std::cout << "[AC² = AB² - BC²]: sachant que AB=" << AB << " et BC="  << BC
    << " donc AC=" << LW::Math::Pythagore::cal_other(AB, BC)
    << std::endl;
    std::cout << "[BC² = AB² - AC²]: sachant que AB=" << AB << " et AC="  << AC
    << " donc AC=" << LW::Math::Pythagore::cal_other(AB, AC)
    << std::endl;
    std::cout << "[AB² = AC² + BC²]: sachant que AB=" << AB << ", AC=" << AC << " et BC=" << BC
    << " est " << (LW::Math::Pythagore::verify(AB, AC, BC) ? "VRAI" : "FAUX")
    << std::endl;
    
    
    std::cout << "\n\n" << std::endl;
    AC = 24; BC = 32; AB = LW::Math::Pythagore::cal_hypotenuse(AC, BC);
    std::cout << "Dans le triangle ABC, rectancle en C d'après le théorème de Pythagore on a :\n"
    << "[AB² = AC² + BC²]: sachant que AC=" << AC << " et BC=" << BC << " donc AB= " << AB
    << std::endl;
    std::cout << "[AC² = AB² - BC²]: sachant que AB=" << AB << " et BC="  << BC
    << " donc AC=" << LW::Math::Pythagore::cal_other(AB, BC)
    << std::endl;
    std::cout << "[BC² = AB² - AC²]: sachant que AB=" << AB << " et AC="  << AC
    << " donc AC=" << LW::Math::Pythagore::cal_other(AB, AC)
    << std::endl;
    std::cout << "[AB² = AC² + BC²]: sachant que AB=" << AB << ", AC=" << AC << " et BC=" << BC
    << " est " << (LW::Math::Pythagore::verify(AB, AC, BC) ? "VRAI" : "FAUX")
    << std::endl;
    std::cout << "\n\n" << std::endl;
    
    AC = 4; BC=36; AB = 12;
    std::cout << "[AB² = AC² + BC²]: sachant que AB=" << AB << ", AC=" << AC << " et BC=" << BC
    << " est " << (LW::Math::Pythagore::verify(AB, AC, BC) ? "VRAI" : "FAUX")
    << std::endl;
    //LW::Math::Pythagore::cal
    
    
    std::cout << "\n\n" << std::endl;
    return 0;
}