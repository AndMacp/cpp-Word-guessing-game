#include <iostream>
#include <cstring>
#include <cstdlib>
#include <ctime>
#include <conio.h>
using namespace std;

int main()
{
    time_t t;
    srand((unsigned)time(&t));
    cout << "Word guessing game" << endl;
    string s1[20]={"Riga","Madona","Liepaja","Jurmala","Ventspils","Aizkraukle","Bauska","Rezekne","Daugavpils","Kuldiga","Saulkrasti","Carnikava","Ogre","Salaspils","Tukums","Talsi","Ludza","Pavilosta","Koknese","Plavinas"};
    char again;
    do
    {
        string s2;
        s2=s1[rand()%20];
        char x;
        int points=0;
        char guess[s2.length()+1];
        for (size_t i=0; i<s2.length() ;i++)
        {
            guess[i]='.';	
        }
        guess[s2.length()]='\0';

        cout << "To guess the word, enter a letter: ";

        for (int i=0; points<10 && guess!=s2 && x!='0'; i++)
        {	
            x=getch();
            if (s2.find(x)==string::npos)	
            {
                points++;	
            }
            if (s2.find(x)!=string::npos)
            {
                if (s2[0]==x)
                {
                    guess[0]=x;	
                }	
                if (s2[1]==x)
                {
                    guess[1]=x;	
                }
                if (s2[2]==x)
                {
                    guess[2]=x;	
                }
                if (s2[3]==x)
                {
                    guess[3]=x;	
                }
                if (s2[4]==x)
                {
                    guess[4]=x;	
                }
                if (s2[5]==x)
                {
                    guess[5]=x;	
                }
                if (s2[6]==x)
                {
                    guess[6]=x;	
                }
                if (s2[7]==x)
                {
                    guess[7]=x;	
                }
                if (s2[8]==x)
                {
                    guess[8]=x;	
                }
                if (s2[9]==x)
                {
                    guess[9]=x;	
                }	
            }
            cout << guess << endl;	
        }
        if (points>5)
        {
            points=points-5;	
        }
        cout << "Do you want to play again? Y/N:  ";
        cin >> again;
    }
    while (again=='y' || again=='Y');

    system ("pause");
    return 0;
}

