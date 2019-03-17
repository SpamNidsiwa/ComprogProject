#ifndef NESTZ_H
#define NESTZ_H
#include <SFML/Graphics.hpp>
#include <string>
using namespace std;
using namespace sf;

class Game{
    public:
        Game();
        int windowWidth;
        int windowHeight;
        int menuCharacterSize;
        const string GameName = "MyGame";
        RenderWindow *gameWindow;
        Event sfEvent;
        Vector2f mousePos;

        void render();
        void mainMenu();
        void run();
        void update();
        void updateSfmlEvent();
        void updateMousePos();
        void updateButton();
        void initWindow();
};

Game::Game(){
    menuCharacterSize = 24;
    windowWidth = 1200;
    windowHeight = 800;
    this->initWindow();
}

void Game::initWindow(){
    this->gameWindow = new RenderWindow(VideoMode(this->windowWidth,this->windowHeight),this->GameName,Style::Close);
    this->gameWindow->setVerticalSyncEnabled(true);
}

void Game::render(){
        this->gameWindow->clear();
        mainMenu();
        this->gameWindow->display();
}

void Game::mainMenu(){
    Font menuFont;
    Text play;
    Text setting;
    Text quit;

    menuFont.loadFromFile("font/8-BIT WONDER.TTF");

    play.setFont(menuFont);
    play.setString("PLAY");
    play.setCharacterSize(menuCharacterSize);
    play.setFillColor(Color::White);
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
        this->update();
        this->render();
    }
}

void Game::update(){
    this->updateSfmlEvent();
}

void Game::updateSfmlEvent(){
    while (this->gameWindow->pollEvent(this->sfEvent))
        {
            if (this->sfEvent.type == Event::Closed){
                this->gameWindow->close();
            }
        }
}

void Game::updateMousePos(){
    //mousePos = Mouse::getPosition(*gameWindow);
}

void Game::updateButton(){
    /*if(play.getLocalBounds().contains(mousePos)){

    }*/
}
#endif // NESTZ_H
