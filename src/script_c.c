#include "../include/script.h"
#include "../include/types.h"

BOOL LONG_CALL ScrCmd_AddListOption_070(SCRIPTCONTEXT *ctx)
{
    void *pp_menu = FieldSysGetAttrAddr(ctx->fsys, SCRIPTENV_MENU_WINDOW);
    u16 msgId = ScriptGetVar(ctx);
    u16 where = ScriptGetVar(ctx);
    u16 value = ScriptGetVar(ctx);
    debug_printf("id: %d, where: %d, value: %d\n", msgId, where, value);
    MoveTutorMenu_SetListItem(pp_menu, msgId, where, value);
    return FALSE;
}
