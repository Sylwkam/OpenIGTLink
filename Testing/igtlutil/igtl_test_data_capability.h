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

#ifndef __IGTL_TEST_DATA_CAPABILITY_H
#define __IGTL_TEST_DATA_CAPABILITY_H

unsigned char test_capability_message[] = {

  0x00, 0x01,                                     /* Version number */
  0x43, 0x41, 0x50, 0x41, 0x42, 0x49, 0x4c, 0x49,
  0x54, 0x59, 0x00, 0x00,                         /* CAPABILITY */
  0x44, 0x65, 0x76, 0x69, 0x63, 0x65, 0x4e, 0x61,
  0x6d, 0x65, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,                         /* Device name */
  0x00, 0x00, 0x00, 0x00, 0x49, 0x96, 0x02, 0xd4, /* Time stamp */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, /* Body size */

  0x69, 0x57, 0xe2, 0x9e, 0x2b, 0x35, 0xea, 0x1e, /* CRC */

  0x49, 0x4d, 0x41, 0x47, 0x45, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,                         /* IMAGE */
  0x47, 0x45, 0x54, 0x5f, 0x49, 0x4d, 0x41, 0x47, 
  0x45, 0x00, 0x00, 0x00,                         /* GET_IMAGE */
  0x54, 0x52, 0x41, 0x4e, 0x53, 0x46, 0x4f, 0x52, 
  0x4d, 0x00, 0x00, 0x00,                         /* TRANSFORM */
  0x47, 0x45, 0x54, 0x5f, 0x54, 0x52, 0x41, 0x4e, 
  0x53, 0x00, 0x00, 0x00,                         /* GET_TRANS */

};

#endif /* IGTL_TEST_DATA_SENSOR_H */

