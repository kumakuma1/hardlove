.include "asm/include/battle_commands.inc"

.data

_000:
    AbilityPopup BATTLER_CATEGORY_DEFENDER
    // {0}’s {1} made it the {2} type!
    PrintMessage 641, TAG_NICKNAME_ABILITY_TYPE, BATTLER_CATEGORY_DEFENDER, BATTLER_CATEGORY_DEFENDER, BATTLER_CATEGORY_MSG_TEMP
    Wait
    WaitButtonABTime 30
    End
