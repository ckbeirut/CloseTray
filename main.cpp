#include <windows.h>

int main()
{
  mciSendString("Set CDAudio Door Closed Wait", 0, 0, 0); // To close optical drive tray
  return 0;
}
