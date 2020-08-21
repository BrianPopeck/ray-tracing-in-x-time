#pragma once

#include "vec3.h"

#include <iostream>

void write_color(std::ostream &out, color pixel_color) {
    // translate pixel values to [0, 255] and write components to line in out
    out << static_cast<int>(255.999 * pixel_color.x()) << ' '
        << static_cast<int>(255.999 * pixel_color.y()) << ' '
        << static_cast<int>(255.999 * pixel_color.z()) << '\n';
}