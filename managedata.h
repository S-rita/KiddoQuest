#ifndef MANAGEDATA_H
#define MANAGEDATA_H

#include "members.h"
#include <fstream>
#include <sstream>

void saveData(const Members members);

void loadData(Members& members);

#endif // MANAGEDATA_H
