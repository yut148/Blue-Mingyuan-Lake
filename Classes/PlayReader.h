//
//  PlayReader.h
//  血色明远湖
//
//  Created by Ring King on 14-4-5.
//
//

#ifndef _________PlayReader__
#define _________PlayReader__

#include <iostream>
#include <vector>
#include <string>
#include "cocos2d.h"

#if (CC_TARGET_PLATFORM != CC_PLATFORM_MAC && CC_TARGET_PLATFORM != CC_PLATFORM_IOS)
#include "strtok_r.c"
#endif

using namespace std;
class PlayReader {
public:
  PlayReader();
  PlayReader(string filePath);
  void ReadFileWithFullPath(cocos2d::CCString filePath);
  string GetNextDialog();
  void ChangeFile(cocos2d::CCString filePath);
  int getCurLine();
  vector<string> PlayerNames();
  
protected:
  void split(const char * str,const char * deli, vector<string> *list);
  
  unsigned long lineNum;
  unsigned long curLine;
  vector<string> dialogs;
  
};

class ProcessSaver {
  int _x, _y, _mapProcess;
  int _process;
  
public:
  ProcessSaver();
  void save(int x, int y, int mapProcess);
  void savePosition(int x, int y);
  void saveMapProcess(int mapProcess);
  void saveProcess(int process);
  int getPositionX();
  int getPositionY();
  int getMapProcess();
  int getProcess();
};
#endif /* defined(_________PlayReader__) */
