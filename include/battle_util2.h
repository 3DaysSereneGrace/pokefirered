#ifndef GUARD_BATTLE_UTIL2_H
#define GUARD_BATTLE_UTIL2_H

#include "global.h"

void AllocateBattleResources(void);
void FreeBattleResources(void);
void AdjustFriendshipOnBattleFaint(u8 bank);
void sub_80571DC(u8 bank, u8 arg1);
u32 sub_805725C(u8 bank);

#endif // GUARD_BATTLE_UTIL_H
