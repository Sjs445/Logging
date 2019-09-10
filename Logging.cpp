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

void Log::logWrite(fstream & fs, string description, int type, string other)
{
  //Line Number | Function Name | Type | Description | Other | Date/Time
  string typeSet;

  if(type == 1)
  {
    typeSet = "Warning";
  }
  else if(type == 2)
  {
    typeSet = "Error";
  }
  else if(type == 3)
  {
    typeSet = "Fatal";
  }
  else
  {
    typeSet = "Success";
  }

  fs<<"Line Number: "<<__LINE__<<" | Function: "<<__FUNCTION__<<" | Type: "<<typeSet<<" | Description: "<<description<<" | Other: "<<other<<" | Date: "<<__DATE__<<" "<<__TIME__<<"\n";
}

void Log::logFlush(fstream & fs)
{
  fs.flush();
}
