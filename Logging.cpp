#include "Logging.h"

void Log::logOpen(fstream & fs, string fileName)
{
  fs.open(fileName, fstream::in | fstream::out | fstream::app);
  //Open the file for input, output, and appending to the file.
}

void Log::logClose(fstream & fs)
{
  fs.close();
}

void Log::logRead(fstream & fs)
{

}

void Log::logWrite(fstream & fs)
{
  //Line Number | Function Name | Type | Description | Date/Time
  time_t now = time(0);
  char * date_time = ctime(&now);

  fs<<"Line Number: "<<__LINE__<<" | Function: "<<__FUNCTION__<<" | Type Placeholder "<<"| Some Description "<<"| Date: "<<date_time;
}
