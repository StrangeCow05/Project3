#include <iostream>
#include <random>
 
 void advance(int horseNum, int* horses);
 void printLane(int horseNum, int* horses);
 bool isWinner(int horseNum, int* horses);

int main(){ 
 bool keepGoing = true;
 int horses[] = {0,0,0,0,0};
 while(keepGoing){
  for (int i=0; i< 5 ;i++){
   if(isWinner(i, horses) ){
    keepGoing = false;
   }else{
    keepGoing = true;
   }
   printLane(i,horses);
   advance(i, horses);
  }//end for
 
 std::cout <<"Press Enter to Continue:";
 std::cin.ignore();
 }//end while
 

return 0;
}//end main

void advance(int horseNum, int* horses){
  std::random_device rd;
  std::uniform_int_distribution<int> dist(0,1);
  int coin = dist(rd);
  if (coin == 1){
   horses[horseNum]++ ;
  }//end if
 
}//end advance


void printLane(int horseNum, int* horses){
 for (int y = 0; y < 14; y++){
   if (y == horses[horseNum]){
    std::cout <<horseNum ;
   }else{
    std::cout <<"." ;
   }//end if
 }//end for
 std::cout<<"K"<<std::endl; 
}//end printlane

bool isWinner(int horseNum, int* horses){
  if (horses[horseNum] <= 14){
   return false;
  }else {
   return true;
  }//end if
 
 
}//end isWinner
