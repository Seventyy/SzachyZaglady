#include "GameController.h"

void GameController::execute_turn(bool _player)
{
    /*
    Exaple:

    Choose a piece: \input\
    \pokazuje szachownicê z mo¿liwymi ruchami\
    Choose location: \input\ (ewentualnie cancel)
    */
    //map.print(map.calculate_possible(Vector(6, 7)));
    Map map;
    Input input;
    Vector player_input;

    map.clear();
    map.build();

    while (true)
    {

        map.print(new Vector());
        std::cout << "Choose a piece: ";
        player_input = input.fetchInput();
        system("cls");
        map.select(player_input); // TUTAJ NIE DOPUŒIÆ DO WYBRANIA PUSTEGO POLA
        map.print(map.calculate_possible());

        std::cout << "Choose location :";
        player_input = input.fetchInput();
        system("cls");
        map.move(player_input);


    }

}