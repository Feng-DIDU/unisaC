#ifndef IMDBDETAILSLOADER_H
#define IMDBDETAILSLOADER_H

#include <string>

class IMDBDetailsLoader {
public:
    IMDBDetailsLoader();
    void loadMovieDetails(const std::string& ISAN_id);
};

#endif 
