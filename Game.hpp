#ifndef GAME_HPP
#define GAME_HPP

#include <SFML/Graphics.hpp>
#include "World.hpp"
#include "Data.hpp"
#include "Player.hpp"

class Game
{
    private:
        /**
        * @brief Updates the game
        *
        * @param dt Time passed between 2 update ticks
        */
        void update(sf::Time dt);

        /**
        * @brief Process events (user input, closing, etc.)
        */
        void processInput();
        
        /**
        * @brief React to player input (keyboard only right now)
        *
        * @param key The pressed key
        * @param isPressed Pressed or released
        */
        void handlePlayerInput(sf::Keyboard::Key key, bool isPressed);

    public:
        /**
        * @brief Default constructor
        */
        Game();

        /**
        * @brief Entry point for the game to run
        */
        void run();

        /**
        * @brief Renders all the elements on the screen
        */
        void render();

    private:
        /**
        * @brief The SFML window
        */
        sf::RenderWindow mWindow;

        /**
        * @brief The World which contains our entities
        */
        World mWorld;

        /**
        * @brief 
        */
        Player mPlayer;

    public:
        /**
        * @brief Defines how many updates per second are made
        */
        static const sf::Time TimePerFrame;
};

#endif
