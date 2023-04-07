#include "testlib.h"
#include <cstdlib>
#include <cstdio>
using namespace std;

char buf[101010];
 
int main(int argc, char** argv) {
    registerTestlibCmd(argc, argv);
    for (; !ouf.seekEof(); ) {
         string j;
        ouf.readWordTo(j);
    }
    quitf(_ok, "ok");
    std::exit(-4);
    // return 4;
    puts(argv[0]);
    puts(argv[1]);
    puts(argv[2]);
    puts(argv[3]);

    FILE* in = fopen(argv[1], "r");
    
    fscanf(in, "%s", buf);
    printf("in: %s\n", buf);

    fclose(in);

    FILE* out = fopen(argv[2], "r");
    
    fscanf(out, "%s", buf);
    printf("out: %s\n", buf);

    fclose(out);

    FILE* ans = fopen(argv[3], "r");
    
    fscanf(ans, "%s", buf);
    printf("ans: %s\n", buf);

    fclose(ans);
    
    // setName("token compare");
    // registerTestlibCmd(argc, argv);

    // quitf(_ok, "ok");
    return 0;
}
