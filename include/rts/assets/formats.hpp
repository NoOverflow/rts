/*
** EPITECH PROJECT, 2021
** rts
** File description:
** ImageFormats
*/

#ifndef IMAGEFORMATS_HPP_
#define IMAGEFORMATS_HPP_

#include <cstdint>
#include <vector>

namespace rts {

struct Color {
    std::uint8_t b;
    std::uint8_t g;
    std::uint8_t r;
    std::uint8_t a;
};

struct BMP {
    unsigned int width;
    unsigned int height;
    std::vector<Color> pixels;
};

}

#endif /* !IMAGEFORMATS_HPP_ */
