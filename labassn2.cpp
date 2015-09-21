#include <cstdlib>
#include <ctime>


int main( ) {
  char ans;
  bool done = false;
  while ( ! done ) {
         playGame();   // YOU MUST WRITE THIS FUNCTION
         cout << " Play again (y/n) ? ";
         cin >> ans;
         if ( ans == 'y' || ans == 'Y') done = true;
             else done = false;
  }
  return 0;
}

int dice()
rand() %6+1 //single die

int roll()
roll=dice()+dice()

srand(10);


