#include "Logging.cpp"

int main()
{
  fstream fileStream;
  Log l;
  l.logOpen(fileStream, "log.txt");

  for(int i=1; i<=4; i++)
  {
    l.logWrite(fileStream, "A log", i, "Something Else");
  }

  l.logClose(fileStream);

  return 0;
}
