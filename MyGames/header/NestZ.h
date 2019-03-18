#ifndef NESTZ_H
#define NESTZ_H
#include <SFML/Graphics.hpp>
#include <string>
using namespace std;
using namespace sf;

class Game{
    public:
        //initGameWindow
        Game();
        int windowWidth;
        int windowHeight;
        const string GameName = "MyGame";
        RenderWindow *gameWindow;
        Event sfEvent;

        void run();
        void initWindow();
        void update();
        void updateSfmlEvent();
        void render();

        //Menu
        Vector2i mousePosView;
        Vector2f mousePos;
        int menuCharacterSize;
        Font menuFont;
        Text play;
        Text setting;
        Text quit;

        void drawMenu();
        void getMousePos();
        void updateButton();

};

Game::Game(){
    menuCharacterSize = 24;
    windowWidth = 1200;
    windowHeight = 800;
    initWindow();
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

void Game::drawMenu(){
    menuFont.loadFromFile("font/8-BIT WONDER.TTF");

    play.setFont(menuFont);
    play.setString("PLAY");
    play.setCharacterSize(menuCharacterSize);
    play.setPosition(windowWidth/2.0,windowHeight/2.0);

    setting.setFont(menuFont);
    setting.setString("SETTING");
    setting.setCharacterSize(menuCharacterSize);
    setting.setFillColor(Color::White);

    quit.setFont(menuFont);
    quit.setString("QUIT");
    quit.setCharacterSize(menuCharacterSize);
    quit.setFillColor(Color::White);

    this->gameWindow->draw(play);
}

void Game::run(){
    while(this->gameWindow->isOpen()){
        update();
        render();
    }
}

void Game::update(){
    updateSfmlEvent();
    getMousePos();
    updateButton();
}

void Game::updateSfmlEvent(){
    while (this->gameWindow->pollEvent(sfEvent))
        {
            if (sfEvent.type == Event::Closed){
                this->gameWindow->close();
            }
        }
}

void Game::getMousePos(){
    mousePosView = Mouse::getPosition(*this->gameWindow);
    mousePos = this->gameWindow->mapPixelToCoords(mousePosView);
}

void Game::updateButton(){
    if(play.getGlobalBounds().contains(mousePos)){
        play.setFillColor(Color::Red);
    }
    else play.setFillColor(Color::White);
}
#endif // NESTZ_H
