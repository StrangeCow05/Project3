#include <iostream>
#include <random>
 
 void advance(int horseNum, int* horses);
 void printLane(int horseNum, int* horses);
 bool isWinner(int horseNum, int* horses);

int main(){
 
 int horses[] = {0,0,0,0,0};
 bool keepGoing = true;
 
 while (keepGoing){
  for (int i=0; i< 5 ;i++){
   advance(i, horses );
   isWinner(i, horses );
   printLane(i, horses );
  }//end for
 std::cout <<"Press Enter to Continue:";
 std::cin.ignore();
 }//end while

return 0;
}//end main

void advance(int horseNum, int* horses){
 for (int i = 0; i < 5; i++){
  std::random_device rd;
  std::uniform_int_distribution<int> dist(0,1);
  int coin = dist(rd);
  if (coin == 1){
   horses[i] += 1 ;
  } else {
   horses[i] += 0 ;

  }//end if
 }//end for
}//end advance

void printLane(int horseNum, int* horses){
 for (int i = 0; i < 5; i++){
  for (int j = 0; j < 14; i++){
   if (i == horses[i]){
    std::cout <<horses[i]<<std::endl;
   }else{
    std::cout <<"."<< std::endl;
   }//end if
  }//end for II
 }//end for I
}//end printlane

bool isWinner(int horseNum, int* horses){

}//end isWinner
