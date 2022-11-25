#include <iostream>

std::istream &readAndPrintUntilEOF(std::istream &);

int main() {
  readAndPrintUntilEOF(std::cin); // read from standard input (cin)
  return 0;
}

std::istream &readAndPrintUntilEOF(std::istream &inputStream) {
  std::string itemRead;

  while (
      !(inputStream >> itemRead).eof()) // eof() checks if strm::eofbit is set
  {
    std::cout << itemRead << std::endl;
  }

  inputStream.clear(); // reset
  return inputStream;
}