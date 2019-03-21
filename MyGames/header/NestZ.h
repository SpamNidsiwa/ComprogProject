#ifndef NESTZ_H
#define NESTZ_H
#include <SFML/Graphics.hpp>
#include <string>
#include <iostream>
using namespace std;
using namespace sf;

class Game{
    public:
        //GameWindow
        //Variables
        int windowWidth;
        int windowHeight;
        const string GameName = "MyGame";
        RenderWindow *gameWindow;
        Event sfEvent;

        //Functions
        Game();
        void run();
        void initWindow();
        void initVariable();
        void update();
        void updateSfmlEvent();
        void render();

        //Menu
        //Variables
        Vector2i mousePosView;
        Vector2f mousePos;
        int menuCharacterSize;
        Font menuFont;
        Text menuButton[3];
        Texture menuBGTexture;
        Sprite menuBGSprite;

        //Functions
        double getButtonWidth(Text);
        double getButtonHeight(Text);
        void checkMouseClick(int);
        void setButton(Text &, int);
        void drawMenu();
        void updateMousePos();
        void updateButton();
};

Game::Game(){
    initVariable();
    initWindow();
}

void Game::initVariable(){
    //Menu
    menuCharacterSize = 45;
    menuFont.loadFromFile("font/8-BIT WONDER.TTF");
    //background.create(windowWidth,windowHeight);
    menuBGTexture.loadFromFile("img/bg.jpg");
    menuBGSprite.setTexture(menuBGTexture);
    //Window
    gameWindow = NULL;
    windowWidth = 1280;
    windowHeight = 720;
}

void Game::initWindow(){
    gameWindow = new RenderWindow(VideoMode(windowWidth,windowHeight),GameName,Style::Close);
    this->gameWindow->setVerticalSyncEnabled(true);
}

void Game::render(){
        this->gameWindow->clear();
        drawMenu();
        this->gameWindow->display();
}

void Game::run(){
    while(this->gameWindow->isOpen()){
        update();
        render();
    }
}

void Game::update(){
    //Window
    updateSfmlEvent();
    //Menu
    updateMousePos();
}

void Game::updateSfmlEvent(){
    while (this->gameWindow->pollEvent(sfEvent))
        {
            if (sfEvent.type == Event::Closed){
                this->gameWindow->close();
            }
        }
}

void Game::drawMenu(){
    updateButton();

    menuButton[0].setString("PLAY");
    setButton(menuButton[0],0);

    menuButton[1].setString("SETTING");
    setButton(menuButton[1],1);

    menuButton[2].setString("QUIT");
    setButton(menuButton[2],2);

    this->gameWindow->draw(menuBGSprite);
    for(int i = 0;i < 3;i++){
        this->gameWindow->draw(menuButton[i]);
    }
}

double Game::getButtonWidth(Text button){
    return button.getGlobalBounds().width;
}

double Game::getButtonHeight(Text button){
    return button.getGlobalBounds().height;
}

void Game::setButton(Text &button, int index){
    button.setFont(menuFont);
    button.setOutlineColor(Color::White);
    button.setOutlineThickness(4);
    button.setLetterSpacing(1.5);
    button.setCharacterSize(menuCharacterSize);
    button.setOrigin(getButtonWidth(button)/2.0,getButtonHeight(button)/2.0);
    button.setPosition(windowWidth/2.0,(windowHeight/2.0 + index*90) + 25);
}

void Game::updateMousePos(){
    mousePosView = Mouse::getPosition(*this->gameWindow);
    mousePos = this->gameWindow->mapPixelToCoords(mousePosView);
}

void Game::updateButton(){
    for(int i = 0;i < 3;i++){
        if(menuButton[i].getGlobalBounds().contains(mousePos)){
            menuButton[i].setFillColor(Color::Red);
            checkMouseClick(i);
        }
        else menuButton[i].setFillColor(Color::Black);
    }
}

void Game::checkMouseClick(int index){
    if(Mouse::isButtonPressed(Mouse::Left)){
        cout << index;
    }
}
#endif // NESTZ_H
