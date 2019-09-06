#include <iostream>
#include <fstream>
#include <string>
#include <ctime>

using namespace std;

class Log
{
private:
  int lineNo;
  int type;
  string description;
  string function;
  string dateTime;
public:
  void logOpen(fstream & fs, string);
  void logClose(fstream & fs);
  void logRead(fstream & fs);
  void logWrite(fstream & fs);
  void logFlush();
};
