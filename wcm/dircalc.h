#ifndef DIRCALC_H
#define DIRCALC_H

#include "fileopers.h"
#include "ncdialogs.h"
#include "operwin.h"

bool DirCalc( FSPtr f, FSPath& path, cptr<FSList> list, NCDialogParent* parent );

#endif
