#include "Arduino.h"
#include "flash.h"
#include "GUIslice-build_GSLC.h"
#include "string"

// ------------------------------------------------
// Program Globals
// ------------------------------------------------

// Save some element references for direct access
//<Save_References !Start!>
gslc_tsElemRef* m_pElemGraph1     = NULL;
gslc_tsElemRef* m_pElemProgress1  = NULL;
gslc_tsElemRef* m_pElemProgress1_2= NULL;
gslc_tsElemRef* m_pElemProgress1_2_5= NULL;
gslc_tsElemRef* m_pElemProgress1_3= NULL;
gslc_tsElemRef* m_pElemToggle1    = NULL;
gslc_tsElemRef* m_pElemToggle1_2  = NULL;
gslc_tsElemRef* m_pElemToggle1_2_3= NULL;
gslc_tsElemRef* m_pElemVal1_2_4   = NULL;
gslc_tsElemRef* m_pElemVal1_2_4_6 = NULL;
gslc_tsElemRef* m_pElemVal1_2_4_6_8= NULL;
gslc_tsElemRef* m_pElemVal1_3     = NULL;
gslc_tsElemRef* m_pElemVal1_3_5   = NULL;
gslc_tsElemRef* m_pElemVal1_3_5_7 = NULL;
gslc_tsElemRef* m_pElemKeyPadNum  = NULL;
//<Save_References !End!>

// Define debug message function
static int16_t DebugOut(char ch) { if (ch == (char)'\n') Serial.println(""); else Serial.write(ch); return 0; }

// ------------------------------------------------
// Callback Methods
// ------------------------------------------------
// Common Button callback
bool CbBtnCommon(void* pvGui,void *pvElemRef,gslc_teTouch eTouch,int16_t nX,int16_t nY)
{
  // Typecast the parameters to match the GUI and element types
  gslc_tsGui*     pGui     = (gslc_tsGui*)(pvGui);
  gslc_tsElemRef* pElemRef = (gslc_tsElemRef*)(pvElemRef);
  gslc_tsElem*    pElem    = gslc_GetElemFromRef(pGui,pElemRef);

  if ( eTouch == GSLC_TOUCH_UP_IN ) {
    // From the element's ID we can determine which button was pressed.
    switch (pElem->nId) {
//<Button Enums !Start!>
      case E_ELEM_STRT_PRCESS:
        gslc_SetPageCur(&m_gui, E_PG_POPUP1);
		gslc_ElemXProgressSetVal(&m_gui, m_pElemProgress1_2_5, 69);
        break;
      case E_ELEM_CONF_PRCESS:
        gslc_SetPageCur(&m_gui, E_PG2);
        break;
      case E_ELEM_CONF_ACT_RMP:
        gslc_SetPageCur(&m_gui, E_PG3);
        break;
      case E_ELEM_CONF_PREHT:
        gslc_SetPageCur(&m_gui, E_PG6);
        break;
      case E_ELEM_CONF_REFLW:
        gslc_SetPageCur(&m_gui, E_PG9);
        break;
      case E_ELEM_CONF_BACK:
        gslc_SetPageCur(&m_gui, E_PG_MAIN);
        break;
      case E_ELEM_CONF_FAN:
        gslc_SetPageCur(&m_gui, E_PG12);
        gslc_ElemXTogglebtnSetState(&m_gui, m_pElemToggle1, getState("m_pElemToggle1"));
        gslc_ElemXTogglebtnSetState(&m_gui, m_pElemToggle1_2, getState("m_pElemToggle1_2"));
        gslc_ElemXTogglebtnSetState(&m_gui, m_pElemToggle1_2_3, getState("m_pElemToggle1_2_3"));
        break;
      case E_ELEM_ACT_RMP_SET_DUR:
        gslc_SetPageCur(&m_gui, E_PG4);
        gslc_ElemSetTxtStr(pGui, m_pElemVal1_3, std::to_string(getConfigValue("m_pElemVal1_3")).c_str());
        break;
      case E_ELEM_ACT_RMP_SET_TEMP:
        gslc_SetPageCur(&m_gui, E_PG5);
        gslc_ElemSetTxtStr(pGui, m_pElemVal1_2_4, std::to_string(getConfigValue("m_pElemVal1_2_4")).c_str());
        break;
      case E_ELEM_ACT_RMP_BACK:
        gslc_SetPageCur(&m_gui, E_PG2);
        break;
      case E_ELEM_CONF_ACT_RMP_SET_DUR_INPUT:
        // Clicked on edit field, so show popup box and associate with this text field
        gslc_ElemXKeyPadInputAsk(&m_gui, m_pElemKeyPadNum, E_POP_KEYPAD_NUM, m_pElemVal1_3);
        break;
      case E_ELEM_CONF_ACT_RMP_SET_DUR_BACK:
        gslc_SetPageCur(&m_gui, E_PG3);
        break;
      case E_ELEM_CONF_ACT_RMP_SET_TEMP_INPUT:
        // Clicked on edit field, so show popup box and associate with this text field
        gslc_ElemXKeyPadInputAsk(&m_gui, m_pElemKeyPadNum, E_POP_KEYPAD_NUM, m_pElemVal1_2_4);
        break;
      case E_ELEM_CONF_ACT_RMP_SET_TEMP_BACK:
        gslc_SetPageCur(&m_gui, E_PG3);
        break;
      case E_ELEM_PREHEAT_SET_DUR:
        gslc_SetPageCur(&m_gui, E_PG7);
        gslc_ElemSetTxtStr(pGui, m_pElemVal1_3_5, std::to_string(getConfigValue("m_pElemVal1_3_5")).c_str());
        break;
      case E_ELEM_PREHEAT_SET_TEMP:
        gslc_SetPageCur(&m_gui, E_PG8);
        gslc_ElemSetTxtStr(pGui, m_pElemVal1_2_4_6, std::to_string(getConfigValue("m_pElemVal1_2_4_6")).c_str());
        break;
      case E_ELEM_PREHEAT_BACK:
        gslc_SetPageCur(&m_gui, E_PG2);
        break;
      case E_ELEM_CONF_PREHEAT_SET_DUR_INPUT:
        // Clicked on edit field, so show popup box and associate with this text field
        gslc_ElemXKeyPadInputAsk(&m_gui, m_pElemKeyPadNum, E_POP_KEYPAD_NUM, m_pElemVal1_3_5);
        break;
      case E_ELEM_CONF_PREHEAT_SET_DUR_BACK:
        gslc_SetPageCur(&m_gui, E_PG6);
        break;
      case E_ELEM_CONF_PREHEAT_SET_TEMP_INPUT:
        // Clicked on edit field, so show popup box and associate with this text field
        gslc_ElemXKeyPadInputAsk(&m_gui, m_pElemKeyPadNum, E_POP_KEYPAD_NUM, m_pElemVal1_2_4_6);
        break;
      case E_ELEM_CONF_PREHEAT_SET_TEMP_BACK:
        gslc_SetPageCur(&m_gui, E_PG6);
        break;
      case E_ELEM_REFLOW_SET_DUR:
        gslc_SetPageCur(&m_gui, E_PG10);
        gslc_ElemSetTxtStr(pGui, m_pElemVal1_3_5_7, std::to_string(getConfigValue("m_pElemVal1_3_5_7")).c_str());
        break;
      case E_ELEM_REFLOW_SET_TEMP:
        gslc_SetPageCur(&m_gui, E_PG11);
        gslc_ElemSetTxtStr(pGui, m_pElemVal1_2_4_6_8, std::to_string(getConfigValue("m_pElemVal1_2_4_6_8")).c_str());
        break;
      case E_ELEM_REFLOW_SET_BACK:
        gslc_SetPageCur(&m_gui, E_PG2);
        break;
      case E_ELEM_CONF_REFLOW_SET_DUR_INPUT:
        // Clicked on edit field, so show popup box and associate with this text field
        gslc_ElemXKeyPadInputAsk(&m_gui, m_pElemKeyPadNum, E_POP_KEYPAD_NUM, m_pElemVal1_3_5_7);
        break;
      case E_ELEM_CONF_REFLOW_SET_DUR_BACK:
        gslc_SetPageCur(&m_gui, E_PG9);
        break;
      case E_ELEM_CONF_REFLOW_SET_TEMP_INPUT:
        // Clicked on edit field, so show popup box and associate with this text field
        gslc_ElemXKeyPadInputAsk(&m_gui, m_pElemKeyPadNum, E_POP_KEYPAD_NUM, m_pElemVal1_2_4_6_8);
        break;
      case E_ELEM_CONF_REFLOW_SET_TEMP_BACK:
        gslc_SetPageCur(&m_gui, E_PG9);
        break;
      case E_ELEM_CONF_FAN_BACK:
        gslc_SetPageCur(&m_gui, E_PG2);
        break;
      case E_ELEM_CONF_FAN_PREHEAT_TOGGLE:
    if (gslc_ElemXTogglebtnGetState(&m_gui, m_pElemToggle1)) {
        setState("m_pElemToggle1", true);
    } else {
        setState("m_pElemToggle1", false);
    }
    break;
case E_ELEM_CONF_FAN_REFLOW_TOGGLE:
    if (gslc_ElemXTogglebtnGetState(&m_gui, m_pElemToggle1_2)) {
        setState("m_pElemToggle1_2", true);
    } else {
        setState("m_pElemToggle1_2", false);
    }
    break;
case E_ELEM_CONF_FAN_COOLING_TOGGLE:
    if (gslc_ElemXTogglebtnGetState(&m_gui, m_pElemToggle1_2_3)) {
        setState("m_pElemToggle1_2_3", true);
    } else {
        setState("m_pElemToggle1_2_3", false);
    }
    break;


//<Button Enums !End!>
      default:
        break;
    }
  }
  return true;
}
//<Checkbox Callback !Start!>
//<Checkbox Callback !End!>
// KeyPad Input Ready callback
bool CbKeypad(void* pvGui, void *pvElemRef, int16_t nState, void* pvData)
{
  gslc_tsGui*     pGui     = (gslc_tsGui*)pvGui;
  gslc_tsElemRef* pElemRef = (gslc_tsElemRef*)(pvElemRef);
  gslc_tsElem*    pElem    = gslc_GetElemFromRef(pGui,pElemRef);

  // From the pvData we can get the ID element that is ready.
  int16_t nTargetElemId = gslc_ElemXKeyPadDataTargetIdGet(pGui, pvData);
  if (nState == XKEYPAD_CB_STATE_DONE) {
    // User clicked on Enter to leave popup
    // - If we have a popup active, pass the return value directly to
    //   the corresponding value field
    switch (nTargetElemId) {
//<Keypad Enums !Start!>
      case E_ELEM_CONF_ACT_RMP_SET_DUR_INPUT:
        gslc_ElemXKeyPadInputGet(pGui, m_pElemVal1_3, pvData);
        setConfigValue("m_pElemVal1_3", atoi(gslc_ElemGetTxtStr(pGui, m_pElemVal1_3)));
        gslc_PopupHide(&m_gui);
        break;
      case E_ELEM_CONF_ACT_RMP_SET_TEMP_INPUT:
        gslc_ElemXKeyPadInputGet(pGui, m_pElemVal1_2_4, pvData);
        setConfigValue("m_pElemVal1_2_4", atoi(gslc_ElemGetTxtStr(pGui, m_pElemVal1_2_4)));
        gslc_PopupHide(&m_gui);
        break;
      case E_ELEM_CONF_PREHEAT_SET_DUR_INPUT:
        gslc_ElemXKeyPadInputGet(pGui, m_pElemVal1_3_5, pvData);
        setConfigValue("m_pElemVal1_3_5", atoi(gslc_ElemGetTxtStr(pGui, m_pElemVal1_3_5)));
        gslc_PopupHide(&m_gui);
        break;
      case E_ELEM_CONF_PREHEAT_SET_TEMP_INPUT:
        gslc_ElemXKeyPadInputGet(pGui, m_pElemVal1_2_4_6, pvData);
        setConfigValue("m_pElemVal1_2_4_6", atoi(gslc_ElemGetTxtStr(pGui, m_pElemVal1_2_4_6)));
        gslc_PopupHide(&m_gui);
        break;
      case E_ELEM_CONF_REFLOW_SET_DUR_INPUT:
        gslc_ElemXKeyPadInputGet(pGui, m_pElemVal1_3_5_7, pvData);
        setConfigValue("m_pElemVal1_3_5_7", atoi(gslc_ElemGetTxtStr(pGui, m_pElemVal1_3_5_7)));
        gslc_PopupHide(&m_gui);
        break;
      case E_ELEM_CONF_REFLOW_SET_TEMP_INPUT:
        gslc_ElemXKeyPadInputGet(pGui, m_pElemVal1_2_4_6_8, pvData);
        setConfigValue("m_pElemVal1_2_4_6_8", atoi(gslc_ElemGetTxtStr(pGui, m_pElemVal1_2_4_6_8)));
        gslc_PopupHide(&m_gui);
        break;

//<Keypad Enums !End!>
      default:
        break;
    }
  } else if (nState == XKEYPAD_CB_STATE_CANCEL) {
    // User escaped from popup, so don't update values
    gslc_PopupHide(&m_gui);
  }
  return true;
}
//<Spinner Callback !Start!>
//<Spinner Callback !End!>
//<Listbox Callback !Start!>
//<Listbox Callback !End!>
//<Draw Callback !Start!>
//<Draw Callback !End!>
//<Slider Callback !Start!>
//<Slider Callback !End!>
//<Tick Callback !Start!>
//<Tick Callback !End!>



void InitGUIslice() {
  // ------------------------------------------------
  // Initialize
  // ------------------------------------------------
  Serial.begin(9600);
  // Wait for USB Serial 

  gslc_InitDebug(&DebugOut);

  // ------------------------------------------------
  // Create graphic elements
  // ------------------------------------------------
  InitGUIslice_gen();
}

void UpdateGUIslice() {  
  // ------------------------------------------------
  // Periodically call GUIslice update function
  // ------------------------------------------------
  gslc_Update(&m_gui);
    
}
