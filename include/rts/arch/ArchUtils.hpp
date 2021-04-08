/*
** EPITECH PROJECT, 2021
** B-OOP-400-TLS-4-1-arcade-guillaume.mailhol
** File description:
** ArchUtils
*/

#ifndef ARCHUTILS_HPP_
#define ARCHUTILS_HPP_

#include "IEntity.hpp"

namespace rts {

class ArchUtils {
public:
    template <typename T>
    static T* get_entity_component(arcade::IEntity* ent)
    {
        T* component = nullptr;

        ent->forEach([&](arcade::component::IComponent& comp) {
            arcade::component::IComponent* obj = &comp;
            auto ccomp = dynamic_cast<T*>(obj);

            if (ccomp)
                component = ccomp;
        });
        return component;
    }

protected:
private:
};

}

#endif /* !ARCHUTILS_HPP_ */
