/**************************************************************************/
/* LabWindows/CVI User Interface Resource (UIR) Include File              */
/*                                                                        */
/* WARNING: Do not add to, delete from, or otherwise modify the contents  */
/*          of this include file.                                         */
/**************************************************************************/

#include <userint.h>

#ifdef __cplusplus
    extern "C" {
#endif

     /* Panels and Controls: */

#define  PANEL                            1       /* callback function: panelCB */
#define  PANEL_TEXT_RAW                   2       /* control type: textBox, callback function: (none) */
#define  PANEL_BUTTON_CONNECT             3       /* control type: command, callback function: button_connect */
#define  PANEL_BUTTON_QUIT                4       /* control type: command, callback function: button_quit */
#define  PANEL_MSG_STATUS                 5       /* control type: textMsg, callback function: (none) */


     /* Control Arrays: */

          /* (no control arrays in the resource file) */


     /* Menu Bars, Menus, and Menu Items: */

          /* (no menu bars in the resource file) */


     /* Callback Prototypes: */

int  CVICALLBACK button_connect(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK button_quit(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK panelCB(int panel, int event, void *callbackData, int eventData1, int eventData2);


#ifdef __cplusplus
    }
#endif