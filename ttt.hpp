#include <iostream>
#include <string>
#include <vector>
#include <ctime>




void display_title();

void display_status(char *spaces);

void playerturn(char *spaces, char playermark);

void cputurn(char *spaces, char cpumark);

bool checkwin(char *spaces, char playermarker, char cpumarker);