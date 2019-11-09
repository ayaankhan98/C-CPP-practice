#include <iostream>

using namespace std;

struct Distance
{
    int feet;
    float inches;
};

struct room
{
    Distance length;  // DECLARATION OF VARIABLE OF DISTANCE TYPE STRUCTURE NESTING
    Distance Width;   // STRUCTURE NESTING
};

int main()
{
    room dinning;
    dinning.length.feet = 12;   // ACCESSING NESTED STRUCTURE MEMBER USING DOT OPERATOR TWO TIMES
    dinning.length.inches = 5.7;   // SAME AS ABOVE

    dinning.Width.feet = 14;
    dinning.Width.inches = 8.9;

    float l = dinning.length.feet + dinning.length.inches/12;  // CONVERTING LENGHT INTO FEET
    float w = dinning.Width.feet + dinning.Width.inches/12; // CONVERTING WIDTH INTO FEET

    float area = l*w;   // AREA CALCULATION

    cout<<"Area of Dinning Room is " <<area;
}
