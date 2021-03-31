/*
** EPITECH PROJECT, 2021
** rts
** File description:
** ImageLoader
*/

#ifndef IMAGELOADER_HPP_
#define IMAGELOADER_HPP_

#include "formats.hpp"

class ImageLoader {
    public:

        static BMP loadBMPFromMem(const void *mem);

    protected:
    private:
};

#endif /* !IMAGELOADER_HPP_ */
