#include <iostream>
#include <fstream>

using namespace std;

#define NEV "main.cpp"

int main()
{
  ifstream f(NEV);
  if(f.is_open())
  {
    f.seekg(0, ios_base::end);
    streampos vege = f.tellg();
    cout << "A fajl merete " << vege << " byte." << endl;
    f.close();
  }
  else
  {
    cerr << "Hiba!" << endl;
  }
  return 0;
}
