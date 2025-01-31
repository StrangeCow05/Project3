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
   if (isWinner (i, horses)){
    keepGoing == false;
   }else {
    keepGoing == true;
   }//end if
   printLane(i,horses);
   advance(i, horses);
  }//end for
 
 std::cout <<"Press Enter to Continue:";
 std::cin.ignore();
 std::cout <<horses[1] <<std::endl;
 }//end while
 

return 0;
}//end main

void advance(int horseNum, int* horses){
 for (int i=0 ; i <5; i++){
  std::random_device rd;
  std::uniform_int_distribution<int> dist(0,1);
  int coin = dist(rd);
  if (coin == 1){
   horses [i] ++ ;
  }//end if
 }
}//end advance


void printLane(int horseNum, int* horses){
 for (int i = 0; i < 14; i++){
   if (i == horses[i]){
    std::cout <<horses[i] ;
   }else{
    std::cout <<"." ;
   }//end if
 }//end for
 std::cout<<"K"<<std::endl; 
}//end printlane

bool isWinner(int horseNum, int* horses){
  if (horses == 14){
   return false;
  }else {
   return true;
  }//end if
 
 
}//end isWinner
