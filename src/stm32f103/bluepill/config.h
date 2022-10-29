/*
 * Copyright (c) 2016, Devan Lai
 *
 * Permission to use, copy, modify, and/or distribute this software
 * for any purpose with or without fee is hereby granted, provided
 * that the above copyright notice and this permission notice
 * appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL
 * WARRANTIES WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE
 * AUTHOR BE LIABLE FOR ANY SPECIAL, DIRECT, INDIRECT, OR
 * CONSEQUENTIAL DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM
 * LOSS OF USE, DATA OR PROFITS, WHETHER IN AN ACTION OF CONTRACT,
 * NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF OR IN
 * CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

#ifndef CONFIG_H_INCLUDED
#define CONFIG_H_INCLUDED

#define APP_BASE_ADDRESS 0x08004000
#define FLASH_SIZE_OVERRIDE 0x20000
#define FLASH_PAGE_SIZE  1024
#define DFU_UPLOAD_AVAILABLE 1
#define DFU_DOWNLOAD_AVAILABLE 1

#ifndef HAVE_LED
#define HAVE_LED 0
#endif

#define HAVE_BUTTON 1
#define BUTTON_GPIO_PORT GPIOB
#define BUTTON_GPIO_PIN GPIO2
#define BUTTON_ACTIVE_HIGH 1
#define BUTTON_SAMPLE_DELAY_CYCLES 1440000

#ifndef HAVE_USB_PULLUP_CONTROL
#define HAVE_USB_PULLUP_CONTROL 0
#endif

#define UF2_FAMILY 0x5ee21072

#undef VOLUME_LABEL
#ifdef KB_VOLUME_LABEL
#define VOLUME_LABEL KB_VOLUME_LABEL
#else
#define VOLUME_LABEL "BLUEPILL"
#endif
#undef PRODUCT_NAME
#define PRODUCT_NAME "Blue Pill STM32F103xB"
#undef BOARD_ID
#define BOARD_ID "STM32F103-blue-pill-v0"

//#define DOUBLE_TAP

#endif
