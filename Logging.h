#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Log
{
private:
  int lineNo;
  int type;
  string description;
  string function;
  string dateTime;
  string line;
public:
  void logOpen(fstream & fs, string);
  void logClose(fstream & fs);
  void logRead(fstream & fs);
  void logWrite(fstream & fs, string description, int type, string other);
  void logFlush(fstream & fs);
};
