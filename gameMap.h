#ifndef _GAMEMAP_H_
#define _GAMEMAP_H_
#include <iostream>
#include <ncurses.h>
#include <vector>
#include <cstdlib>
#include <utility>
#include "snake.h"
#include "gate.h"
#include "Position.h"
#include "item.h"
#include "gameScoreMission.h"

class gameMap
{
private:
  //실질적인 map을 담는 배열 //0,height,width이다.
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
  const int MAP_WIDTH = 21;//맵의 크기
  const int MAP_HEIGHT = 21;//맵의 크기
  int mapVariaty = 4;//맵의 총 개수
  int currentMap[21][21] = {0};
  snake snakeOnMap;//snake 클래스 객체
  gate gateOnMap;//gate 클래스 객체
  item itemOnMap[3]; //item 클래스 객체
  int mapNum;//현재 currentMap이 몇번째 map을 기반으로 하고 있는지!
public:
  score gameScore;
  mission gameMission;
  gameMap();//생성자
  int (*getCurrentMap())[21]
  {
    return currentMap;
  };
  int getCurrentMapPosition(int x, int y);//currentmap의 특정 좌표가 무엇인지 리턴
  void setCurrentMap(int num);
  void snakeInitialize();
  void itemInitialize();
  int gameTimeFlow();

  void snakeChangeDirection(int dir);
  int getSnakeLength();
  void setSnakeLength(int n);
  int getSnakeDirection();
  void snakeReset();

  void gateInitialize(int mapNum);
  void gateGenerateOnMap();
  void gateDegenerateOnMap();
  bool isGateOnMap();
};

#endif