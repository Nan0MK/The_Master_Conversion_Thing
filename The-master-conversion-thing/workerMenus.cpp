#include <iostream>
#include "conversion.h"

const std::string section_top = "/===================================================\\";
const std::string section_bottom = "\\===================================================/";

const std::string message_welcome = "|Master Converter Thing|";
const std::string message_converterType = "Choose a converter";
const std::string message_inputsTemp = "Input:(input temp) (temp value) (output temp)";

void MainMenu(){
  std::string choice;
  
  std::cout << message_welcome << std::endl;
  std::cout << message_converterType << std::endl;

  std::cin >> choice;

  if(choice == "temp"){
    std::cout << message_inputsTemp << std::endl;
    std::string tempA, tempB;
    float tempIn;
    float tempOut;

    std::cin >> tempA >> tempIn >> tempB;
    if(tempA == "kel" && tempB == "cel"){
      float g;
      g = FarConvKelvin(tempIn);
      tempOut = FarenheihtToCelsius(g);
    }
    if(tempA == "kel" && tempB == "far"){
      float g;
      g = FarConvKelvin(tempIn);
      tempOut = g;
    }
    
    if(tempA == "cel" && tempB == "kel"){
      float g;
      g = FarConvCelsius(tempIn);
      tempOut = FarConvKelvin(g);
    }
    if(tempA == "cel" && tempB == "far"){
      float g;
      g = FarConvCelsius(tempIn);
      tempOut = g;
    }
    
    if(tempA == "far" && tempB == "kel"){
      float g;
      g = FarConvKelvin(tempIn);
      tempOut = g;
    }
    if(tempA == "far" && tempB == "cel"){
      float g;
      g = FarenheihtToCelsius(tempIn);
      tempOut = g;
    }

    std::cout << tempA << " " << tempIn << " is " << tempOut << " in " << tempB << std::endl;
    
  }
  else{
    std::cout << choice << " is not one of the supported converters" << std::endl;
  }
  
}