#ifndef GUARD_PARTY_MENU_H
#define GUARD_PARTY_MENU_H

#include "global.h"

enum {
    AILMENT_NONE,
    AILMENT_PSN,
    AILMENT_PRZ,
    AILMENT_SLP,
    AILMENT_FRZ,
    AILMENT_BRN
};

bool8 MonKnowsMove(struct Pokemon *, u16);
void sub_81B58A8(void);
void DoWallyTutorialBagMenu(void);
u8 pokemon_ailments_get_primary(u32 status);
u16 ItemIdToBattleMoveId(u16 itemId);

#endif // GUARD_PARTY_MENU_H
