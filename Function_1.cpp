#include <iostream>
#include <cstdlib>
using namespace std;

string coinFlip();

int main() {
   // Add more variables as needed
   int flips;
srand(time(0))  ;// Unique seed
cout << "How many times do i flip a coin?:";
cin >> flips;
cout << endl;
   /* Type your code here */
for(int i = 1; i <= flips; i++){
   cout << coinFlip()+" " ;
}
cout << endl << "Done!" << endl;
   return 0;
}
string coinFlip(){
   if ( (rand()%2) == 1 )
   return "heads";
   else
   return "tails";
}
