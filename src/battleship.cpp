#include <iostream>

int main() {
  // define field
  const int XMAX = 9;
  const int YMAX = 7;
  char gameField[XMAX][YMAX];

  //fill grid
  for(int x = 0; x < XMAX; x++) {
    for(int y = 0; y < YMAX; y++) {
      gameField[x][y] = '.';
    }
  }

  // loop
  bool end = false;

  do {
    //show gameField
    std::cout << "\t1\t2\t3\t4\t5\t6\t7\t8\t9" << std::endl;
    for(int y = 0; y < YMAX; y++) {
      std::cout << (char)('A' + y);
      for(int x = 0; x < XMAX; x++) {
        std::cout << "\t" << gameField[x][y];
      }
      std::cout << std::endl;
    }

    // Coordinate input
    char cx, cy;
    std::cin >> cx >> cy;
    int xin = cx - '1'; // on x-Coordinate
    int yin = cy - 'A'; // on y-Coordinate
    if(xin >= 0 && xin < XMAX && yin >= 0 && yin < YMAX) {
      gameField[xin][yin] = 'x';
    } else {
      end = true;
    }
  } while(!end);
}
