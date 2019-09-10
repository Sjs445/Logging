#include "Logging.cpp"


int main()
{
  fstream fileStream;
  Log l;
  l.logOpen(fileStream, "log.txt");

  for(int i=1; i<=4; i++)
  {
    l.logWrite(fileStream, "A log", i, "Logging everything normally");
  }

  l.logFlush(fileStream);
  l.logWrite(fileStream, "A log", 5, "Flushed");
  l.logFlush(fileStream);
  l.logRead(fileStream);
  l.logFlush(fileStream);
  l.logClose(fileStream);

  return 0;
}
