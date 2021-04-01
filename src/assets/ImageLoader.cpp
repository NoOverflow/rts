/*
** EPITECH PROJECT, 2021
** rts
** File description:
** ImageLoader
*/

#include <algorithm>
#include "rts/memory/MemUtils.hpp"
#include "rts/assets/ImageLoader.hpp"

namespace rts
{

BMP ImageLoader::loadBMPFromMem(const void *mem)
{
    BMP ret;
    unsigned int data_offset =
        MemUtils::readMemory<unsigned int>(mem, 0x0A);
    const Color *pixels = static_cast<Color*>((void*)((char*)mem + data_offset));

    ret.width = MemUtils::readMemory<unsigned int>(mem, 0x12);
    ret.height = MemUtils::readMemory<unsigned int>(mem, 0x16);
    ret.pixels = std::vector<Color>(pixels, pixels + (ret.width * ret.height));
    std::reverse(ret.pixels.begin(), ret.pixels.end());
    for (unsigned int y = 0; y < ret.height; y++) {
        std::reverse(ret.pixels.begin() + (y * ret.width),
            ret.pixels.begin() + ((y + 1) * ret.width));
    }
    return ret;
}

}
