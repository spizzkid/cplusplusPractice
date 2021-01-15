// Jiacheng Jiang, CS 132, Winter 2021
// Programming Assignment #2, 1/14/21
//
// This program set players info and print out those info



#include <iostream>
#include <string>


using namespace std;

struct PlayerInfo
{
    string name;
    int jerseyNum;
    int goalNum;
  
    void setAll(string, int, int);

};

void getInfo(PlayerInfo(x[]));
int getGoals(PlayerInfo(x[]));




int main()
{
    
    PlayerInfo realMadrid[5];

    realMadrid[0].setAll("Pele", 5, 16);
    realMadrid[1].setAll("Lionel", 53, 14);
    realMadrid[2].setAll("Diego", 25, 25);
    realMadrid[3].setAll("Johan", 12, 2);
    realMadrid[4].setAll("Zinedine", 88, 32);

    getInfo(realMadrid);
    
    int goals = 0;
    goals = getGoals(realMadrid);

    cout << "The number of goals for the team is: " << goals << endl;

   

    
}

// set players info
void PlayerInfo::setAll(string Name, int jersey, int goal)
{
    name = Name;
    jerseyNum = jersey;
    goalNum = goal;

}

// get info
void getInfo(PlayerInfo(x[]))
{
    for (int i = 0; i < 5; i++)
    {
        cout << "Player Name: " << x[i].name << endl;
        cout << "Number: " << x[i].jerseyNum << endl;
        cout << "Number of goals this reason: " << x[i].goalNum << endl;
    }
}
// get total number of goal
int getGoals(PlayerInfo(x[]))
{   
    int goal = 0;
    for(int i = 0; i < 5; i++)
    {
        goal += x[i].goalNum;
    }
    return goal;
}


