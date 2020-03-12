#include <iostream>

using namespace std;	//namespaces are awful in c++; c++ based on files for compiling

int main( )		//main is not in a class or namespace; this is a static method	//small m instead of capital; use shortest possible name for everything
{
    cout << "Hello world!" << endl << "This is me!";		//c means console //<< is a stream operator "insert the scream"Hello World!" into stream cout
    
    return 0;	//if everthing is ok
}
