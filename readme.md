occams razor

#include <random>
std::random_device rd;
std::uniform_int_distribution<int> dist(0, 1);

coin = dist(rd);

main
 while keepGoing is true
  for each horse in (array?)
   advance 
   is winner
   print lane 
array horse [0,0,0,0,0]

function advance
 coin flip here
 for each horse 
  if coin flip is 1 
   move horse up one 
  else if coin flip is 0
   dont do anything


function printLane
  for i in horse
   if i == horse 
    print horse[i]
   else 
    print dot

function isWinner
 if i in horse == 14
  keepGoing == False
 else 
  keepGoing == true
