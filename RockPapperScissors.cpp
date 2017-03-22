#include <iostream>
#include <ctime>
#include <string.h>
using namespace std;
int main()
{   int p;
    cout << " Welcome to Rock-Paper-Scissors game! " <<endl;
    cout << "( press 1 --> to start work;)"<<endl;
    cin >> p;
    while(p==1)
          { int player;
            int PC;

            cout << "please enter 1 --> rock, or 2 --> scissors, or 3 --> paper.  "<<endl;
            cin >> player;

              srand(time(0));
              cout << "choice of computer --> " ;
              PC = (1+ rand()% 3);
              cout << PC <<endl ;

                      if (player!=1 && player!=3 && player!=2)
                      {
                          cout<< "Error\n";
                      }
                      else if (player == PC )
                      {
                          cout << "draw\n";
                      }

                      else if (player == 1 && PC == 2 )
                      {
                          cout << "Winner is player\n";
                      }

                      else if (player == 2 && PC == 3 )
                      {
                          cout << "Winner is player\n";
                      }
                      else if (player == 3 && PC == 1 )
                      {
                          cout << "Winner is player\n";
                      }
                      else
                      {
                          cout << "Winner is PC\n";
                      }
                      cout<<"( 1 --> to continue work; 0 --> to finish)"<<endl;
                          cin>>p;
            }
                       system("pause");
                          return 0;
        }
///////////////////////////////////////////////