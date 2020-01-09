#include <windows.h>

using namespace std;

int main()
{
  mciSendString("Set CDAudio Door Closed Wait", 0, 0, 0); // To close optical drive tray
  return 0;
}
