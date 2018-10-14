#include <iostream>
using std::cin;
using std::cout;

int main()
{
    for(int j = 7; j > 0; j--){
        for(int i = 4; i > abs(4-j); i--)
        {
            cout << "#";
        }
//          for(int i = 4; i > 4 - abs(4-j); i--){
//              cout << " ";
//          }
          cout << "\n";
      }

    return 0;
}

