//
// Created by ATE on 21-04-21.
//

#ifndef MLCORE_DATAFRAME_H
#define MLCORE_DATAFRAME_H

#include <cstddef> // std::size_t

namespace MLcore{

/*
    template <class T, std::size_t N, std::size_t M>
*/
    template <class T>
    class dataframe{

    public:

        dataframe () :
        nrow_ (0), ncol_ (0) {}

        // Getters:
        int nrow () {return nrow_;}
        int ncol () {return ncol_;}

    private:
        size_t nrow_;
        size_t ncol_;
    };

}

#endif //MLCORE_DATAFRAME_H
