#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main ()
{
/* g= guess j= random number b= number decleared or stored*/
int g;
srand ( time(0) );
int j;


g=rand() % 10 + 1;
cout<<"Guess any number in between 10 and 1"<<endl;
cin>>j;

    if (g==j) 
    { cout<<"your guess is correct!"<<endl;
}

    else if (g>j) /* bigger number - smaller no.*/
    {
     
   int b;
b=g-j;
    
    cout<<"You were off by  "<<b<<" . Sorry, you lose."<<endl;
    }
    
    else if(g<j)
    {
    int b;
    b=j-g;

    cout<<"You were off by   "<<b<<" . Sorry, you lose."<<endl;
     } 
     
     
     
        return 0;
        }
