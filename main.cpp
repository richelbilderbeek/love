#include <iostream>

void show_help() noexcept
{
   std::cout
      << "Usage: love [OPTION]\n"
      << "\n"
      << "      --about    display info about this program and exit\n"
      << "      --help     display this help and exit\n"
      << "      --version  display program version and exit\n"
    ;
}

int main(int argc, char *argv[])
{
  if (argc == 1 || std::string(argv[1]) == "--help")
  {
    show_help();
    return 0;
  }
  if (std::string(argv[1]) == "--about")
  {
    std::cout << "love is programmed by an anonymous programmer\n";
    return 0;
  }
  if (std::string(argv[1]) == "--version")
  {
    std::cout << "love has no version\n";
    return 0;
  }
  show_help();
}
