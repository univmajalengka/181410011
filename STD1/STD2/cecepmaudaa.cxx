#include <iostream>
#include <string>
#include <sstream>
using namespace std;

struct freefire_t {
  string title;
  int year;
} freefire [3];

void printfreefire (freefire_t freefire);

int main ()
{
  string mystr;
  int n;

  for (n=0; n<3; n++)
  {
    cout << "Enter title: ";
    getline (cin,freefire[n].title);
    cout << "Enter year: ";
    getline (cin,mystr);
    stringstream(mystr) >> freefire[n].year;
  }

  cout << "\n anda memasukan data freefire:\n";
  for (n=0; n<3; n++)
    printfreefire (freefire[n]);
  return 0;
}

void printfreefire (freefire_t freefire)
{
  cout << freefire.title;
  cout << " (" << freefire.year << ")\n";
}
