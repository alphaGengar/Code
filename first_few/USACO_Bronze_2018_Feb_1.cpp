/*
One of the farming chores Farmer John dislikes the most is hauling around lots of cow manure. In order to streamline this process, he comes up with a brilliant invention: the manure teleporter! Instead of hauling manure between two points in a cart behind his tractor, he can use the manure teleporter to instantly transport manure from one location to another.

Farmer John's farm is built along a single long straight road, so any location on his farm can be described simply using its position along this road (effectively a point on the number line). A teleporter is described by two numbers x and y, where manure brought to location x can be instantly transported to location y, or vice versa.

Farmer John wants to transport manure from location a to location b, and he has built a teleporter that might be helpful during this process (of course, he doesn't need to use the teleporter if it doesn't help). Please help him determine the minimum amount of total distance he needs to haul the manure using his tractor.

INPUT FORMAT (file teleport.in):
The first and only line of input contains four space-separated integers: a and b, describing the start and end locations, followed by x and y, describing the teleporter. All positions are integers in the range 0…100, and they are not necessarily distinct from each-other.

OUTPUT FORMAT (file teleport.out):
Print a single integer giving the minimum distance Farmer John needs to haul manure in his tractor.

*/

#include <bits/stdc++.h> 

using namespace std;

int main() {
  vector<int> abc;
  cout << "Enter you values here: ";
  int lc [2];
  int te [2];
  int input;

  while (cin >> input && abc.size() < 3) {
    abc.push_back(input);
  }
  abc.push_back(input);

  lc[0] = abc[0];
  lc[1] = abc[1];
  te[0] = abc[2];
  te[1] = abc[3];

  sort(te, te+2);
  sort(lc, lc+2);

  int dwte = abs(lc[0] - te[0]) + abs(lc[1] - te[1]);
  int dwn = abs(lc[0] - lc[1]);

  if(dwte < dwn){
      cout << dwte;
      return 1;
  }
  cout << dwn;
  return 0;
}
