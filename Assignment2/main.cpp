//
//  main.cpp
//  Assignment2
//
//  Created by zw896 on 29/08/2016.
//  Copyright © 2016 UOW. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <sstream>
#include <iostream>
#include <cstdlib>
#include <iomanip>

#include "Node.h"
#include "Queue.h"

//read the file
void readFile()
{
    std::ifstream inFile;
    std::string tempWin;
    std::string tempArr;
    std::string tempSer;
    std::string filename;
    
    int windowsNum;
    double arrivaltime, serviceTime;
    
    //Node *person;
    
    std::cout << "Please enter the file name: ";
    std::cin >> filename;
    
    inFile.open(filename);
    
    if (!inFile.is_open()) {
        std::cout << "Open file failed." << std::endl;
    } else {
        std::cout << "open file......" << std::endl;
        
        getline(inFile, tempWin);
        //std::stringstream sstream(tempWin);
        windowsNum = atoi(tempWin.c_str());
        std::cout << windowsNum << std::endl;
        
        while (inFile.peek()!=EOF) {
            getline(inFile, tempArr, ' ');
            std::cout << tempArr << std::endl;
            std::stringstream sstream(tempArr);
            sstream >> arrivaltime;
            
            //arrivaltime = strtod(tempArr.c_str(), NULL);
            std::cout << std::fixed << std::setprecision(3) << arrivaltime << " ";
            
            getline(inFile, tempSer);
            serviceTime = strtod(tempSer.c_str(), NULL);
            std::cout << std::fixed << std::setprecision(3) << serviceTime << std::endl;
        }
        inFile.close();
    }
}

int main(int argc, const char * argv[]) {
    int mode;
    
    std::cout << "Please enter the mode number: ";
    std::cin >> mode;
    
    if (mode == 1) {
        //Simulation();
        std::cout << "mode 1 " << std::endl;
        readFile();
    }
    else if (mode == 2) {
        std::cout << "mode 2 " << std::endl;
    }
    return 0;
}
