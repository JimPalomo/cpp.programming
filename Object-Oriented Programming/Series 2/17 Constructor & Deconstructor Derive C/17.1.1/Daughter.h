#ifndef DAUGHTER_H
#define DAUGHTER_H
#include "Mother.h" // Hash Include Mother because daughter is inherting from mother

class Daughter: public Mother {
    public: 
        Daughter();
        ~Daughter();
};

#endif