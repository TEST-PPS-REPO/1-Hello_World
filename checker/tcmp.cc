#include "testlib.h"
 
using namespace std;
 
int main(int argc, char** argv) {
    puts(argv[0]);
    puts(argv[1]);
    puts(argv[2]);
    puts(argv[3]);
    
    setName("token compare");
    registerTestlibCmd(argc, argv);

    quitf(_ok, "ok");
    return 0;
}
