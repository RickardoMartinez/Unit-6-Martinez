#include <iostream>
#include <algorithm>
using namespace std;
int main() 
{
int arrofInts[8] = {12,7,15,22,0};
arrofInts[5] = 88;
arrofInts[6] = 120;
arrofInts[7] = 37;
  
  cout << arrofInts[2] << endl;
for(int i = 0; i < 8; i++)
  {
    cout << arrofInts[i]<< endl;
  }
//sort this list ASC
  sort(arrofInts,arrofInts+8);
  cout << endl;
//use a for loop to re-print this array!!!
  for(int j = 0; j < 8; j++)
   {
    cout << arrofInts[j]<< endl;
  }
  arrofInts[7]= 77777;
  sort(arrofInts,arrofInts+8);
  reverse(arrofInts,arrofInts+8);
 cout <<"\n";
  for(int z = 0; z < 8; z++)
    {
      cout << arrofInts[z] << endl;
    }

  return 0;
}