#include "movie.h"

// Read a movie (name, number of copies, type) from file
// Return the movie read
Movie get(std::ifstream& file) {
    Movie m;
     file >> std::ws;
    std::getline(file, m.name);
    file >> std::ws;
    file >> m.genre >> m.year;
    return m;
}

// Write a movie m to file
void put(const Movie& m, std::ofstream& file) {
    file << m.name << "\n";
    file << m.genre << " ";
    file << m.year << "\n";
}

// Write movie m to std::cout
void put(const Movie& m) {
    std::cout << m.name << "\n";
    std::cout << m.genre << " ";
    std::cout << m.year << "\n";
}

// Return true, if m1's name is alphabetically larger than m2's name
// Otherwise, returns false
bool larger_than(const Movie& m1, const Movie& m2) {
    return m1.name > m2.name;
}
