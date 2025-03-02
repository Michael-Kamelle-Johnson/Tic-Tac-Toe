#include <iostream>
#include "ttt.hpp"
using namespace std;


char spaces[9] = {' ',' ',' ',' ',' ',' ', ' ', ' ', ' '};

char player_marker = 'X';
char cpu_marker = 'O';


bool is_game = true;


int main(){
    
    
    
display_title();

do
{    
    
    display_status(spaces);
    playerturn(spaces, player_marker);
    display_status(spaces);

    cputurn(spaces, cpu_marker);
    display_status(spaces);  
    
    if (checkwin(spaces, player_marker, cpu_marker)){
        is_game = false;
        break;
    }

} while (is_game);

std::cout << "GAME OVER!!";


}