#include <fstream>
#include <iostream>

int removeWhiteSpaces(std::istream &, std::ostream &);

// Example Usage: Ex_RemoveWhiteSpaces.o example.js example.min.js
int main(int argc, char **argv) {
  std::ifstream fileInput(argv[1]); // first parameter is input file name
  std::ofstream fileOutput;
  fileOutput.open(argv[2],
                  std::ofstream::out |
                      std::ofstream::app); // second parameter is output file
                                           // name ofstream::app == append mode
  if (!removeWhiteSpaces(fileInput, fileOutput))
    return -1;

  fileInput.close();
  fileOutput.close();
  return 0;
}

int removeWhiteSpaces(std::istream &inputFile, std::ostream &outputFile) {

  if (!inputFile) {
    std::cout << "Unable to read input stream." << std::endl;
    return -1;
  } else if (!outputFile) {
    std::cout << "Unable to write to output stream." << std::endl;
    return -2;
  }

  std::string word;

  while ((inputFile >> word).good()) { // redundant, for example purposes
    outputFile << word;
  }

  outputFile << std::flush; // flush == tell OS to write the buffer to actual
                            // output device

  return 0; // success
}