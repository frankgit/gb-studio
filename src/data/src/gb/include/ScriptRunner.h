#ifndef SCRIPT_RUNNER_H
#define SCRIPT_RUNNER_H

#include <gb/gb.h>
#include "game.h"

extern UBYTE script_ptr_bank;
// extern UWORD script_ptr;

void Script_Start(BANK_PTR *events_ptr);
void Script_Run();

#endif