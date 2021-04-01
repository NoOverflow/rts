/*
** EPITECH PROJECT, 2021
** rts
** File description:
** MemUtils
*/

#ifndef MEMUTILS_HPP_
#define MEMUTILS_HPP_

namespace rts {

class MemUtils {
    public:

        template<typename T>
        static T readMemory(const void *mem, int offset)
        {
            T *ptr = (T*)((char*)mem + offset);

            return *ptr;
        }

    protected:
    private:
};

}

#endif /* !MEMUTILS_HPP_ */
