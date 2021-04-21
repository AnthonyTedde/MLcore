#include <iostream>
#include <boost/numeric/ublas/vector.hpp>
#include <boost/numeric/ublas/io.hpp>
#include <fstream>
#include "include/MLcore/dataframe.h"

using namespace std;
using namespace boost::numeric;


int main() {

    MLcore::dataframe<double> df;
    cout << df.nrow() << endl;
    cout << df.ncol() << endl;

    std::vector<std::vector<double>> features;
    // Read file
    std::ifstream file;
    file.open("../data/iris.csv", std::ifstream::in);
    if (file.fail()){
        std::cerr << "Error opening 'iris.csv'" << endl;
    }
    std::string line;
    while(std::getline(file, line)){
        std::vector<double> row;
        std::stringstream iss(line);
        std::string val;
        while(std::getline(iss, val, ',')){
            try{
                double temp = std::stod(val);
                row.push_back(temp);
            }
            catch (...){
                std::cerr << "Bad input: " << val << std::endl;
            }
        }
        features.push_back(row);
    }
    file.close();


    ublas::vector<double> v (3);
    for (unsigned int i = 0; i < v.size (); ++i)
        v (i) = i;
    cout << v << std::endl;
    return 0;

}
