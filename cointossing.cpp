#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int flip(){
    return rand() % 2;
}
int main(){
   srand( time(0) );
   int tails = 0;
   int heads = 0;
   for( int i = 1; i <= 100; i++){
      if(flip() == 0){
         tails++;
      }
      else{
         heads++;
      }

   }
   cout << "No. of Tails: " << tails << endl;
   cout << "No. of Heads: " << heads << endl;
   return 0;
}
