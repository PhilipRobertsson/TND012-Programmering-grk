#pragma once

#include <iostream>
#include <vector>
#include <fstream>

// ADD new data type Image to represent a decompressed image
struct Image {
	int palSize = 0;
	std::vector<char> pal;
	std::vector<int> imgSize = {0,0};
	std::vector<int> imgData;
};


// Read a compressed image from file in
// Return a value of type Image representing the decompressed image
Image get_decompressed_image(std::ifstream& file);


// Write a decompressed image to file out
void write_image(const Image& img, std::ofstream& file);