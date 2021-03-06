/*

 The MIT License (MIT)

 Copyright (c) 2015-2016 Douglas J. Bakkum

 Permission is hereby granted, free of charge, to any person obtaining
 a copy of this software and associated documentation files (the "Software"),
 to deal in the Software without restriction, including without limitation
 the rights to use, copy, modify, merge, publish, distribute, sublicense,
 and/or sell copies of the Software, and to permit persons to whom the
 Software is furnished to do so, subject to the following conditions:

 The above copyright notice and this permission notice shall be included
 in all copies or substantial portions of the Software.

 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES
 OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
 ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 OTHER DEALINGS IN THE SOFTWARE.

*/


#ifndef _AES132_H_
#define _AES132_H_


#include <stdint.h>


#define AES_DEVICE_ADDR     0x50u
#define AES_MEM_ADDR_LEN    2
#define AES_MEM_ADDR_IO     0xFE00
#define AES_MEM_ADDR_STATUS 0xFFF0
#define AES_MEM_ADDR_RESET  0xFFE0
#define AES_TWI             TWI0
#define AES_TWI_ID          ID_TWI0
#define AES_TWI_SPEED       10000


void ataes_init(void);
int ataes_process(uint8_t const *command, uint16_t cmd_len, uint8_t *response_block,
                  uint16_t response_len);
int ataes_eeprom(uint16_t LEN, uint32_t ADDR, uint8_t *userdata_read,
                 uint8_t *userdata_write);


#endif
