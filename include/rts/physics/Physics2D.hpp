/*
** EPITECH PROJECT, 2021
** B-OOP-400-TLS-4-1-arcade-guillaume.mailhol
** File description:
** Physics2D
*/

#ifndef PHYSICS2D_HPP_
#define PHYSICS2D_HPP_

namespace rts {
class Physics2D {
public:
    static bool IsInBounds(float x1, float y1, float w1, float h1,
        float x2, float y2, float w2, float h2);

protected:
private:
};
}

#endif /* !PHYSICS2D_HPP_ */
