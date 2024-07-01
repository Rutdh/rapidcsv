#include <iostream>
#include <vector>
#include "rapidcsv.h"

int main()
{
  rapidcsv::Document doc("./rowhdr.csv", rapidcsv::LabelParams(0, 0));

  std::vector<std::string> row = doc.GetRow<std::string>("2017-02-22");
  std::cout << "Read " << row.size() << " values." << std::endl;

  std::cout << doc.GetRowCount() << std::endl;
  // const std::string str("64.800003");
  std::cout << doc.GetCell<double>("64.800003", 3)  << std::endl;
}
