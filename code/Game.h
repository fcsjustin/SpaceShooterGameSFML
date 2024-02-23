#ifndef GAME_H
#define GAME_H

#include <map>
#include <string>
#include <sstream>
#include "Player.h"
#include "Bullet.h"
#include "Enemy.h"

class Game
{
private:
    //window
    sf::RenderWindow* window;

    //resources
    std::map<std::string, sf::Texture*> textures;
    std::vector<Bullet*> bullets;

    // gui
    sf::Font font;
    sf::Text pointText;

    sf::Text gameOverText;

    //world
    sf::Texture worldBackgroundTex;
    sf::Sprite worldBackground;

    //systems
    unsigned points;


    //player
    Player* player;

    //player gui
    sf::RectangleShape playerHpBar;
    sf::RectangleShape playerHpBarBack;

    //enemies
    float spawnTimer;
    float spawnTimerMax;
    std::vector<Enemy*> enemies;



    //private functions
    void initWindow();
    void initTextures();
    void initGUI();
    void initWorld();
    void initSystems();

    void initPlayer();
    void initEnemies();


public:
    // constructors/destructors
    Game();
    virtual ~Game();

    //functions
    void run();


    void updatePollEvents();
    void updateInput();
    void updateGUI();
    void updateWorld();
    void updateCollison();
    void updateBullets();
    void updateEnemies();
    void updateCombat();
    void update(); 

    void renderGUI();
    void renderWorld();
    void render();

};
#endif