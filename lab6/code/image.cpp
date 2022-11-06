#include "image.h"

Image get_decompressed_image(std::ifstream& file) {
	Image ci;
	int palVal;
	int imgDat;
	file >> ci.palSize;
	file >> palVal; // Read first char in pallet
	for (int i = 0; i < ci.palSize - 1; i++) { 
		ci.pal.push_back(palVal);
		file >> palVal;
	}
	ci.pal.push_back(palVal);
	file >> ci.imgSize[0]; //Length of image
	file >> ci.imgSize[1]; // Heigth of image
	while (!file.eof()) {
		file >> imgDat;
		ci.imgData.push_back(imgDat);
	}
	return ci;
}
void write_image(const Image& img, std::ofstream& file) {
	
	for (int i; i<img.)
	std::cout << img.pal[img.imgData[0]];
	
}
