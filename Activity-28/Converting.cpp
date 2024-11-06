//
//  Converting.cpp
//  Activity-28
//
//  Created by Juwon Hong on 11/6/24.
//

#include "Converting.h"
#include <sstream>
#include <iomanip>

string doubleToString(double number) {
    stringstream stream;
    stream << fixed << setprecision(1) << number;
    return stream.str();
}
