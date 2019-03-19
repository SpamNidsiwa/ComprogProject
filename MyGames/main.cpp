#include "header/James.h"
#include "header/NestZ.h"
#include "header/Pound.h"
#include "header/Billy.h"
#include "header/Titi.h"
#include <ctime>
using namespace sf;

int main()
{

    srand(time(0));
    cout << action_phase(monster_phase(),player_phase(),0);

    Game game;

    game.run();

    return 0;
}
