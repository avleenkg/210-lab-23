#include <iostream>
#include <fstream>
#include <iomanip>
#include <list>
#include "Goat.h"
using namespace std;

const int SZ_NAMES = 200, SZ_COLORS = 25, MAX_AGE = 20;

int select_goat(list<Goat> trip);
void delete_goat(list<Goat> &trip);
void add_goat(list<Goat> &trip, string [], string []);
void display_trip(list<Goat> trip);
int main_menu();

int main() {
    srand(time(0));
    bool again;

    // read & populate arrays for names and colors
    ifstream fin("names.txt");
    string names[SZ_NAMES];
    int i = 0;
    while (fin >> names[i++]);
    fin.close();
    ifstream fin1("colors.txt");
    string colors[SZ_COLORS];
    i = 0;
    while (fin1 >> colors[i++]);
    fin1.close();




    return 0;
}

int main_menu() {
    cout << "*** GOAT MANAGER 3001 ***\n";
    cout << "[1] Add a goat\n";
    cout << "[2] Delete a goat\n";
    cout << "[3] List goats\n";
    cout << "[4] Quit\n";
    cout << "Choice --> ";
    int choice;
    cin >> choice;
    while (choice > 4 or choice < 1){
        cout << "Please enter 1-4: ";
        cin >> choice;
    }
    return choice;
}

void add_goat(list<Goat> &trip, string names[], string colors[]) {
    string randname = names[rand() % SZ_NAMES];
    string randcolor = colors[rand() % SZ_COLORS];
    int randage = rand()% MAX_AGE;

    Goat newgoat(randname, randage, randcolor);
    trip.push_back(newgoat);
}

void display_trip(list<Goat> trip){
    if (trip.empty()) {
        cout << "Trip is empty.\n";
        return;
    }
    for (int i = 0; ) {
        cout << "[" << i
    } 
}


int select_goat(list<Goat> trip){

}

void delete_goat(list<Goat> &trip){

}
