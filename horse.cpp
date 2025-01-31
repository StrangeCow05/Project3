#include <iostream>
#include <random>
 
 void advance(int horseNum, int* horses);
 void printLane(int horseNum, int* horses);
 bool isWinner(int horseNum, int* horses);

int main(){

 std::random_device rd;
 std::uniform_int_distribution<int> dist(0,1);
 int coin = dist(rd);
 
 int horses[] = {0,0,0,0,0};
 bool keepGoing = true;
 
 while (keepGoing){
  for (int i=0; i<horses.length();i++){
   advance();
   isWinner();
   printLane();
  }//end for
 std::cout <<"Press Enter to Continue:";
 std::cin.ignore();
 }//end while

return 0;
}//end main


