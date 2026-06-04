#include <iostream>
using namespace std;

// enum --> enumerations
enum Level
{
    LOW,    // 0
    MEDIUM, // 1
    HARD    // 2
};

enum stages
{
    INITIAL = 25,
    LOADING = 30,
    LOADED = 45,
    ERROR = 23
};

enum DifficulyLevel
{
    Easy = 5,
    Medium, // 6
    Hard,   // 7
    Expert  // 8
};

enum Direction
{
    NORTH,
    EAST,
    SOUTH,
    WEST
};

int main()
{
    enum Level l = MEDIUM;
    cout << "Level: " << l << endl;

    enum stages st = LOADED;
    cout << st << endl;

    enum DifficulyLevel dl = Medium;
    cout << "Difficulty Level: " << dl << endl;

    enum Direction direction = SOUTH;
    switch (direction)
    {
    case 1:
        cout << "NORTH\n";
        break;

    case 2:
        cout << "EAST\n";
        break;

    case 3:
        cout << "SOUTH\n";
        break;

    case 4:
        cout << "WEST\n";
        break;

    default:
        cout << "Invalid\n";
    }

    return 0;
}