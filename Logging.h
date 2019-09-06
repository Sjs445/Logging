#include <iostream>
#include <fstream>
#include <string>
#include <ctime>

using namespace std;

class Log{
public:
  void logOpen(fstream & fs, string);
  void logClose(fstream & fs);
  void logRead();
  void logWrite();
  void logFlush();
};

void Log::logOpen(fstream & fs, string fileName)
{
  fs.open(fileName, fstream::in | fstream::out | fstream::app);
}

void Log::logClose(fstream & fs)
{
  fs.close();
}

void Log::logRead()
{
  
}
