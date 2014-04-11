#ifndef WORLD_HPP
#define WORLD_HPP

#include <memory>
#include <SFML/Graphics.hpp>
#include "Entity.hpp"
#include "Data.hpp"

class World
{
    public:
        typedef std::unique_ptr<Entity> entPtr;

    public:
        /**
        * @brief Default constructor
        */
        World();

        /**
        * @brief Updates the world and all its entities
        *
        * @param dt Time passed between 2 update ticks
        */
        void update(sf::Time dt);

        /**
        * @brief Draws the world and all entities
        *
        * @param target
        */
        void draw(sf::RenderTarget &target) const;

        /**
        * @brief Adds an entity at position x/y
        *
        * @param x X coordinate
        * @param y Y coordinate
        */
        void addEntity(std::string key, sf::Vector2f position, sf::Vector2f size, sf::Color fill, sf::Color outline);

        std::map<std::string, std::unique_ptr<Entity>>& getEntities();

    private:

        void createWorld();

    private:
        /**
        * @brief 
        */
        std::map<std::string, entPtr> mEntities;
};

#endif