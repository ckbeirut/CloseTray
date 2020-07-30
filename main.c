#include <windows.h>

int main()
{
  mciSendString("Set CDAudio Door Closed Wait", 0, 0, 0); 
  return 0;
}
