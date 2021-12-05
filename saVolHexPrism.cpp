// Copyright (c) 2021 Ina Tolo All rights reserved.
//
// Created by: Ina Tolo
// Created on: Dec. 3, 2021
// This program asks the user for the base edge and
// height of the hexagonal prism in their chosen units. It then
// calculates and displays the surface area and
// volume.
#include <iostream>
#include <cmath>

// declare variables

float baseEdge, height, surfaceArea;
float surfaceArea1, surfaceArea2, surfaceArea3;
float surfaceArea4, surfaceArea5, sAFinal, volume;
float volume1, volume2, volume3, volumeFinal;

int main() {
  // get input from user

  std::cout << "Today we will calculate the surface area and\n";
  std::cout << "volume of a hexagonal prism!\n";
  std::cout << std::endl;
  std::string units;
  std::cout << "Enter the units: ";
  std::cin >> units;
  std::cout << "Enter the base edge: ";
  std::cin >> baseEdge;
  std::cout << "Enter the height: ";
  std::cin >> height;

  // calculate surface area

  surfaceArea = (3 * (sqrt(3)));
  surfaceArea1 = pow(baseEdge, 2);
  surfaceArea2 = surfaceArea * surfaceArea1;
  surfaceArea3 = 6 * baseEdge;
  surfaceArea4 = surfaceArea3 * height;
  surfaceArea5 = surfaceArea2 + surfaceArea4;
  sAFinal = (round(surfaceArea5 * 100))/100;

  // calculate volume

  volume = (3 * (sqrt(3)) / 2);
  volume1 = pow(baseEdge, 2);
  volume2 = volume1 * height;
  volume3 = volume * volume2;
  volumeFinal = (round(volume3 * 100)) / 100;

  // display the results to the user

  std::cout << std::endl;
  std::cout << "\033[0;31m";
  std::cout << "Surface area = " << sAFinal << units << "^2\n";
  std::cout << "\033[0;32m";
  std::cout << "Volume = " << volumeFinal << units << "^3\n";
}
