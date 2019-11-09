#include <iostream>

using namespace std;

enum suits {clubs,diamonds,hearts,spades};

const int jack = 11;
const int queen = 12;
const int king = 13;
const int ace = 14;

class card
{
private:
    int number;
    suits suit;
public:
    card(){}
    card(int n ,suits s): number(n),suit(s)
    {}
    void display();
    bool isEqual(card);
};

void card::display()
{
    if(number>=2&&number<=10)
        cout<<number<<"of";
    else
        switch(number)
        {
            case jack: cout<<"jack of";break;
            case queen: cout<<"Queen of"; break;
            case king: cout<<"king of";break;
            case ace: cout<<"Ace of";break;
        }
    switch(suit)
    {
        case clubs: cout<<"clubs";break;
        case diamonds: cout<<"Diamonds";break;
        case hearts: cout<<"Hearts";break;
        case spades: cout<<"Spades";break;
    }
}

bool card::isEqual(card c2)
{
    return(number == c2.number && suit == c2.suit)?true:false;
}

int main()
{
    card temp,choosen,prize;
    int position;

    card card1(7,clubs);
    cout<<"card 1 is the";
    card1.display();

    card card2(jack,hearts);
    cout<<"Card 2 is the";
    card2.display();

    card card3(ace,spades);
    cout<<"Card 3 is the";
    card3.display();

    prize = card3;

    cout<<"\nSwapping card 1 and card 3 ";
    temp = card3;
    card3 = card1;
    card1= temp;

    cout<<"\nSwapping card 2 and card 3";
    temp =  card2;
    card2 = card3;
    card3 = temp;

    cout<<"\nSwapping card 1 and card 2";
    temp = card1;
    card1 = card2;
    card2 = temp;

    cout<<"\nNow where (1,2 or 3) is the ";
    prize.display();
    cout<<"?";
    cin>>position;

    switch(position)
    {
        case 1: choosen = card1;break;
        case 2: choosen = card2;break;
        case 3: choosen = card3;break;
    }
    if(choosen.isEqual(prize))
        cout<<"Great That's Right You Win ! ";
    else
        cout<<"YOU LOST !";
    cout<<"You choose the ";
    choosen.display();
    cout<<endl;
    return 0;
}
