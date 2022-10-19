/**********************************************************************
 *
 * Filename:    main.c
 *
 * Description: Main file
 *
 * Notes:
 *
 *
 *
 * Copyright (c) 2014 Francisco Javier Lana Romero
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#include <stdio.h>
#include "crc.h"

int main()
{
	//使用 CRC-32 计算校验结果
	uint8_t code[] = {0x81, 0x01, 0x41, 0x42};
	uint32_t result;

	//是否使用查表法
	#if (CALCULATE_LOOKUPTABLE == TRUE)
	    F_CRC_InicializaTabla();
	#endif


	result = F_CRC_CalculaCheckSum(code, sizeof(code));

	printf("\nresult = 0x%x\n", result);

	return 0;
}

