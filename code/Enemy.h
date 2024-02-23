#ifndef ENEMY_H
#define ENEMY_H

#include<SFML/Graphics.hpp>
#include<SFML/System.hpp>

class Enemy
{
private:
    unsigned int pointCount;
    sf::CircleShape shape;
    int type;
    float speed;
    int hp;
    int hpMax;
    int damage;
    int points;

    void initVariables();
    void initShape();

public:
    Enemy(float pos_x, float pos_y);
    ~Enemy();

    //accessors
    const sf::FloatRect getBounds() const;
    const int& getPoints() const;
    const int& getDamage() const;
    
    //functions
    void update();
    void render(sf::RenderTarget* target);
};

#endif