//////////////////////////////////////////////////////////////////////////
// IXXAT Automation GmbH
//////////////////////////////////////////////////////////////////////////
/**
  VCI driver and device GUIDs for CAN@NET 2 Generic.

  @file "vci113wx.h"
*/
//////////////////////////////////////////////////////////////////////////
// (C) 2002-2011 IXXAT Automation GmbH,all rights reserved
//////////////////////////////////////////////////////////////////////////

#ifndef _VCI113WX_H
#define _VCI113WX_H

//////////////////////////////////////////////////////////////////////////
//  include files
//////////////////////////////////////////////////////////////////////////
#include <stdtype.h>

//////////////////////////////////////////////////////////////////////////
//  constants and macros
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
// data types
//////////////////////////////////////////////////////////////////////////

/*****************************************************************************
 * Driver and Device Classes from the CN2 Generic Socket driver (VCI502Wx.DLL)
 ****************************************************************************
 * DriverClass = {A46A5C5F-7A3B-41b5-A2E1-6FF25B40657C}
 * DeviceClass = {671539AE-F0D2-40d1-A3E3-F53E067E7A50}
 ****************************************************************************/
DEFINE_GUID(GUID_CN2GENERIC_DRIVER,
       0xa46a5c5f,0x7a3b,0x41b5,0xa2,0xe1,0x6f,0xf2,0x5b,0x40,0x65,0x7c);

DEFINE_GUID(GUID_CN2GENERIC_DEVICE,
       0x671539ae,0xf0d2,0x40d1,0xa3,0xe3,0xf5,0x3e,0x06,0x7e,0x7a,0x50);

#endif //_VCI113WX_H
