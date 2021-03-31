/*
** EPITECH PROJECT, 2021
** rts
** File description:
** ImageLoader
*/

#include "Memory/MemUtils.hpp"
#include "Assets/ImageLoader.hpp"

BMP ImageLoader::loadBMPFromMem(const void *mem)
{
    BMP ret;
    unsigned int data_offset =
        MemUtils::readMemory<unsigned int>(mem, 0x0A);
    const Color *pixels = static_cast<const Color*>(mem);

    ret.width = MemUtils::readMemory<unsigned int>(mem, 0x12);
    ret.height = MemUtils::readMemory<unsigned int>(mem, 0x14);
    ret.pixels = std::vector<Color>(pixels, pixels + (ret.width * ret.height));
    return ret;
}
