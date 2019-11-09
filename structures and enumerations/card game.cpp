#include <iostream>

using namespace std;

const int jack = 11;
const int queen = 12;
const int king = 13;
const int ace = 14;
const int clubs = 0;
const int diamonds = 1;
const int hearts = 2;
const int spades = 3;

struct card
{
    int number;
    int suit;
};

int main()
{
    card temp , prize , choosen, card1, card2, card3;
    int position;

    card1 = {7,clubs};
    cout<<"Card 1 is the 7 of club\n" ;

    card2 = {jack , hearts};
    cout<<"card 2 is jack of hearts\n" ;

    card3 = {ace, spades};
    cout<<"card 3 is ace of spades\n";

    prize = card3;

    cout<<"Swapping card 1 and card 3"<<endl;
    // SWAPING CARD 1 AND 3
    temp = card1;
    card1 = card3;
    card3 = temp;

    // SWAPING CARD 2 AND 3
    cout<<"swapping card 2 and card 3"<<endl;
    temp = card2;
    card2 = card3;
    card3 = temp;

    // SWAPING CARD 1 AND 2
    cout<<"swapping card 1 and card 2"<<endl;
    temp = card1;
    card1 = card2;
    card2 = temp;

    cout<<"Choose the position : ";
    cin>>position;

    switch(position)
    {
        case 1: choosen = card1;
                break;
        case 2: choosen = card2;
                break;
        case 3: choosen = card3;
                break;
    }
    if(choosen.number == prize.number && choosen.suit == prize.suit)
        cout<<"Great You Win ! ";
    else
        cout<<"Sorry ! YOU LOST !";
    return 0;

}
