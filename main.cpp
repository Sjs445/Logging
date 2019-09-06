#include "Logging.cpp"

int main()
{
  fstream fileStream;
  Log l;
  l.logOpen(fileStream, "log.txt");
  l.logWrite(fileStream);
  l.logClose(fileStream);

  return 0;
}
