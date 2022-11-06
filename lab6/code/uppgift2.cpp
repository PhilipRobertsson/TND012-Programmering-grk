/*
 * TND012, Lab6
 * Exercise 2: Decode a compressed image
 *
 */

/*
Example input file: uppgift-input-example.txt
  5  96  58  47  97  56  14   7   0  18   1   6   0   6   1   2   2   2   3   2
  2   2   1   2   0   4   1   2   3   2   4   2   3   2   1   2   0   4   1   2
  2   2   3   2   2   2   1   2   0   6   1   6   0  18

Generated output: uppgift-output-example.txt
``````````````
````::::::````
``:://aa//::``
``::aa88aa::``
``:://aa//::``
````::::::````
``````````````
*/

/*
* Input image files:
* "../code/uppgift2-input-example.txt"
* "../code/uppgift2-input-short.txt"
* "../code/uppgift2-input-large.txt"
*/

#include <iostream>
#include <fstream>

#include "image.h"

/****************************************/
// Function declarations (prototypes)
/****************************************/

Image read_image(std::ifstream& f);

void write_img(const Image& img, std::ofstream& f);

int main() {
	std::ifstream in_file("../code/uppgift2-input-example.txt");
	std::ofstream out_file("../code/uppgift2-output.txt");

    // Test if opening the files succeeded
    if (in_file && out_file) {
        // Load a file of the compressed image
        Image img = read_image(in_file);

        if (img.palSize != 0) {  // is the image file empty?
            // Decompress the image to a text document
            write_img(img, out_file);
        }
        else {
            std::cout << "File is empty!!\n";
        }
    }
    else {
        std::cout << "Error in file opening!!\n";
    }
}

Image read_image(std::ifstream& f) {
    Image img = get_decompressed_image(f);
    return img;
}

void write_img(const Image& img, std::ofstream& f) {
    write_image(img, f);
}
