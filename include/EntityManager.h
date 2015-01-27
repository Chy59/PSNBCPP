#ifndef ENTITYMANAGER_H
#define ENTITYMANAGER_H

#include <Entity.h>
#include <SFML/Graphics.hpp>
#include <iostream>

using namespace sf;
using namespace std;

class EntityManager
{
    public:
        EntityManager();
        void addEntity(Entity* entity);
        void beforeDraw(Time frameTime);
        void draw(RenderWindow& window);
        void afterDraw();
    protected:
    private:
        vector<Entity*> m_entities;
};

#endif // ENTITYMANAGER_H
