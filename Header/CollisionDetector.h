//
// Created by tudor on 15/03/2023.
//

#ifndef JUMPER_COLLISIONDETECTOR_H
#define JUMPER_COLLISIONDETECTOR_H


#include "Entity.h"

class CollisionDetector {
    public:
        CollisionDetector() = default;

        // Verifica se ci sono collisioni tra l'entità A e l'entità B
        bool detectCollision(const Entity& entityA, const Entity& entityB) const {
            // Calcola la distanza tra i centri delle due entità
            float distance = sqrt(pow(entityB.getPosition().x - entityA.getPosition().x, 2)
                                  + pow(entityB.getPosition().y - entityA.getPosition().y, 2));

            // Somma dei raggi delle due entità
            float sumOfRadii = entityA.getRadius() + entityB.getRadius();

            // Verifica se la distanza è minore o uguale alla somma dei raggi
            if (distance <= sumOfRadii) {
                return true; // collisione rilevata
            }

            return false; // nessuna collisione rilevata
        }

        // Verifica se ci sono collisioni tra l'entità A e altre entità presenti nella mappa
        bool detectCollisionsWithMap(const Entity& entityA, const std::vector<Entity>& entitiesInMap) const {
            for (const Entity& entityB : entitiesInMap) {
                if (detectCollision(entityA, entityB)) {
                    return true; // collisione rilevata
                }
            }

            return false; // nessuna collisione rilevata
        }
};


#endif //JUMPER_COLLISIONDETECTOR_H
