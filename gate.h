#ifndef _GATE_H_
#define _GATE_H_
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include "Position.h"

using namespace std;

class gate
{
private:
  int map[4][21][21]{
    {
      {2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2},
      {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
      {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
      {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
      {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
      {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
      {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
      {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
      {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
      {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
      {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
      {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
      {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
      {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
      {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
      {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
      {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
      {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
      {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
      {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
      {2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2}
    },
    {
      {2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2},
      {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
      {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
      {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
      {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
      {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
      {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
      {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
      {1,0,0,0,1,1,0,0,1,1,1,1,0,0,0,1,0,0,0,0,1},
      {1,0,0,0,1,1,0,0,1,2,2,1,0,0,0,1,0,0,0,0,1},
      {1,0,0,0,1,1,0,0,1,2,2,1,0,0,0,1,0,0,0,0,1},
      {1,0,0,0,1,1,0,0,1,2,2,1,0,0,0,1,0,0,0,0,1},
      {1,0,0,0,1,1,0,0,1,2,2,1,0,0,0,1,0,0,0,0,1},
      {1,0,0,0,1,1,0,0,1,2,2,1,0,0,0,1,0,0,0,0,1},
      {1,0,0,0,1,1,0,0,1,2,2,1,0,0,0,0,0,0,0,0,1},
      {1,0,0,0,1,1,0,0,1,2,2,1,0,0,0,0,0,0,0,0,1},
      {1,0,0,0,1,1,0,0,1,2,2,1,0,0,0,0,0,0,0,0,1},
      {1,0,0,0,1,1,0,0,1,2,2,1,0,0,0,0,0,0,0,0,1},
      {1,0,0,0,1,1,0,0,1,2,2,1,0,0,0,0,0,0,0,0,1},
      {1,0,0,0,1,1,0,0,1,2,2,1,0,0,0,0,0,0,0,0,1},
      {2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2}
    },
    {
      {2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2},
      {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
      {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
      {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
      {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
      {1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1},
      {1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1},
      {1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1},
      {1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1},
      {1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1},
      {1,0,0,0,0,1,1,1,1,1,2,1,1,1,1,1,0,0,0,0,1},
      {1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1},
      {1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1},
      {1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1},
      {1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1},
      {1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1},
      {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
      {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
      {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
      {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
      {2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2}
    },
    {
      {2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2},
      {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
      {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
      {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
      {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
      {1,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,1},
      {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
      {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
      {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
      {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
      {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
      {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
      {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
      {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
      {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
      {1,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,1},
      {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
      {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
      {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
      {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
      {2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2}
    }
  };
  int mapDataNum;
  vector<Position> mapWallData;
  Position firstGate;
  Position secondGate;
  int wallCount;//currentMapData ?????? 1 (?????? ???)??? ????????? ??????.
  bool SnakeEnteringGate = false;
  bool gateExist;

  //???????????? ?????? ?????????
  int snakeLength;

public:
  gate();
  void gateInitialize(int mapNum);
  void gateGenerate();
  void gateDegenerate();
  int gateEntering(int snakeDirection, int py, int px, int snakeLength);
  Position getFirstGate();
  Position getSecondGate();
  bool isSnakeEnteringGate();
  bool isGateExist();
  bool gateSnakeEnteringCount();

};

#endif
