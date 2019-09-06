#include "Logging.h"

int main()
{
  fstream fileStream;
  Log l;
  l.logOpen(fileStream, "log.txt");
  l.logClose(fileStream);
  return 0;
}
