#include <signal.h>

#include <unistd.h>


#include <fstream>


int main(int argc, char* argv[]) {

  std::ofstream f("/home/box/pid");

  f << getpid();

  f.close();


  signal(SIGTERM, SIG_IGN);

  signal(SIGABRT, SIG_IGN);


  while (true)

    sleep(1);


  return 0;

}
