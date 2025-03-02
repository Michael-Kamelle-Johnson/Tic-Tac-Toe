#include "ttt.hpp"




void display_title(){

    std::cout << "=============\n";
    std::cout << "Tic-Tac-Toe!\n";
    std::cout << "=============\n";


}



void display_status(char *spaces){


    std::cout << "     |" << "     |" << std::endl;
    std::cout << "  " << spaces[0] << "  |" << "  " << spaces[1] << "  |  " << spaces[2] << std::endl;
    std::cout << "_____|" << "_____" << "|_____" << std::endl;
    std::cout << "     |" << "     " << "|    " << std::endl;
    std::cout << "  " << spaces[3] << "  |" << "  " << spaces[4] << "  " << "|  " << spaces[5] << std::endl;
    std::cout << "_____|" << "_____" << "|_____" << std::endl;
    std::cout << "     |" << "     |" << std::endl;
    std::cout << "  " << spaces[6] <<"  |  " << spaces[7] << "  |  " << spaces[8] << std::endl;
    std::cout << "     |" << "     " << "|    " << std::endl;

}


void playerturn(char *spaces, char playermark){

    int number;


    //do
    //{

        //std::cout << "You are: " << playermark << "!\n";

        //std::cout << "Please pick a number (1-9)";
        //std::cin >> number;
        //number--;


        //if (isdigit){
    
            //if (spaces[number] == ' '){
            //spaces[number] = playermark;
            //break;
        //}

        //} 
        //else {
            //std::cout << "NOT A NUMBER!!";
        //}


    //} while (!number > 0 || !number < 8);


    std::cout << "You are: " << playermark << "!\n";

    std::cout << "Please pick a number (1-9)\n";
    std::cin >> number;
    number--;

    while (std::cin.fail())
    {
        std::cout << "Please Try Again!\n";
        std::cout << "Please pick a number (1-9)\n";
        std::cin.clear();
        std::cin.ignore(256, '\n');
        std::cin >> number;
    }

    if (spaces[number] == ' '){
        spaces[number] = playermark;
    }



}

void cputurn(char *spaces, char cpumark){
    
    int number;
    srand(time(0));


    while (true)
    {
        number = rand() % 9;
        if (spaces[number] == ' '){

            spaces[number] = cpumark;
            break;

        }

    }
    



}


bool checkwin(char *spaces, char playermarker, char cpumarker){


    if ((spaces[0] != ' ') && (spaces[0] == spaces[1]) && (spaces[1] == spaces[2])){

        spaces[0] == playermarker ? std::cout << "YOU WIN!\n" : std::cout << "YOU LOSE!";

    }

    else if ((spaces[3] != ' ') && (spaces[3] == spaces[4]) && (spaces[4] == spaces[5])){

        spaces[3] == playermarker ? std::cout << "YOU WIN!\n" : std::cout << "YOU LOSE!\n";
    }

    else if ((spaces[6] != ' ') && (spaces[6] == spaces[7]) && (spaces[7] == spaces[8])){

        spaces[6] == playermarker ? std::cout << "YOU WIN!\n" : std::cout << "YOU LOSE!\n";

    }

    else if ((spaces[0] != ' ') && (spaces[0] == spaces[3]) && (spaces[3] == spaces[6])){

        spaces[0] == playermarker ? std::cout << "YOU WIN!\n" : std::cout << "YOU LOSE!\n";

    }

    else if ((spaces[1] != ' ') && (spaces[1] == spaces[4]) && (spaces[4] == spaces[7])){

        spaces[1] == playermarker ? std::cout << "YOU WIN!\n" : std::cout << "YOU LOSE!\n";

    }

    else if ((spaces[2] != ' ') && (spaces [2] == spaces[5]) && (spaces[5] == spaces[8])){

        spaces[2] == playermarker ? std::cout << "YOU WIN!\n" : std::cout << "YOU LOSE!\n";

    }

    else if ((spaces[0] != ' ') && (spaces [0] == spaces[4]) && (spaces[4] == spaces[8])){

        spaces[0] == playermarker ? std::cout << "YOU WIN!\n" : std::cout << "YOU LOSE!\n";

    }

    else if ((spaces[2] != ' ') && (spaces [2] == spaces[4] && spaces[4] == spaces[6])){

        spaces[2] == playermarker ? std::cout << "YOU WIN!\n" : std::cout << "YOU LOSE!\n";

    }
    else
    {
        return false;
    }

    return true;
    



}