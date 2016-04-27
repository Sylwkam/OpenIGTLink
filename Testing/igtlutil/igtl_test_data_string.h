/*=========================================================================

  Program:   OpenIGTLLink Library -- Dummy status data
  Module:    $RCSfile: $
  Language:  C
  Date:      $Date: $
  Version:   $Revision: $

  Copyright (c) Insight Software Consortium. All rights reserved.

  This software is distributed WITHOUT ANY WARRANTY; without even
  the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
  PURPOSE.  See the above copyright notices for more information.

=========================================================================*/

#ifndef __IGTL_TEST_DATA_STRING_H
#define __IGTL_TEST_DATA_STRING_H

unsigned char test_string_message[] = {
  0x00, 0x01,                                     /* Version number */
  0x53, 0x54, 0x52, 0x49, 0x4e, 0x47, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00,                         /* STRING */ 
  0x44, 0x65, 0x76, 0x69, 0x63, 0x65, 0x4e, 0x61,
  0x6d, 0x65, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,                         /* Device name */
  0x00, 0x00, 0x00, 0x00, 0x49, 0x96, 0x02, 0xd4, /* Time stamp */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1a, /* Body size */

  0xce, 0xf1, 0xb4, 0x2a, 0x70, 0x11, 0x04, 0xd4, /* CRC */

  0x00, 0x03,                                     /* encoding */
  0x00, 0x16,                                     /* length */
  0x57, 0x65, 0x6c, 0x63, 0x6f, 0x6d, 0x65, 0x20,
  0x74, 0x6f, 0x20, 0x4f, 0x70, 0x65, 0x6e, 0x49,
  0x47, 0x54, 0x4c, 0x69, 0x6e ,0x6b,             /* string content */

};

#endif /* IGTL_TEST_DATA_SENSOR_H */

