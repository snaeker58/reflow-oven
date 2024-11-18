//<File !Start!>
// FILE: [GUIslice-build_GSLC.h]
// Created by GUIslice Builder version: [0.17.b34]
//
// GUIslice Builder Generated GUI Framework File
//
// For the latest guides, updates and support view:
// https://github.com/ImpulseAdventure/GUIslice
//
//<File !End!>

#ifndef _GUISLICE_GEN_H
#define _GUISLICE_GEN_H

// ------------------------------------------------
// Headers to include
// ------------------------------------------------
#include "GUIslice.h"
#include "GUIslice_drv.h"

// Include any extended elements
//<Includes !Start!>
// Include extended elements
#include "elem/XGraph.h"
#include "elem/XKeyPad_Num.h"
#include "elem/XProgress.h"
#include "elem/XTogglebtn.h"

// Ensure optional features are enabled in the configuration
//<Includes !End!>

// ------------------------------------------------
// Headers and Defines for fonts
// Note that font files are located within the Adafruit-GFX library folder:
// ------------------------------------------------
//<Fonts !Start!>
#if !defined(DRV_DISP_TFT_ESPI)
  #error E_PROJECT_OPTIONS tab->Graphics Library should be Adafruit_GFX
#endif
#include <TFT_eSPI.h>
#include "NotoSans10pt7b.h"
#include "NotoSans12pt7b.h"
#include "NotoSans18pt7b.h"
#include "warn_183x165.c"
//<Fonts !End!>

// ------------------------------------------------
// Enumerations for pages, elements, fonts, images
// ------------------------------------------------
//<Enum !Start!>
enum {E_PG_MAIN,E_PG2,E_PG3,E_PG4,E_PG5,E_PG6,E_PG7,E_PG8,E_PG9,E_PG10
      ,E_PG11,E_PG12,E_PG13,E_PG_POPUP1,E_POP_KEYPAD_NUM};
enum {E_ELEM_ACT_RMP_BACK,E_ELEM_ACT_RMP_SET_DUR
      ,E_ELEM_ACT_RMP_SET_TEMP,E_ELEM_ACT_RMP_TITLE,E_ELEM_CONF_ACT_RMP
      ,E_ELEM_CONF_ACT_RMP_SET_DUR_BACK,E_ELEM_CONF_ACT_RMP_SET_DUR_BOX
      ,E_ELEM_CONF_ACT_RMP_SET_DUR_INPUT
      ,E_ELEM_CONF_ACT_RMP_SET_DUR_TITLE
      ,E_ELEM_CONF_ACT_RMP_SET_DUR_UNIT
      ,E_ELEM_CONF_ACT_RMP_SET_TEMP_BACK
      ,E_ELEM_CONF_ACT_RMP_SET_TEMP_BOX
      ,E_ELEM_CONF_ACT_RMP_SET_TEMP_INPUT
      ,E_ELEM_CONF_ACT_RMP_SET_TEMP_TITLE
      ,E_ELEM_CONF_ACT_RMP_SET_TEMP_UNIT,E_ELEM_CONF_BACK
      ,E_ELEM_CONF_FAN,E_ELEM_CONF_FAN_BACK
      ,E_ELEM_CONF_FAN_COOLING_TEXT,E_ELEM_CONF_FAN_COOLING_TOGGLE
      ,E_ELEM_CONF_FAN_PREHEAT_TEXT,E_ELEM_CONF_FAN_PREHEAT_TOGGLE
      ,E_ELEM_CONF_FAN_PREHEAT_TOGGLE_BOX,E_ELEM_CONF_FAN_REFLOW_TEXT
      ,E_ELEM_CONF_FAN_REFLOW_TOGGLE,E_ELEM_CONF_FAN_REFLOW_TOGGLE_BOX
      ,E_ELEM_CONF_FAN_TITLE,E_ELEM_CONF_PRCESS
      ,E_ELEM_CONF_PREHEAT_SET_DUR_BACK,E_ELEM_CONF_PREHEAT_SET_DUR_BOX
      ,E_ELEM_CONF_PREHEAT_SET_DUR_INPUT
      ,E_ELEM_CONF_PREHEAT_SET_DUR_TITLE
      ,E_ELEM_CONF_PREHEAT_SET_DUR_UNIT
      ,E_ELEM_CONF_PREHEAT_SET_TEMP_BACK
      ,E_ELEM_CONF_PREHEAT_SET_TEMP_BOX
      ,E_ELEM_CONF_PREHEAT_SET_TEMP_INPUT
      ,E_ELEM_CONF_PREHEAT_SET_TEMP_TITLE
      ,E_ELEM_CONF_PREHEAT_SET_TEMP_UNIT,E_ELEM_CONF_PREHT
      ,E_ELEM_CONF_REFLOW_SET_DUR_BACK,E_ELEM_CONF_REFLOW_SET_DUR_BOX
      ,E_ELEM_CONF_REFLOW_SET_DUR_INPUT
      ,E_ELEM_CONF_REFLOW_SET_DUR_TITLE,E_ELEM_CONF_REFLOW_SET_DUR_UNIT
      ,E_ELEM_CONF_REFLOW_SET_TEMP_BACK,E_ELEM_CONF_REFLOW_SET_TEMP_BOX
      ,E_ELEM_CONF_REFLOW_SET_TEMP_INPUT
      ,E_ELEM_CONF_REFLOW_SET_TEMP_TITLE
      ,E_ELEM_CONF_REFLOW_SET_TEMP_UNIT,E_ELEM_CONF_REFLW
      ,E_ELEM_CONF_TITLE,E_ELEM_MAIN_TITLE,E_ELEM_PREHEAT_BACK
      ,E_ELEM_PREHEAT_SET_DUR,E_ELEM_PREHEAT_SET_TEMP
      ,E_ELEM_PREHEAT_TITLE,E_ELEM_PROCESS_ACT_RMP_PROGRESS
      ,E_ELEM_PROCESS_BOX,E_ELEM_PROCESS_CURRENT_TEMP
      ,E_ELEM_PROCESS_CURRENT_TEMP_VAL,E_ELEM_PROCESS_ELAPSED_TIME
      ,E_ELEM_PROCESS_ELAPSED_TIME_VAL,E_ELEM_PROCESS_GRAPH
      ,E_ELEM_PROCESS_PREHEAT_PROGRESS,E_ELEM_PROCESS_REFLOW_PROGRESS
      ,E_ELEM_PROCESS_TARGET_TEMP,E_ELEM_PROCESS_TARGET_TEMP_VAL
      ,E_ELEM_PROCESS_TARGET_TIME,E_ELEM_PROCESS_TARGET_TIME_VAL
      ,E_ELEM_PROCESS_TITLE,E_ELEM_REFLOW_SET_BACK
      ,E_ELEM_REFLOW_SET_DUR,E_ELEM_REFLOW_SET_TEMP,E_ELEM_REFLOW_TITLE
      ,E_ELEM_SONF_FAN_COOLING_TOGGLE_BOX,E_ELEM_STRT_PRCESS
      ,E_WARN_HOT_EDGE1,E_WARN_HOT_EDGE2,E_WARN_HOT_EDGE3
      ,E_WARN_HOT_EDGE4,E_WARN_HOT_PROGRESS,E_WARN_HOT_SYMBOL
      ,E_WARN_HOT_TEXT_WAIT,E_WARN_HOT_TITLE,E_ELEM_KEYPAD_NUM};
// Must use separate enum for fonts with MAX_FONT at end to use gslc_FontSet.
enum {E_BUILTIN5X8,E_NOTOSANS10,E_NOTOSANS12,E_NOTOSANS18,MAX_FONT};
//<Enum !End!>

// ------------------------------------------------
// Instantiate the GUI
// ------------------------------------------------

// ------------------------------------------------
// Define the maximum number of elements and pages
// ------------------------------------------------
//<ElementDefines !Start!>
#define MAX_PAGE                15
// Define the maximum number of elements per page
// - To enable the same code to run on devices that support storing
//   data into Flash (PROGMEM) and those that don't, we can make the
//   number of elements in Flash dependent upon GSLC_USE_PROGMEM
// - This should allow both Arduino and ARM Cortex to use the same code.

#define MAX_ELEM_PG_MAIN 3 // # Elems total on page
#if (GSLC_USE_PROGMEM)
  #define MAX_ELEM_PG_MAIN_PROG 3 // # Elems in Flash
#else
  #define MAX_ELEM_PG_MAIN_PROG 0 // No Elems in Flash
#endif
#define MAX_ELEM_PG_MAIN_RAM MAX_ELEM_PG_MAIN - MAX_ELEM_PG_MAIN_PROG 

#define MAX_ELEM_PG2 6 // # Elems total on page
#if (GSLC_USE_PROGMEM)
  #define MAX_ELEM_PG2_PROG 6 // # Elems in Flash
#else
  #define MAX_ELEM_PG2_PROG 0 // No Elems in Flash
#endif
#define MAX_ELEM_PG2_RAM MAX_ELEM_PG2 - MAX_ELEM_PG2_PROG 

#define MAX_ELEM_PG3 4 // # Elems total on page
#if (GSLC_USE_PROGMEM)
  #define MAX_ELEM_PG3_PROG 4 // # Elems in Flash
#else
  #define MAX_ELEM_PG3_PROG 0 // No Elems in Flash
#endif
#define MAX_ELEM_PG3_RAM MAX_ELEM_PG3 - MAX_ELEM_PG3_PROG 

#define MAX_ELEM_PG4 5 // # Elems total on page
#if (GSLC_USE_PROGMEM)
  #define MAX_ELEM_PG4_PROG 5 // # Elems in Flash
#else
  #define MAX_ELEM_PG4_PROG 0 // No Elems in Flash
#endif
#define MAX_ELEM_PG4_RAM MAX_ELEM_PG4 - MAX_ELEM_PG4_PROG 

#define MAX_ELEM_PG5 5 // # Elems total on page
#if (GSLC_USE_PROGMEM)
  #define MAX_ELEM_PG5_PROG 5 // # Elems in Flash
#else
  #define MAX_ELEM_PG5_PROG 0 // No Elems in Flash
#endif
#define MAX_ELEM_PG5_RAM MAX_ELEM_PG5 - MAX_ELEM_PG5_PROG 

#define MAX_ELEM_PG6 4 // # Elems total on page
#if (GSLC_USE_PROGMEM)
  #define MAX_ELEM_PG6_PROG 4 // # Elems in Flash
#else
  #define MAX_ELEM_PG6_PROG 0 // No Elems in Flash
#endif
#define MAX_ELEM_PG6_RAM MAX_ELEM_PG6 - MAX_ELEM_PG6_PROG 

#define MAX_ELEM_PG7 5 // # Elems total on page
#if (GSLC_USE_PROGMEM)
  #define MAX_ELEM_PG7_PROG 5 // # Elems in Flash
#else
  #define MAX_ELEM_PG7_PROG 0 // No Elems in Flash
#endif
#define MAX_ELEM_PG7_RAM MAX_ELEM_PG7 - MAX_ELEM_PG7_PROG 

#define MAX_ELEM_PG8 5 // # Elems total on page
#if (GSLC_USE_PROGMEM)
  #define MAX_ELEM_PG8_PROG 5 // # Elems in Flash
#else
  #define MAX_ELEM_PG8_PROG 0 // No Elems in Flash
#endif
#define MAX_ELEM_PG8_RAM MAX_ELEM_PG8 - MAX_ELEM_PG8_PROG 

#define MAX_ELEM_PG9 4 // # Elems total on page
#if (GSLC_USE_PROGMEM)
  #define MAX_ELEM_PG9_PROG 4 // # Elems in Flash
#else
  #define MAX_ELEM_PG9_PROG 0 // No Elems in Flash
#endif
#define MAX_ELEM_PG9_RAM MAX_ELEM_PG9 - MAX_ELEM_PG9_PROG 

#define MAX_ELEM_PG10 5 // # Elems total on page
#if (GSLC_USE_PROGMEM)
  #define MAX_ELEM_PG10_PROG 5 // # Elems in Flash
#else
  #define MAX_ELEM_PG10_PROG 0 // No Elems in Flash
#endif
#define MAX_ELEM_PG10_RAM MAX_ELEM_PG10 - MAX_ELEM_PG10_PROG 

#define MAX_ELEM_PG11 5 // # Elems total on page
#if (GSLC_USE_PROGMEM)
  #define MAX_ELEM_PG11_PROG 5 // # Elems in Flash
#else
  #define MAX_ELEM_PG11_PROG 0 // No Elems in Flash
#endif
#define MAX_ELEM_PG11_RAM MAX_ELEM_PG11 - MAX_ELEM_PG11_PROG 

#define MAX_ELEM_PG12 11 // # Elems total on page
#if (GSLC_USE_PROGMEM)
  #define MAX_ELEM_PG12_PROG 8 // # Elems in Flash
#else
  #define MAX_ELEM_PG12_PROG 0 // No Elems in Flash
#endif
#define MAX_ELEM_PG12_RAM MAX_ELEM_PG12 - MAX_ELEM_PG12_PROG 

#define MAX_ELEM_PG13 14 // # Elems total on page
#if (GSLC_USE_PROGMEM)
  #define MAX_ELEM_PG13_PROG 6 // # Elems in Flash
#else
  #define MAX_ELEM_PG13_PROG 0 // No Elems in Flash
#endif
#define MAX_ELEM_PG13_RAM MAX_ELEM_PG13 - MAX_ELEM_PG13_PROG 

#define MAX_ELEM_PG_POPUP1 8 // # Elems total on page
#if (GSLC_USE_PROGMEM)
  #define MAX_ELEM_PG_POPUP1_PROG 6 // # Elems in Flash
#else
  #define MAX_ELEM_PG_POPUP1_PROG 0 // No Elems in Flash
#endif
#define MAX_ELEM_PG_POPUP1_RAM MAX_ELEM_PG_POPUP1 - MAX_ELEM_PG_POPUP1_PROG 
//<ElementDefines !End!>

// ------------------------------------------------
// Create element storage
// ------------------------------------------------
gslc_tsGui                      m_gui;
gslc_tsDriver                   m_drv;
gslc_tsFont                     m_asFont[MAX_FONT];
gslc_tsPage                     m_asPage[MAX_PAGE];

//<GUI_Extra_Elements !Start!>
gslc_tsElem                     m_asPage1Elem[MAX_ELEM_PG_MAIN_RAM];
gslc_tsElemRef                  m_asPage1ElemRef[MAX_ELEM_PG_MAIN];
gslc_tsElem                     m_asPage2Elem[MAX_ELEM_PG2_RAM];
gslc_tsElemRef                  m_asPage2ElemRef[MAX_ELEM_PG2];
gslc_tsElem                     m_asPage3Elem[MAX_ELEM_PG3_RAM];
gslc_tsElemRef                  m_asPage3ElemRef[MAX_ELEM_PG3];
gslc_tsElem                     m_asPage4Elem[MAX_ELEM_PG4_RAM];
gslc_tsElemRef                  m_asPage4ElemRef[MAX_ELEM_PG4];
gslc_tsElem                     m_asPage5Elem[MAX_ELEM_PG5_RAM];
gslc_tsElemRef                  m_asPage5ElemRef[MAX_ELEM_PG5];
gslc_tsElem                     m_asPage6Elem[MAX_ELEM_PG6_RAM];
gslc_tsElemRef                  m_asPage6ElemRef[MAX_ELEM_PG6];
gslc_tsElem                     m_asPage7Elem[MAX_ELEM_PG7_RAM];
gslc_tsElemRef                  m_asPage7ElemRef[MAX_ELEM_PG7];
gslc_tsElem                     m_asPage8Elem[MAX_ELEM_PG8_RAM];
gslc_tsElemRef                  m_asPage8ElemRef[MAX_ELEM_PG8];
gslc_tsElem                     m_asPage9Elem[MAX_ELEM_PG9_RAM];
gslc_tsElemRef                  m_asPage9ElemRef[MAX_ELEM_PG9];
gslc_tsElem                     m_asPage10Elem[MAX_ELEM_PG10_RAM];
gslc_tsElemRef                  m_asPage10ElemRef[MAX_ELEM_PG10];
gslc_tsElem                     m_asPage11Elem[MAX_ELEM_PG11_RAM];
gslc_tsElemRef                  m_asPage11ElemRef[MAX_ELEM_PG11];
gslc_tsElem                     m_asPage12Elem[MAX_ELEM_PG12_RAM];
gslc_tsElemRef                  m_asPage12ElemRef[MAX_ELEM_PG12];
gslc_tsElem                     m_asPage13Elem[MAX_ELEM_PG13_RAM];
gslc_tsElemRef                  m_asPage13ElemRef[MAX_ELEM_PG13];
gslc_tsElem                     m_asPopup1Elem[MAX_ELEM_PG_POPUP1_RAM];
gslc_tsElemRef                  m_asPopup1ElemRef[MAX_ELEM_PG_POPUP1];
gslc_tsElem                     m_asKeypadNumElem[1];
gslc_tsElemRef                  m_asKeypadNumElemRef[1];
gslc_tsXKeyPad                  m_sKeyPadNum;
gslc_tsXTogglebtn               m_asXToggle1;
gslc_tsXTogglebtn               m_asXToggle2;
gslc_tsXTogglebtn               m_asXToggle3;
gslc_tsXGraph                   m_sGraph1;
int16_t                         m_anGraphBuf1[20]; // NRows=20
gslc_tsXProgress                m_sXBarGauge1;
gslc_tsXProgress                m_sXBarGauge2;
gslc_tsXProgress                m_sXBarGauge3;
gslc_tsXProgress                m_sXBarGauge5;

#define MAX_STR                 100

//<GUI_Extra_Elements !End!>

// ------------------------------------------------
// Program Globals
// ------------------------------------------------

// Element References for direct access
//<Extern_References !Start!>
extern gslc_tsElemRef* m_pElemGraph1;
extern gslc_tsElemRef* m_pElemProgress1;
extern gslc_tsElemRef* m_pElemProgress1_2;
extern gslc_tsElemRef* m_pElemProgress1_2_5;
extern gslc_tsElemRef* m_pElemProgress1_3;
extern gslc_tsElemRef* m_pElemToggle1;
extern gslc_tsElemRef* m_pElemToggle1_2;
extern gslc_tsElemRef* m_pElemToggle1_2_3;
extern gslc_tsElemRef* m_pElemVal1_2_4;
extern gslc_tsElemRef* m_pElemVal1_2_4_6;
extern gslc_tsElemRef* m_pElemVal1_2_4_6_8;
extern gslc_tsElemRef* m_pElemVal1_3;
extern gslc_tsElemRef* m_pElemVal1_3_5;
extern gslc_tsElemRef* m_pElemVal1_3_5_7;
extern gslc_tsElemRef* m_pElemKeyPadNum;
//<Extern_References !End!>

// Define debug message function
static int16_t DebugOut(char ch);

// ------------------------------------------------
// Callback Methods
// ------------------------------------------------
bool CbBtnCommon(void* pvGui,void *pvElemRef,gslc_teTouch eTouch,int16_t nX,int16_t nY);
bool CbCheckbox(void* pvGui, void* pvElemRef, int16_t nSelId, bool bState);
bool CbDrawScanner(void* pvGui,void* pvElemRef,gslc_teRedrawType eRedraw);
bool CbKeypad(void* pvGui, void *pvElemRef, int16_t nState, void* pvData);
bool CbListbox(void* pvGui, void* pvElemRef, int16_t nSelId);
bool CbSlidePos(void* pvGui,void* pvElemRef,int16_t nPos);
bool CbSpinner(void* pvGui, void *pvElemRef, int16_t nState, void* pvData);
bool CbTickScanner(void* pvGui,void* pvScope);

// ------------------------------------------------
// Create page elements
// ------------------------------------------------
void InitGUIslice_gen()
{
  gslc_tsElemRef* pElemRef = NULL;

  if (!gslc_Init(&m_gui,&m_drv,m_asPage,MAX_PAGE,m_asFont,MAX_FONT)) { return; }

  // ------------------------------------------------
  // Load Fonts
  // ------------------------------------------------
//<Load_Fonts !Start!>
    if (!gslc_FontSet(&m_gui,E_BUILTIN5X8,GSLC_FONTREF_PTR,NULL,1)) { return; }
    if (!gslc_FontSet(&m_gui,E_NOTOSANS10,GSLC_FONTREF_PTR,&NotoSans10pt7b,1)) { return; }
    if (!gslc_FontSet(&m_gui,E_NOTOSANS12,GSLC_FONTREF_PTR,&NotoSans12pt7b,1)) { return; }
    if (!gslc_FontSet(&m_gui,E_NOTOSANS18,GSLC_FONTREF_PTR,&NotoSans18pt7b,1)) { return; }
//<Load_Fonts !End!>

//<InitGUI !Start!>
  gslc_PageAdd(&m_gui,E_PG_MAIN,m_asPage1Elem,MAX_ELEM_PG_MAIN_RAM,m_asPage1ElemRef,MAX_ELEM_PG_MAIN);
  gslc_PageAdd(&m_gui,E_PG2,m_asPage2Elem,MAX_ELEM_PG2_RAM,m_asPage2ElemRef,MAX_ELEM_PG2);
  gslc_PageAdd(&m_gui,E_PG3,m_asPage3Elem,MAX_ELEM_PG3_RAM,m_asPage3ElemRef,MAX_ELEM_PG3);
  gslc_PageAdd(&m_gui,E_PG4,m_asPage4Elem,MAX_ELEM_PG4_RAM,m_asPage4ElemRef,MAX_ELEM_PG4);
  gslc_PageAdd(&m_gui,E_PG5,m_asPage5Elem,MAX_ELEM_PG5_RAM,m_asPage5ElemRef,MAX_ELEM_PG5);
  gslc_PageAdd(&m_gui,E_PG6,m_asPage6Elem,MAX_ELEM_PG6_RAM,m_asPage6ElemRef,MAX_ELEM_PG6);
  gslc_PageAdd(&m_gui,E_PG7,m_asPage7Elem,MAX_ELEM_PG7_RAM,m_asPage7ElemRef,MAX_ELEM_PG7);
  gslc_PageAdd(&m_gui,E_PG8,m_asPage8Elem,MAX_ELEM_PG8_RAM,m_asPage8ElemRef,MAX_ELEM_PG8);
  gslc_PageAdd(&m_gui,E_PG9,m_asPage9Elem,MAX_ELEM_PG9_RAM,m_asPage9ElemRef,MAX_ELEM_PG9);
  gslc_PageAdd(&m_gui,E_PG10,m_asPage10Elem,MAX_ELEM_PG10_RAM,m_asPage10ElemRef,MAX_ELEM_PG10);
  gslc_PageAdd(&m_gui,E_PG11,m_asPage11Elem,MAX_ELEM_PG11_RAM,m_asPage11ElemRef,MAX_ELEM_PG11);
  gslc_PageAdd(&m_gui,E_PG12,m_asPage12Elem,MAX_ELEM_PG12_RAM,m_asPage12ElemRef,MAX_ELEM_PG12);
  gslc_PageAdd(&m_gui,E_PG13,m_asPage13Elem,MAX_ELEM_PG13_RAM,m_asPage13ElemRef,MAX_ELEM_PG13);
  gslc_PageAdd(&m_gui,E_PG_POPUP1,m_asPopup1Elem,MAX_ELEM_PG_POPUP1_RAM,m_asPopup1ElemRef,MAX_ELEM_PG_POPUP1);
  gslc_PageAdd(&m_gui,E_POP_KEYPAD_NUM,m_asKeypadNumElem,1,m_asKeypadNumElemRef,1);  // KeyPad

  // NOTE: The current page defaults to the first page added. Here we explicitly
  //       ensure that the main page is the correct page no matter the add order.
  gslc_SetPageCur(&m_gui,E_PG_POPUP1);
  
  // Set Background to a flat color
  gslc_SetBkgndColor(&m_gui,GSLC_COL_GRAY_DK2);

  // -----------------------------------
  // PAGE: E_PG_MAIN
  
  
  // Create E_ELEM_MAIN_TITLE text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_MAIN_TITLE,E_PG_MAIN,31,10,258,27,
    "KES Reflow Oven",&m_asFont[E_NOTOSANS18],
    GSLC_COL_WHITE,GSLC_COL_GRAY_DK2,GSLC_COL_GRAY_DK2,GSLC_ALIGN_MID_MID,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  
  // create E_ELEM_STRT_PRCESS button with text label
  gslc_ElemCreateBtnTxt_P(&m_gui,E_ELEM_STRT_PRCESS,E_PG_MAIN,10,67,300,75,
    "Start Process",&m_asFont[E_NOTOSANS12],
    GSLC_COL_WHITE,GSLC_COL_GREEN_DK3,GSLC_COL_GREEN_DK3,GSLC_COL_GREEN_DK3,
    GSLC_COL_GREEN_DK4,GSLC_ALIGN_MID_MID,true,true,&CbBtnCommon,NULL);
  
  // create E_ELEM_CONF_PRCESS button with text label
  gslc_ElemCreateBtnTxt_P(&m_gui,E_ELEM_CONF_PRCESS,E_PG_MAIN,10,162,300,75,
    "Configure Process",&m_asFont[E_NOTOSANS12],
    GSLC_COL_WHITE,GSLC_COL_GRAY_DK1,GSLC_COL_GRAY_DK1,GSLC_COL_GRAY_DK1,
    ((gslc_tsColor){79,79,79}),GSLC_ALIGN_MID_MID,true,true,&CbBtnCommon,NULL);

  // -----------------------------------
  // PAGE: E_PG2
  
  
  // Create E_ELEM_CONF_TITLE text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_CONF_TITLE,E_PG2,53,10,213,35,
    "Configuration",&m_asFont[E_NOTOSANS18],
    GSLC_COL_WHITE,GSLC_COL_GRAY_DK2,GSLC_COL_GRAY_DK2,GSLC_ALIGN_MID_MID,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  
  // create E_ELEM_CONF_ACT_RMP button with text label
  gslc_ElemCreateBtnTxt_P(&m_gui,E_ELEM_CONF_ACT_RMP,E_PG2,10,67,300,75,
    "Configure Activation Ramp",&m_asFont[E_NOTOSANS12],
    GSLC_COL_WHITE,GSLC_COL_GRAY_DK1,GSLC_COL_GRAY_DK1,GSLC_COL_GRAY_DK1,
    ((gslc_tsColor){79,79,79}),GSLC_ALIGN_MID_MID,true,true,&CbBtnCommon,NULL);
  
  // create E_ELEM_CONF_PREHT button with text label
  gslc_ElemCreateBtnTxt_P(&m_gui,E_ELEM_CONF_PREHT,E_PG2,10,162,300,75,
    "Configure Preheat",&m_asFont[E_NOTOSANS12],
    GSLC_COL_WHITE,GSLC_COL_GRAY_DK1,GSLC_COL_GRAY_DK1,GSLC_COL_GRAY_DK1,
    ((gslc_tsColor){79,79,79}),GSLC_ALIGN_MID_MID,true,true,&CbBtnCommon,NULL);
  
  // create E_ELEM_CONF_REFLW button with text label
  gslc_ElemCreateBtnTxt_P(&m_gui,E_ELEM_CONF_REFLW,E_PG2,10,257,300,75,
    "Configure Reflow",&m_asFont[E_NOTOSANS12],
    GSLC_COL_WHITE,GSLC_COL_GRAY_DK1,GSLC_COL_GRAY_DK1,GSLC_COL_GRAY_DK1,
    ((gslc_tsColor){79,79,79}),GSLC_ALIGN_MID_MID,true,true,&CbBtnCommon,NULL);
  
  // create E_ELEM_CONF_BACK button with text label
  gslc_ElemCreateBtnTxt_P(&m_gui,E_ELEM_CONF_BACK,E_PG2,10,352,145,75,
    "Back",&m_asFont[E_NOTOSANS12],
    GSLC_COL_WHITE,GSLC_COL_RED_DK2,GSLC_COL_RED_DK2,GSLC_COL_RED_DK2,
    GSLC_COL_RED_DK3,GSLC_ALIGN_MID_MID,true,true,&CbBtnCommon,NULL);
  
  // create E_ELEM_CONF_FAN button with text label
  gslc_ElemCreateBtnTxt_P(&m_gui,E_ELEM_CONF_FAN,E_PG2,165,352,145,75,
    "Fan",&m_asFont[E_NOTOSANS12],
    GSLC_COL_WHITE,GSLC_COL_GRAY_DK1,GSLC_COL_GRAY_DK1,GSLC_COL_GRAY_DK1,
    ((gslc_tsColor){79,79,79}),GSLC_ALIGN_MID_MID,true,true,&CbBtnCommon,NULL);

  // -----------------------------------
  // PAGE: E_PG3
  
  
  // Create E_ELEM_ACT_RMP_TITLE text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_ACT_RMP_TITLE,E_PG3,32,10,255,34,
    "Activation Ramp",&m_asFont[E_NOTOSANS18],
    GSLC_COL_WHITE,GSLC_COL_GRAY_DK2,GSLC_COL_GRAY_DK2,GSLC_ALIGN_MID_MID,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  
  // create E_ELEM_ACT_RMP_SET_DUR button with text label
  gslc_ElemCreateBtnTxt_P(&m_gui,E_ELEM_ACT_RMP_SET_DUR,E_PG3,10,67,300,75,
    "Set Duration",&m_asFont[E_NOTOSANS12],
    GSLC_COL_WHITE,GSLC_COL_GRAY_DK1,GSLC_COL_GRAY_DK1,GSLC_COL_GRAY_DK1,
    ((gslc_tsColor){79,79,79}),GSLC_ALIGN_MID_MID,true,true,&CbBtnCommon,NULL);
  
  // create E_ELEM_ACT_RMP_SET_TEMP button with text label
  gslc_ElemCreateBtnTxt_P(&m_gui,E_ELEM_ACT_RMP_SET_TEMP,E_PG3,10,162,300,75,
    "Set Ramp Peak Temp",&m_asFont[E_NOTOSANS12],
    GSLC_COL_WHITE,GSLC_COL_GRAY_DK1,GSLC_COL_GRAY_DK1,GSLC_COL_GRAY_DK1,
    ((gslc_tsColor){79,79,79}),GSLC_ALIGN_MID_MID,true,true,&CbBtnCommon,NULL);
  
  // create E_ELEM_ACT_RMP_BACK button with text label
  gslc_ElemCreateBtnTxt_P(&m_gui,E_ELEM_ACT_RMP_BACK,E_PG3,10,352,300,75,
    "Back",&m_asFont[E_NOTOSANS12],
    GSLC_COL_WHITE,GSLC_COL_RED_DK2,GSLC_COL_RED_DK2,GSLC_COL_RED_DK2,
    GSLC_COL_RED_DK3,GSLC_ALIGN_MID_MID,true,true,&CbBtnCommon,NULL);

  // -----------------------------------
  // PAGE: E_PG4
  
  
  // Create E_ELEM_CONF_ACT_RMP_SET_DUR_TITLE text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_CONF_ACT_RMP_SET_DUR_TITLE,E_PG4,63,10,193,26,
    "Set Duration",&m_asFont[E_NOTOSANS18],
    GSLC_COL_WHITE,GSLC_COL_GRAY_DK2,GSLC_COL_GRAY_DK2,GSLC_ALIGN_MID_MID,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
   
  // Create E_ELEM_CONF_ACT_RMP_SET_DUR_BOX box in flash
  gslc_ElemCreateBox_P(&m_gui,E_ELEM_CONF_ACT_RMP_SET_DUR_BOX,E_PG4,10,82,300,75,
    GSLC_COL_GRAY_DK1,GSLC_COL_GRAY_DK1,false,true,NULL,NULL);
  
  // Create E_ELEM_CONF_ACT_RMP_SET_DUR_INPUT numeric input field
  static char m_sInputNumber3[4] = "";
  gslc_ElemCreateTxt_P_R_ext(&m_gui,E_ELEM_CONF_ACT_RMP_SET_DUR_INPUT,E_PG4,129,107,63,27,
    m_sInputNumber3,4,&m_asFont[E_NOTOSANS18],
    GSLC_COL_WHITE,GSLC_COL_WHITE,GSLC_COL_GRAY_DK1,GSLC_COL_GRAY_DK1,GSLC_ALIGN_MID_MID,5,5,
    true,true,true,false,NULL,NULL,&CbBtnCommon,NULL);
  m_pElemVal1_3 = gslc_PageFindElemById(&m_gui,E_PG4,E_ELEM_CONF_ACT_RMP_SET_DUR_INPUT);
  
  // Create E_ELEM_CONF_ACT_RMP_SET_DUR_UNIT text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_CONF_ACT_RMP_SET_DUR_UNIT,E_PG4,190,113,18,19,
    "s",&m_asFont[E_NOTOSANS18],
    GSLC_COL_WHITE,GSLC_COL_GRAY,GSLC_COL_GRAY,GSLC_ALIGN_MID_MID,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  
  // create E_ELEM_CONF_ACT_RMP_SET_DUR_BACK button with text label
  gslc_ElemCreateBtnTxt_P(&m_gui,E_ELEM_CONF_ACT_RMP_SET_DUR_BACK,E_PG4,10,352,300,75,
    "Back",&m_asFont[E_NOTOSANS12],
    GSLC_COL_WHITE,GSLC_COL_RED_DK2,GSLC_COL_RED_DK2,GSLC_COL_RED_DK2,
    GSLC_COL_RED_DK3,GSLC_ALIGN_MID_MID,true,true,&CbBtnCommon,NULL);

  // -----------------------------------
  // PAGE: E_PG5
  
  
  // Create E_ELEM_CONF_ACT_RMP_SET_TEMP_TITLE text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_CONF_ACT_RMP_SET_TEMP_TITLE,E_PG5,46,10,228,34,
    "Set Peak Temp",&m_asFont[E_NOTOSANS18],
    GSLC_COL_WHITE,GSLC_COL_GRAY_DK2,GSLC_COL_GRAY_DK2,GSLC_ALIGN_MID_MID,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
   
  // Create E_ELEM_CONF_ACT_RMP_SET_TEMP_BOX box in flash
  gslc_ElemCreateBox_P(&m_gui,E_ELEM_CONF_ACT_RMP_SET_TEMP_BOX,E_PG5,10,82,300,75,
    GSLC_COL_GRAY_DK1,GSLC_COL_GRAY_DK1,false,true,NULL,NULL);
  
  // Create E_ELEM_CONF_ACT_RMP_SET_TEMP_INPUT numeric input field
  static char m_sInputNumber4[4] = "";
  gslc_ElemCreateTxt_P_R_ext(&m_gui,E_ELEM_CONF_ACT_RMP_SET_TEMP_INPUT,E_PG5,129,107,63,27,
    m_sInputNumber4,4,&m_asFont[E_NOTOSANS18],
    GSLC_COL_WHITE,GSLC_COL_WHITE,GSLC_COL_GRAY_DK1,GSLC_COL_GRAY_DK1,GSLC_ALIGN_MID_MID,5,5,
    true,true,true,false,NULL,NULL,&CbBtnCommon,NULL);
  m_pElemVal1_2_4 = gslc_PageFindElemById(&m_gui,E_PG5,E_ELEM_CONF_ACT_RMP_SET_TEMP_INPUT);
  
  // Create E_ELEM_CONF_ACT_RMP_SET_TEMP_UNIT text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_CONF_ACT_RMP_SET_TEMP_UNIT,E_PG5,190,108,18,25,
    "C",&m_asFont[E_NOTOSANS18],
    GSLC_COL_WHITE,GSLC_COL_GRAY,GSLC_COL_GRAY,GSLC_ALIGN_MID_MID,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  
  // create E_ELEM_CONF_ACT_RMP_SET_TEMP_BACK button with text label
  gslc_ElemCreateBtnTxt_P(&m_gui,E_ELEM_CONF_ACT_RMP_SET_TEMP_BACK,E_PG5,10,352,300,75,
    "Back",&m_asFont[E_NOTOSANS12],
    GSLC_COL_WHITE,GSLC_COL_RED_DK2,GSLC_COL_RED_DK2,GSLC_COL_RED_DK2,
    GSLC_COL_RED_DK3,GSLC_ALIGN_MID_MID,true,true,&CbBtnCommon,NULL);

  // -----------------------------------
  // PAGE: E_PG6
  
  
  // Create E_ELEM_PREHEAT_TITLE text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_PREHEAT_TITLE,E_PG6,100,10,120,26,
    "Preheat",&m_asFont[E_NOTOSANS18],
    GSLC_COL_WHITE,GSLC_COL_GRAY_DK2,GSLC_COL_GRAY_DK2,GSLC_ALIGN_MID_MID,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  
  // create E_ELEM_PREHEAT_SET_DUR button with text label
  gslc_ElemCreateBtnTxt_P(&m_gui,E_ELEM_PREHEAT_SET_DUR,E_PG6,10,67,300,75,
    "Set Duration",&m_asFont[E_NOTOSANS12],
    GSLC_COL_WHITE,GSLC_COL_GRAY_DK1,GSLC_COL_GRAY_DK1,GSLC_COL_GRAY_DK1,
    ((gslc_tsColor){79,79,79}),GSLC_ALIGN_MID_MID,true,true,&CbBtnCommon,NULL);
  
  // create E_ELEM_PREHEAT_SET_TEMP button with text label
  gslc_ElemCreateBtnTxt_P(&m_gui,E_ELEM_PREHEAT_SET_TEMP,E_PG6,10,162,300,75,
    "Set Preheat Temp",&m_asFont[E_NOTOSANS12],
    GSLC_COL_WHITE,GSLC_COL_GRAY_DK1,GSLC_COL_GRAY_DK1,GSLC_COL_GRAY_DK1,
    ((gslc_tsColor){79,79,79}),GSLC_ALIGN_MID_MID,true,true,&CbBtnCommon,NULL);
  
  // create E_ELEM_PREHEAT_BACK button with text label
  gslc_ElemCreateBtnTxt_P(&m_gui,E_ELEM_PREHEAT_BACK,E_PG6,10,352,300,75,
    "Back",&m_asFont[E_NOTOSANS12],
    GSLC_COL_WHITE,GSLC_COL_RED_DK2,GSLC_COL_RED_DK2,GSLC_COL_RED_DK2,
    GSLC_COL_RED_DK3,GSLC_ALIGN_MID_MID,true,true,&CbBtnCommon,NULL);

  // -----------------------------------
  // PAGE: E_PG7
  
  
  // Create E_ELEM_CONF_PREHEAT_SET_DUR_TITLE text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_CONF_PREHEAT_SET_DUR_TITLE,E_PG7,63,10,193,26,
    "Set Duration",&m_asFont[E_NOTOSANS18],
    GSLC_COL_WHITE,GSLC_COL_GRAY_DK2,GSLC_COL_GRAY_DK2,GSLC_ALIGN_MID_MID,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
   
  // Create E_ELEM_CONF_PREHEAT_SET_DUR_BOX box in flash
  gslc_ElemCreateBox_P(&m_gui,E_ELEM_CONF_PREHEAT_SET_DUR_BOX,E_PG7,10,82,300,75,
    GSLC_COL_GRAY_DK1,GSLC_COL_GRAY_DK1,false,true,NULL,NULL);
  
  // Create E_ELEM_CONF_PREHEAT_SET_DUR_INPUT numeric input field
  static char m_sInputNumber5[4] = "";
  gslc_ElemCreateTxt_P_R_ext(&m_gui,E_ELEM_CONF_PREHEAT_SET_DUR_INPUT,E_PG7,129,107,63,27,
    m_sInputNumber5,4,&m_asFont[E_NOTOSANS18],
    GSLC_COL_WHITE,GSLC_COL_WHITE,GSLC_COL_GRAY_DK1,GSLC_COL_GRAY_DK1,GSLC_ALIGN_MID_MID,5,5,
    true,true,true,false,NULL,NULL,&CbBtnCommon,NULL);
  m_pElemVal1_3_5 = gslc_PageFindElemById(&m_gui,E_PG7,E_ELEM_CONF_PREHEAT_SET_DUR_INPUT);
  
  // create E_ELEM_CONF_PREHEAT_SET_DUR_BACK button with text label
  gslc_ElemCreateBtnTxt_P(&m_gui,E_ELEM_CONF_PREHEAT_SET_DUR_BACK,E_PG7,10,352,300,75,
    "Back",&m_asFont[E_NOTOSANS12],
    GSLC_COL_WHITE,GSLC_COL_RED_DK2,GSLC_COL_RED_DK2,GSLC_COL_RED_DK2,
    GSLC_COL_RED_DK3,GSLC_ALIGN_MID_MID,true,true,&CbBtnCommon,NULL);
  
  // Create E_ELEM_CONF_PREHEAT_SET_DUR_UNIT text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_CONF_PREHEAT_SET_DUR_UNIT,E_PG7,190,113,18,19,
    "s",&m_asFont[E_NOTOSANS18],
    GSLC_COL_WHITE,GSLC_COL_GRAY,GSLC_COL_GRAY,GSLC_ALIGN_MID_MID,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.

  // -----------------------------------
  // PAGE: E_PG8
  
  
  // Create E_ELEM_CONF_PREHEAT_SET_TEMP_TITLE text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_CONF_PREHEAT_SET_TEMP_TITLE,E_PG8,23,10,274,34,
    "Set Preheat Temp",&m_asFont[E_NOTOSANS18],
    GSLC_COL_WHITE,GSLC_COL_GRAY_DK2,GSLC_COL_GRAY_DK2,GSLC_ALIGN_MID_MID,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
   
  // Create E_ELEM_CONF_PREHEAT_SET_TEMP_BOX box in flash
  gslc_ElemCreateBox_P(&m_gui,E_ELEM_CONF_PREHEAT_SET_TEMP_BOX,E_PG8,10,82,300,75,
    GSLC_COL_GRAY_DK1,GSLC_COL_GRAY_DK1,false,true,NULL,NULL);
  
  // Create E_ELEM_CONF_PREHEAT_SET_TEMP_INPUT numeric input field
  static char m_sInputNumber6[4] = "";
  gslc_ElemCreateTxt_P_R_ext(&m_gui,E_ELEM_CONF_PREHEAT_SET_TEMP_INPUT,E_PG8,129,107,63,27,
    m_sInputNumber6,4,&m_asFont[E_NOTOSANS18],
    GSLC_COL_WHITE,GSLC_COL_WHITE,GSLC_COL_GRAY_DK1,GSLC_COL_GRAY_DK1,GSLC_ALIGN_MID_MID,5,5,
    true,true,true,false,NULL,NULL,&CbBtnCommon,NULL);
  m_pElemVal1_2_4_6 = gslc_PageFindElemById(&m_gui,E_PG8,E_ELEM_CONF_PREHEAT_SET_TEMP_INPUT);
  
  // Create E_ELEM_CONF_PREHEAT_SET_TEMP_UNIT text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_CONF_PREHEAT_SET_TEMP_UNIT,E_PG8,190,108,18,25,
    "C",&m_asFont[E_NOTOSANS18],
    GSLC_COL_WHITE,GSLC_COL_GRAY,GSLC_COL_GRAY,GSLC_ALIGN_MID_MID,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  
  // create E_ELEM_CONF_PREHEAT_SET_TEMP_BACK button with text label
  gslc_ElemCreateBtnTxt_P(&m_gui,E_ELEM_CONF_PREHEAT_SET_TEMP_BACK,E_PG8,10,352,300,75,
    "Back",&m_asFont[E_NOTOSANS12],
    GSLC_COL_WHITE,GSLC_COL_RED_DK2,GSLC_COL_RED_DK2,GSLC_COL_RED_DK2,
    GSLC_COL_RED_DK3,GSLC_ALIGN_MID_MID,true,true,&CbBtnCommon,NULL);

  // -----------------------------------
  // PAGE: E_PG9
  
  
  // Create E_ELEM_REFLOW_TITLE text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_REFLOW_TITLE,E_PG9,108,10,103,27,
    "Reflow",&m_asFont[E_NOTOSANS18],
    GSLC_COL_WHITE,GSLC_COL_GRAY_DK2,GSLC_COL_GRAY_DK2,GSLC_ALIGN_MID_MID,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  
  // create E_ELEM_REFLOW_SET_DUR button with text label
  gslc_ElemCreateBtnTxt_P(&m_gui,E_ELEM_REFLOW_SET_DUR,E_PG9,10,67,300,75,
    "Set Duration",&m_asFont[E_NOTOSANS12],
    GSLC_COL_WHITE,GSLC_COL_GRAY_DK1,GSLC_COL_GRAY_DK1,GSLC_COL_GRAY_DK1,
    ((gslc_tsColor){79,79,79}),GSLC_ALIGN_MID_MID,true,true,&CbBtnCommon,NULL);
  
  // create E_ELEM_REFLOW_SET_TEMP button with text label
  gslc_ElemCreateBtnTxt_P(&m_gui,E_ELEM_REFLOW_SET_TEMP,E_PG9,10,162,300,75,
    "Set Max Temp",&m_asFont[E_NOTOSANS12],
    GSLC_COL_WHITE,GSLC_COL_GRAY_DK1,GSLC_COL_GRAY_DK1,GSLC_COL_GRAY_DK1,
    ((gslc_tsColor){79,79,79}),GSLC_ALIGN_MID_MID,true,true,&CbBtnCommon,NULL);
  
  // create E_ELEM_REFLOW_SET_BACK button with text label
  gslc_ElemCreateBtnTxt_P(&m_gui,E_ELEM_REFLOW_SET_BACK,E_PG9,10,352,300,75,
    "Back",&m_asFont[E_NOTOSANS12],
    GSLC_COL_WHITE,GSLC_COL_RED_DK2,GSLC_COL_RED_DK2,GSLC_COL_RED_DK2,
    GSLC_COL_RED_DK3,GSLC_ALIGN_MID_MID,true,true,&CbBtnCommon,NULL);

  // -----------------------------------
  // PAGE: E_PG10
  
  
  // Create E_ELEM_CONF_REFLOW_SET_DUR_TITLE text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_CONF_REFLOW_SET_DUR_TITLE,E_PG10,63,10,193,26,
    "Set Duration",&m_asFont[E_NOTOSANS18],
    GSLC_COL_WHITE,GSLC_COL_GRAY_DK2,GSLC_COL_GRAY_DK2,GSLC_ALIGN_MID_MID,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
   
  // Create E_ELEM_CONF_REFLOW_SET_DUR_BOX box in flash
  gslc_ElemCreateBox_P(&m_gui,E_ELEM_CONF_REFLOW_SET_DUR_BOX,E_PG10,10,82,300,75,
    GSLC_COL_GRAY_DK1,GSLC_COL_GRAY_DK1,false,true,NULL,NULL);
  
  // Create E_ELEM_CONF_REFLOW_SET_DUR_INPUT numeric input field
  static char m_sInputNumber7[4] = "";
  gslc_ElemCreateTxt_P_R_ext(&m_gui,E_ELEM_CONF_REFLOW_SET_DUR_INPUT,E_PG10,129,107,63,27,
    m_sInputNumber7,4,&m_asFont[E_NOTOSANS18],
    GSLC_COL_WHITE,GSLC_COL_WHITE,GSLC_COL_GRAY_DK1,GSLC_COL_GRAY_DK1,GSLC_ALIGN_MID_MID,5,5,
    true,true,true,false,NULL,NULL,&CbBtnCommon,NULL);
  m_pElemVal1_3_5_7 = gslc_PageFindElemById(&m_gui,E_PG10,E_ELEM_CONF_REFLOW_SET_DUR_INPUT);
  
  // create E_ELEM_CONF_REFLOW_SET_DUR_BACK button with text label
  gslc_ElemCreateBtnTxt_P(&m_gui,E_ELEM_CONF_REFLOW_SET_DUR_BACK,E_PG10,10,352,300,75,
    "Back",&m_asFont[E_NOTOSANS12],
    GSLC_COL_WHITE,GSLC_COL_RED_DK2,GSLC_COL_RED_DK2,GSLC_COL_RED_DK2,
    GSLC_COL_RED_DK3,GSLC_ALIGN_MID_MID,true,true,&CbBtnCommon,NULL);
  
  // Create E_ELEM_CONF_REFLOW_SET_DUR_UNIT text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_CONF_REFLOW_SET_DUR_UNIT,E_PG10,190,113,18,19,
    "s",&m_asFont[E_NOTOSANS18],
    GSLC_COL_WHITE,GSLC_COL_GRAY,GSLC_COL_GRAY,GSLC_ALIGN_MID_MID,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.

  // -----------------------------------
  // PAGE: E_PG11
  
  
  // Create E_ELEM_CONF_REFLOW_SET_TEMP_TITLE text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_CONF_REFLOW_SET_TEMP_TITLE,E_PG11,39,10,241,35,
    "Set Reflow Temp",&m_asFont[E_NOTOSANS18],
    GSLC_COL_WHITE,GSLC_COL_GRAY_DK2,GSLC_COL_GRAY_DK2,GSLC_ALIGN_MID_MID,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
   
  // Create E_ELEM_CONF_REFLOW_SET_TEMP_BOX box in flash
  gslc_ElemCreateBox_P(&m_gui,E_ELEM_CONF_REFLOW_SET_TEMP_BOX,E_PG11,10,82,300,75,
    GSLC_COL_GRAY_DK1,GSLC_COL_GRAY_DK1,false,true,NULL,NULL);
  
  // Create E_ELEM_CONF_REFLOW_SET_TEMP_INPUT numeric input field
  static char m_sInputNumber8[4] = "";
  gslc_ElemCreateTxt_P_R_ext(&m_gui,E_ELEM_CONF_REFLOW_SET_TEMP_INPUT,E_PG11,129,107,63,27,
    m_sInputNumber8,4,&m_asFont[E_NOTOSANS18],
    GSLC_COL_WHITE,GSLC_COL_WHITE,GSLC_COL_GRAY_DK1,GSLC_COL_GRAY_DK1,GSLC_ALIGN_MID_MID,5,5,
    true,true,true,false,NULL,NULL,&CbBtnCommon,NULL);
  m_pElemVal1_2_4_6_8 = gslc_PageFindElemById(&m_gui,E_PG11,E_ELEM_CONF_REFLOW_SET_TEMP_INPUT);
  
  // Create E_ELEM_CONF_REFLOW_SET_TEMP_UNIT text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_CONF_REFLOW_SET_TEMP_UNIT,E_PG11,190,108,18,25,
    "C",&m_asFont[E_NOTOSANS18],
    GSLC_COL_WHITE,GSLC_COL_GRAY,GSLC_COL_GRAY,GSLC_ALIGN_MID_MID,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  
  // create E_ELEM_CONF_REFLOW_SET_TEMP_BACK button with text label
  gslc_ElemCreateBtnTxt_P(&m_gui,E_ELEM_CONF_REFLOW_SET_TEMP_BACK,E_PG11,10,352,300,75,
    "Back",&m_asFont[E_NOTOSANS12],
    GSLC_COL_WHITE,GSLC_COL_RED_DK2,GSLC_COL_RED_DK2,GSLC_COL_RED_DK2,
    GSLC_COL_RED_DK3,GSLC_ALIGN_MID_MID,true,true,&CbBtnCommon,NULL);

  // -----------------------------------
  // PAGE: E_PG12
  
  
  // Create E_ELEM_CONF_FAN_TITLE text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_CONF_FAN_TITLE,E_PG12,105,10,110,25,
    "Set Fan",&m_asFont[E_NOTOSANS18],
    GSLC_COL_WHITE,GSLC_COL_GRAY_DK2,GSLC_COL_GRAY_DK2,GSLC_ALIGN_MID_MID,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  
  // create E_ELEM_CONF_FAN_BACK button with text label
  gslc_ElemCreateBtnTxt_P(&m_gui,E_ELEM_CONF_FAN_BACK,E_PG12,10,352,300,75,
    "Back",&m_asFont[E_NOTOSANS12],
    GSLC_COL_WHITE,GSLC_COL_RED_DK2,GSLC_COL_RED_DK2,GSLC_COL_RED_DK2,
    GSLC_COL_RED_DK3,GSLC_ALIGN_MID_MID,true,true,&CbBtnCommon,NULL);
   
  // Create E_ELEM_CONF_FAN_PREHEAT_TOGGLE_BOX box in flash
  gslc_ElemCreateBox_P(&m_gui,E_ELEM_CONF_FAN_PREHEAT_TOGGLE_BOX,E_PG12,210,67,100,76,
    GSLC_COL_GRAY_DK1,GSLC_COL_GRAY_DK1,false,true,NULL,NULL);
   
  // Create E_ELEM_CONF_FAN_REFLOW_TOGGLE_BOX box in flash
  gslc_ElemCreateBox_P(&m_gui,E_ELEM_CONF_FAN_REFLOW_TOGGLE_BOX,E_PG12,210,162,100,76,
    GSLC_COL_GRAY_DK1,GSLC_COL_GRAY_DK1,false,true,NULL,NULL);
   
  // Create E_ELEM_SONF_FAN_COOLING_TOGGLE_BOX box in flash
  gslc_ElemCreateBox_P(&m_gui,E_ELEM_SONF_FAN_COOLING_TOGGLE_BOX,E_PG12,210,257,100,76,
    GSLC_COL_GRAY_DK1,GSLC_COL_GRAY_DK1,false,true,NULL,NULL);
  
  // Create toggle button E_ELEM_CONF_FAN_PREHEAT_TOGGLE
  pElemRef = gslc_ElemXTogglebtnCreate(&m_gui,E_ELEM_CONF_FAN_PREHEAT_TOGGLE,E_PG12,&m_asXToggle1,
    (gslc_tsRect){235,88,64,33},GSLC_COL_GRAY_DK2,GSLC_COL_GREEN_DK3,GSLC_COL_RED_DK2,
    true,false,&CbBtnCommon);
  m_pElemToggle1 = pElemRef;
  
  // Create toggle button E_ELEM_CONF_FAN_REFLOW_TOGGLE
  pElemRef = gslc_ElemXTogglebtnCreate(&m_gui,E_ELEM_CONF_FAN_REFLOW_TOGGLE,E_PG12,&m_asXToggle2,
    (gslc_tsRect){235,183,64,33},GSLC_COL_GRAY_DK2,GSLC_COL_GREEN_DK3,GSLC_COL_RED_DK2,
    true,false,&CbBtnCommon);
  m_pElemToggle1_2 = pElemRef;
  
  // Create toggle button E_ELEM_CONF_FAN_COOLING_TOGGLE
  pElemRef = gslc_ElemXTogglebtnCreate(&m_gui,E_ELEM_CONF_FAN_COOLING_TOGGLE,E_PG12,&m_asXToggle3,
    (gslc_tsRect){235,278,64,33},GSLC_COL_GRAY_DK2,GSLC_COL_GREEN_DK3,GSLC_COL_RED_DK2,
    true,false,&CbBtnCommon);
  m_pElemToggle1_2_3 = pElemRef;
  
  // Create E_ELEM_CONF_FAN_PREHEAT_TEXT text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_CONF_FAN_PREHEAT_TEXT,E_PG12,10,67,200,76,
    "Preheat",&m_asFont[E_NOTOSANS12],
    GSLC_COL_WHITE,GSLC_COL_GRAY_DK1,GSLC_COL_GRAY_DK1,GSLC_ALIGN_MID_MID,false,true);
  
  // Create E_ELEM_CONF_FAN_REFLOW_TEXT text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_CONF_FAN_REFLOW_TEXT,E_PG12,10,162,200,76,
    "Reflow",&m_asFont[E_NOTOSANS12],
    GSLC_COL_WHITE,GSLC_COL_GRAY_DK1,GSLC_COL_GRAY_DK1,GSLC_ALIGN_MID_MID,false,true);
  
  // Create E_ELEM_CONF_FAN_COOLING_TEXT text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_CONF_FAN_COOLING_TEXT,E_PG12,10,257,200,76,
    "Cooling",&m_asFont[E_NOTOSANS12],
    GSLC_COL_WHITE,GSLC_COL_GRAY_DK1,GSLC_COL_GRAY_DK1,GSLC_ALIGN_MID_MID,false,true);

  // -----------------------------------
  // PAGE: E_PG13
  
  
  // Create E_ELEM_PROCESS_TITLE text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_PROCESS_TITLE,E_PG13,50,10,219,26,
    "Process Active",&m_asFont[E_NOTOSANS18],
    GSLC_COL_WHITE,GSLC_COL_GRAY_DK2,GSLC_COL_GRAY_DK2,GSLC_ALIGN_MID_MID,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.

  // Create graph E_ELEM_PROCESS_GRAPH
  pElemRef = gslc_ElemXGraphCreate(&m_gui,E_ELEM_PROCESS_GRAPH,E_PG13,
    &m_sGraph1,(gslc_tsRect){10,55,300,213},E_BUILTIN5X8,(int16_t*)&m_anGraphBuf1,
        20,GSLC_COL_WHITE);
  gslc_ElemXGraphSetStyle(&m_gui,pElemRef, GSLCX_GRAPH_STYLE_FILL, 5);
  m_pElemGraph1 = pElemRef;
   
  // Create E_ELEM_PROCESS_BOX box in flash
  gslc_ElemCreateBox_P(&m_gui,E_ELEM_PROCESS_BOX,E_PG13,10,310,300,150,
    GSLC_COL_GRAY_DK1,GSLC_COL_GRAY_DK1,false,true,NULL,NULL);

  // Create progress bar E_ELEM_PROCESS_ACT_RMP_PROGRESS 
  pElemRef = gslc_ElemXProgressCreate(&m_gui,E_ELEM_PROCESS_ACT_RMP_PROGRESS,E_PG13,&m_sXBarGauge1,
    (gslc_tsRect){12,275,95,20},0,100,0,GSLC_COL_GREEN_DK3,false);
  m_pElemProgress1 = pElemRef;

  // Create progress bar E_ELEM_PROCESS_PREHEAT_PROGRESS 
  pElemRef = gslc_ElemXProgressCreate(&m_gui,E_ELEM_PROCESS_PREHEAT_PROGRESS,E_PG13,&m_sXBarGauge2,
    (gslc_tsRect){112,275,95,20},0,100,0,GSLC_COL_GREEN_DK3,false);
  m_pElemProgress1_2 = pElemRef;

  // Create progress bar E_ELEM_PROCESS_REFLOW_PROGRESS 
  pElemRef = gslc_ElemXProgressCreate(&m_gui,E_ELEM_PROCESS_REFLOW_PROGRESS,E_PG13,&m_sXBarGauge3,
    (gslc_tsRect){212,275,95,20},0,100,0,GSLC_COL_GREEN_DK3,false);
  m_pElemProgress1_3 = pElemRef;
  
  // Create E_ELEM_PROCESS_TARGET_TEMP text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_PROCESS_TARGET_TEMP,E_PG13,74,353,113,20,
    "Target Temp:",&m_asFont[E_NOTOSANS10],
    GSLC_COL_WHITE,GSLC_COL_GRAY,GSLC_COL_BLACK,GSLC_ALIGN_MID_LEFT,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  
  // Create E_ELEM_PROCESS_CURRENT_TEMP text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_PROCESS_CURRENT_TEMP,E_PG13,64,323,123,20,
    "Current Temp:",&m_asFont[E_NOTOSANS10],
    GSLC_COL_WHITE,GSLC_COL_GRAY,GSLC_COL_BLACK,GSLC_ALIGN_MID_LEFT,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  
  // Create E_ELEM_PROCESS_ELAPSED_TIME text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_PROCESS_ELAPSED_TIME,E_PG13,72,393,115,20,
    "Elapsed Time:",&m_asFont[E_NOTOSANS10],
    GSLC_COL_WHITE,GSLC_COL_GRAY,GSLC_COL_BLACK,GSLC_ALIGN_MID_LEFT,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  
  // Create E_ELEM_PROCESS_TARGET_TIME text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_PROCESS_TARGET_TIME,E_PG13,80,423,107,20,
    "Target Time:",&m_asFont[E_NOTOSANS10],
    GSLC_COL_WHITE,GSLC_COL_GRAY,GSLC_COL_BLACK,GSLC_ALIGN_MID_LEFT,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  
  // Create E_ELEM_PROCESS_TARGET_TIME_VAL text label
  pElemRef = gslc_ElemCreateTxt(&m_gui,E_ELEM_PROCESS_TARGET_TIME_VAL,E_PG13,(gslc_tsRect){220,425,18,14},
    (char*)"0s",0,E_NOTOSANS10);
  gslc_ElemSetFillEn(&m_gui,pElemRef,false);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,GSLC_COL_WHITE);
  
  // Create E_ELEM_PROCESS_ELAPSED_TIME_VAL text label
  pElemRef = gslc_ElemCreateTxt(&m_gui,E_ELEM_PROCESS_ELAPSED_TIME_VAL,E_PG13,(gslc_tsRect){220,395,18,14},
    (char*)"0s",0,E_NOTOSANS10);
  gslc_ElemSetFillEn(&m_gui,pElemRef,false);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,GSLC_COL_WHITE);
  
  // Create E_ELEM_PROCESS_TARGET_TEMP_VAL text label
  pElemRef = gslc_ElemCreateTxt(&m_gui,E_ELEM_PROCESS_TARGET_TEMP_VAL,E_PG13,(gslc_tsRect){220,355,21,14},
    (char*)"0C",0,E_NOTOSANS10);
  gslc_ElemSetFillEn(&m_gui,pElemRef,false);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,GSLC_COL_WHITE);
  
  // Create E_ELEM_PROCESS_CURRENT_TEMP_VAL text label
  pElemRef = gslc_ElemCreateTxt(&m_gui,E_ELEM_PROCESS_CURRENT_TEMP_VAL,E_PG13,(gslc_tsRect){220,325,21,14},
    (char*)"0C",0,E_NOTOSANS10);
  gslc_ElemSetFillEn(&m_gui,pElemRef,false);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,GSLC_COL_WHITE);

  // -----------------------------------
  // PAGE: E_PG_POPUP1
  
   
  // Create E_WARN_HOT_EDGE1 box in flash
  gslc_ElemCreateBox_P(&m_gui,E_WARN_HOT_EDGE1,E_PG_POPUP1,1,0,5,480,
    GSLC_COL_GRAY_DK1,GSLC_COL_GRAY_DK1,false,true,NULL,NULL);
   
  // Create E_WARN_HOT_EDGE2 box in flash
  gslc_ElemCreateBox_P(&m_gui,E_WARN_HOT_EDGE2,E_PG_POPUP1,315,0,5,480,
    GSLC_COL_GRAY_DK1,GSLC_COL_GRAY_DK1,false,true,NULL,NULL);
   
  // Create E_WARN_HOT_EDGE3 box in flash
  gslc_ElemCreateBox_P(&m_gui,E_WARN_HOT_EDGE3,E_PG_POPUP1,1,0,320,5,
    GSLC_COL_GRAY_DK1,GSLC_COL_GRAY_DK1,false,true,NULL,NULL);
   
  // Create E_WARN_HOT_EDGE4 box in flash
  gslc_ElemCreateBox_P(&m_gui,E_WARN_HOT_EDGE4,E_PG_POPUP1,1,480,320,5,
    GSLC_COL_GRAY_DK1,GSLC_COL_GRAY_DK1,false,true,NULL,NULL);
 
  // Create E_WARN_HOT_SYMBOL using Image 
  pElemRef = gslc_ElemCreateImg(&m_gui,E_WARN_HOT_SYMBOL,E_PG_POPUP1,(gslc_tsRect){68,10,183,165},
    gslc_GetImageFromProg((const unsigned char*)warn_183x165,GSLC_IMGREF_FMT_BMP24));
  
  // Create E_WARN_HOT_TITLE text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_WARN_HOT_TITLE,E_PG_POPUP1,102,185,116,34,
    "Cooling",&m_asFont[E_NOTOSANS18],
    GSLC_COL_WHITE,GSLC_COL_GRAY_DK2,GSLC_COL_GRAY_DK2,GSLC_ALIGN_MID_MID,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.

  // Create progress bar E_WARN_HOT_PROGRESS 
  pElemRef = gslc_ElemXProgressCreate(&m_gui,E_WARN_HOT_PROGRESS,E_PG_POPUP1,&m_sXBarGauge5,
    (gslc_tsRect){20,243,280,30},0,100,0,GSLC_COL_BLUE_DK3,false);
  m_pElemProgress1_2_5 = pElemRef;
  
  // Create E_WARN_HOT_TEXT_WAIT text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_WARN_HOT_TEXT_WAIT,E_PG_POPUP1,58,323,204,26,
    "Please Wait...",&m_asFont[E_NOTOSANS18],
    GSLC_COL_WHITE,GSLC_COL_GRAY_DK2,GSLC_COL_GRAY_DK2,GSLC_ALIGN_MID_MID,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.

  // -----------------------------------
  // PAGE: E_POP_KEYPAD_NUM
  
  static gslc_tsXKeyPadCfg_Num sCfg;
  sCfg = gslc_ElemXKeyPadCfgInit_Num();
  gslc_ElemXKeyPadCfgSetFloatEn_Num(&sCfg, false);
  gslc_ElemXKeyPadCfgSetSignEn_Num(&sCfg, false);
  gslc_ElemXKeyPadCfgSetButtonSz((gslc_tsXKeyPadCfg*)&sCfg, 40, 60);
  m_pElemKeyPadNum = gslc_ElemXKeyPadCreate_Num(&m_gui, E_ELEM_KEYPAD_NUM, E_POP_KEYPAD_NUM,
    &m_sKeyPadNum, -1, 298, E_NOTOSANS12, &sCfg);
  gslc_ElemXKeyPadValSetCb(&m_gui, m_pElemKeyPadNum, &CbKeypad);
//<InitGUI !End!>

//<Startup !Start!>
//<Startup !End!>

}

#endif // end _GUISLICE_GEN_H
