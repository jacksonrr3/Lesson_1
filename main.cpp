#include <iostream>
#include "lib.h"
//#include <spdlog/spdlog.h>
//#include "spdlog/fmt/ostr.h"
//#include "spdlog/sinks/stdout_sinks.h"
//using namespace std

int main()
{  
 // auto logger = spdlog::stdout_logger_mt("console");
 // logger->info("build {}\n", version());
 // logger->info("Hello, world!\n");
  std::cout << "build " << version() << "\n";
  std::cout << "Hello, world!\n"; 

return 0;
}
