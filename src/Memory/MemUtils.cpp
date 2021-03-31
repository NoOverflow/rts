/*
** EPITECH PROJECT, 2021
** rts
** File description:
** MemUtils
*/

#include "Memory/MemUtils.hpp"

template<typename T>
T MemUtils::readMemory(const void *mem, int offset)
{
    T *ptr = dynamic_cast<T*>(mem + offset);

    return *ptr;
}
