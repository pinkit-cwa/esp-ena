// Copyright 2020 Lukas Haubaum
//
// Licensed under the GNU Affero General Public License, Version 3;
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at

//     https://www.gnu.org/licenses/agpl-3.0.html
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
#ifndef _ssd1306_FONT_H_
#define _ssd1306_FONT_H_

/**
 * @brief constant containing a 5x8 ascii font
 */
const uint8_t ascii_font_5x8[256][5] = {
    {0x00, 0x00, 0x00, 0x00, 0x00}, // 0x00
    {0x1E, 0x35, 0x31, 0x35, 0x1E}, // 0x01
    {0x1E, 0x35, 0x37, 0x35, 0x1E}, // 0x02
    {0x0E, 0x1F, 0x3E, 0x1F, 0x0E}, // 0x03
    {0x08, 0x1C, 0x7F, 0x1C, 0x08}, // 0x04
    {0x18, 0x4A, 0x7F, 0x4A, 0x18}, // 0x05
    {0x1C, 0x4E, 0x7F, 0x4E, 0x1C}, // 0x06
    {0x00, 0x00, 0x00, 0x00, 0x00}, // 0x07
    {0x00, 0x00, 0x00, 0x00, 0x00}, // 0x08
    {0x00, 0x00, 0x00, 0x00, 0x00}, // 0x09
    {0x00, 0x00, 0x00, 0x00, 0x00}, // 0x0A
    {0x38, 0x44, 0x44, 0x47, 0x3B}, // 0x0B
    {0x0E, 0x51, 0xF1, 0x51, 0x0E}, // 0x0C
    {0x00, 0x00, 0x00, 0x00, 0x00}, // 0x0D
    {0x60, 0x7E, 0x02, 0x33, 0x3F}, // 0x0E
    {0x2A, 0x1C, 0x36, 0x1C, 0x2A}, // 0x0F
    {0x3E, 0x1C, 0x1C, 0x08, 0x08}, // 0x10
    {0x08, 0x08, 0x1C, 0x1C, 0x3E}, // 0x11
    {0x00, 0x22, 0x7F, 0x22, 0x00}, // 0x12
    {0x00, 0x2E, 0x00, 0x2E, 0x00}, // 0x13
    {0x06, 0x7F, 0x01, 0x7F, 0x00}, // 0x14
    {0x00, 0x4A, 0x55, 0x29, 0x00}, // 0x15
    {0x00, 0x18, 0x18, 0x18, 0x18}, // 0x16
    {0x00, 0x4A, 0x5F, 0x4A, 0x00}, // 0x17
    {0x00, 0x02, 0x7F, 0x02, 0x00}, // 0x18
    {0x00, 0x20, 0x7F, 0x20, 0x00}, // 0x19
    {0x00, 0x08, 0x08, 0x1C, 0x08}, // 0x1A
    {0x00, 0x08, 0x1C, 0x08, 0x08}, // 0x1B
    {0x00, 0x3C, 0x20, 0x20, 0x20}, // 0x1C
    {0x08, 0x1C, 0x08, 0x1C, 0x08}, // 0x1D
    {0x20, 0x38, 0x3E, 0x38, 0x20}, // 0x1E
    {0x02, 0x0E, 0x3E, 0x0E, 0x02}, // 0x1F
    {0x00, 0x00, 0x00, 0x00, 0x00}, // 0x20 (Space)
    {0x00, 0x00, 0x9E, 0x00, 0x00}, // 0x21 !
    {0x00, 0x0E, 0x00, 0x0E, 0x00}, // 0x22 "
    {0x28, 0xFE, 0x28, 0xFE, 0x28}, // 0x23 #
    {0x48, 0x54, 0xFE, 0x54, 0x24}, // 0x24 $
    {0x46, 0x26, 0x10, 0xC8, 0xC4}, // 0x25 %
    {0x6C, 0x92, 0xAA, 0x44, 0xA0}, // 0x26 &
    {0x00, 0x0A, 0x06, 0x00, 0x00}, // 0x27 '
    {0x00, 0x38, 0x44, 0x82, 0x00}, // 0x28 (
    {0x00, 0x82, 0x44, 0x38, 0x00}, // 0x29 )
    {0x10, 0x54, 0x38, 0x54, 0x10}, // 0x2A *
    {0x10, 0x10, 0x7C, 0x10, 0x10}, // 0x2B +
    {0x00, 0xA0, 0x60, 0x00, 0x00}, // 0x2C ,
    {0x10, 0x10, 0x10, 0x10, 0x10}, // 0x2D -
    {0x00, 0x60, 0x60, 0x00, 0x00}, // 0x2E .
    {0x40, 0x20, 0x10, 0x08, 0x04}, // 0x2F /
    {0x7C, 0xA2, 0x92, 0x8A, 0x7C}, // 0x30 0
    {0x00, 0x84, 0xFE, 0x80, 0x00}, // 0x31 1
    {0x84, 0xC2, 0xA2, 0x92, 0x8C}, // 0x32 2
    {0x42, 0x82, 0x8A, 0x96, 0x62}, // 0x33 3
    {0x30, 0x28, 0x24, 0xFE, 0x20}, // 0x34 4
    {0x4E, 0x8A, 0x8A, 0x8A, 0x72}, // 0x35 5
    {0x78, 0x94, 0x92, 0x92, 0x60}, // 0x36 6
    {0x02, 0xE2, 0x12, 0x0A, 0x06}, // 0x37 7
    {0x6C, 0x92, 0x92, 0x92, 0x6C}, // 0x38 8
    {0x0C, 0x92, 0x92, 0x52, 0x3C}, // 0x39 9
    {0x00, 0x6C, 0x6C, 0x00, 0x00}, // 0x3A :
    {0x00, 0xAC, 0x6C, 0x00, 0x00}, // 0x3B ;
    {0x00, 0x10, 0x28, 0x44, 0x82}, // 0x3C <
    {0x28, 0x28, 0x28, 0x28, 0x28}, // 0x3D =
    {0x82, 0x44, 0x28, 0x10, 0x00}, // 0x3E >
    {0x04, 0x02, 0xA2, 0x12, 0x0C}, // 0x3F ?
    {0x64, 0x92, 0xF2, 0x82, 0x7C}, // 0x40 @
    {0xFC, 0x22, 0x22, 0x22, 0xFC}, // 0x41 A
    {0xFE, 0x92, 0x92, 0x92, 0x6C}, // 0x42 B
    {0x7C, 0x82, 0x82, 0x82, 0x44}, // 0x43 C
    {0xFE, 0x82, 0x82, 0x44, 0x38}, // 0x44 D
    {0xFE, 0x92, 0x92, 0x92, 0x82}, // 0x45 E
    {0xFE, 0x12, 0x12, 0x02, 0x02}, // 0x46 F
    {0x7C, 0x82, 0x82, 0xA2, 0x64}, // 0x47 G
    {0xFE, 0x10, 0x10, 0x10, 0xFE}, // 0x48 H
    {0x00, 0x82, 0xFE, 0x82, 0x00}, // 0x49 I
    {0x40, 0x80, 0x82, 0x7E, 0x02}, // 0x4A J
    {0xFE, 0x10, 0x28, 0x44, 0x82}, // 0x4B K
    {0xFE, 0x80, 0x80, 0x80, 0x80}, // 0x4C L
    {0xFE, 0x04, 0x08, 0x04, 0xFE}, // 0x4D M
    {0xFE, 0x08, 0x10, 0x20, 0xFE}, // 0x4E N
    {0x7C, 0x82, 0x82, 0x82, 0x7C}, // 0x4F O
    {0xFE, 0x12, 0x12, 0x12, 0x0C}, // 0x50 P
    {0x7C, 0x82, 0xA2, 0x42, 0xBC}, // 0x51 Q
    {0xFE, 0x12, 0x32, 0x52, 0x8C}, // 0x52 R
    {0x8C, 0x92, 0x92, 0x92, 0x62}, // 0x53 S
    {0x02, 0x02, 0xFE, 0x02, 0x02}, // 0x54 T
    {0x7E, 0x80, 0x80, 0x80, 0x7E}, // 0x55 U
    {0x3E, 0x40, 0x80, 0x40, 0x3E}, // 0x56 V
    {0xFE, 0x40, 0x30, 0x40, 0xFE}, // 0x57 W
    {0xC6, 0x28, 0x10, 0x28, 0xC6}, // 0x58 X
    {0x06, 0x08, 0xF0, 0x08, 0x06}, // 0x59 Y
    {0xC2, 0xA2, 0x92, 0x8A, 0x86}, // 0x5A Z
    {0x00, 0x00, 0xFE, 0x82, 0x82}, // 0x5B [
    {0x04, 0x08, 0x10, 0x20, 0x40}, // 0x5C "\"
    {0x82, 0x82, 0xFE, 0x00, 0x00}, // 0x5D ]
    {0x08, 0x04, 0x02, 0x04, 0x08}, // 0x5E ^
    {0x80, 0x80, 0x80, 0x80, 0x80}, // 0x5F _
    {0x00, 0x02, 0x04, 0x08, 0x00}, // 0x60 `
    {0x40, 0xA8, 0xA8, 0xA8, 0xF0}, // 0x61 a
    {0xFE, 0x90, 0x88, 0x88, 0x70}, // 0x62 b
    {0x70, 0x88, 0x88, 0x88, 0x40}, // 0x63 c
    {0x70, 0x88, 0x88, 0x90, 0xFE}, // 0x64 d
    {0x70, 0xA8, 0xA8, 0xA8, 0x30}, // 0x65 e
    {0x10, 0xFC, 0x12, 0x02, 0x04}, // 0x66 f
    {0x10, 0x28, 0xA8, 0xA8, 0x78}, // 0x67 g
    {0xFE, 0x10, 0x08, 0x08, 0xF0}, // 0x68 h
    {0x00, 0x88, 0xFA, 0x80, 0x00}, // 0x69 i
    {0x40, 0x80, 0x88, 0x7A, 0x00}, // 0x6A j
    {0x00, 0xFE, 0x20, 0x50, 0x88}, // 0x6B k
    {0x00, 0x82, 0xFE, 0x80, 0x00}, // 0x6C l
    {0xF8, 0x08, 0x30, 0x08, 0xF0}, // 0x6D m
    {0xF8, 0x10, 0x08, 0x08, 0xF0}, // 0x6E n
    {0x70, 0x88, 0x88, 0x88, 0x70}, // 0x6F o
    {0xF8, 0x28, 0x28, 0x28, 0x10}, // 0x70 p
    {0x10, 0x28, 0x28, 0x30, 0xF8}, // 0x71 q
    {0xF8, 0x10, 0x08, 0x08, 0x10}, // 0x72 r
    {0x90, 0xA8, 0xA8, 0xA8, 0x40}, // 0x73 s
    {0x08, 0x7E, 0x88, 0x80, 0x40}, // 0x74 t
    {0x78, 0x80, 0x80, 0x40, 0xF8}, // 0x75 u
    {0x38, 0x40, 0x80, 0x40, 0x38}, // 0x76 v
    {0x78, 0x80, 0x60, 0x80, 0x78}, // 0x77 w
    {0x88, 0x50, 0x20, 0x50, 0x88}, // 0x78 x
    {0x18, 0xA0, 0xA0, 0xA0, 0x78}, // 0x79 y
    {0x88, 0xC8, 0xA8, 0x98, 0x88}, // 0x7A z
    {0x00, 0x10, 0x6C, 0x82, 0x00}, // 0x7B {
    {0x00, 0x00, 0xFE, 0x00, 0x00}, // 0x7C |
    {0x00, 0x82, 0x6C, 0x10, 0x00}, // 0x7D }
    {0x20, 0x10, 0x10, 0x20, 0x10}, // 0x7E
    {0xF0, 0x88, 0x84, 0x88, 0xF0}, // 0x7F 
    {0x28, 0x7C, 0xAA, 0x82, 0x44}, // 0x80 €
    {0xF0, 0x29, 0x27, 0x21, 0xFF}, // 0x81 
    {0x00, 0xA0, 0x60, 0x00, 0x00}, // 0x82 ‚
    {0x40, 0x90, 0x7C, 0x12, 0x04}, // 0x83 ƒ
    {0xC0, 0xA0, 0x00, 0xC0, 0xA0}, // 0x84 „
    {0x80, 0x00, 0x80, 0x00, 0x80}, // 0x85 …
    {0x00, 0x04, 0xFE, 0x04, 0x00}, // 0x86 †
    {0x00, 0x44, 0xFE, 0x44, 0x00}, // 0x87 ‡
    {0x00, 0x04, 0x02, 0x04, 0x00}, // 0x88 ˆ
    {0xC3, 0xD3, 0x08, 0xC4, 0xC2}, // 0x89 ‰
    {0x4C, 0x93, 0x92, 0x93, 0x64}, // 0x8A Š
    {0x00, 0x10, 0x28, 0x00, 0x00}, // 0x8B ‹
    {0x7C, 0x82, 0x82, 0x7C, 0x92}, // 0x8C Œ
    {0x02, 0xFE, 0x90, 0x90, 0x60}, // 0x8D 
    {0xC2, 0xA3, 0x92, 0x8B, 0x86}, // 0x8E Ž
    {0x44, 0x92, 0x8A, 0x92, 0x7C}, // 0x8F 
    {0x70, 0x88, 0x90, 0x60, 0x98}, // 0x90 
    {0x00, 0x02, 0x04, 0x08, 0x00}, // 0x91 ‘
    {0x00, 0x08, 0x04, 0x02, 0x00}, // 0x92 ’
    {0x02, 0x04, 0x0A, 0x04, 0x08}, // 0x93 “
    {0x08, 0x04, 0x0A, 0x04, 0x02}, // 0x94 ”
    {0x00, 0x38, 0x38, 0x38, 0x00}, // 0x95 •
    {0x00, 0x10, 0x10, 0x10, 0x10}, // 0x96 –
    {0x10, 0x10, 0x10, 0x10, 0x10}, // 0x97 —
    {0x02, 0x01, 0x02, 0x04, 0x02}, // 0x98 ˜
    {0xF1, 0x5B, 0x55, 0x51, 0x51}, // 0x99 ™
    {0x90, 0xA9, 0xAA, 0xA9, 0x40}, // 0x9A š
    {0x00, 0x88, 0x50, 0x20, 0x00}, // 0x9B ›
    {0x70, 0x88, 0x70, 0xA8, 0xB0}, // 0x9C œ°
    {0x38, 0x7C, 0xF8, 0x7C, 0x38}, // 0x9D 
    {0x88, 0xC9, 0xAA, 0x99, 0x88}, // 0x9E ž
    {0x1C, 0x21, 0xC0, 0x21, 0x1C}, // 0x9F Ÿ
    {0x00, 0x00, 0x00, 0x00, 0x00}, // 0xA0
    {0x00, 0x00, 0xF2, 0x00, 0x00}, // 0xA1 ¡
    {0x38, 0x44, 0xFE, 0x44, 0x20}, // 0xA2 ¢
    {0x90, 0x7C, 0x92, 0x82, 0x40}, // 0xA3 £
    {0x44, 0x38, 0x28, 0x38, 0x44}, // 0xA4 ¤
    {0x2A, 0x2C, 0xF8, 0x2C, 0x2A}, // 0xA5 ¥
    {0x00, 0x00, 0xEE, 0x00, 0x00}, // 0xA6 ¦
    {0x40, 0x94, 0xAA, 0x52, 0x04}, // 0xA7 §
    {0x00, 0x02, 0x00, 0x02, 0x00}, // 0xA8 ¨
    {0xFE, 0x82, 0xBA, 0x92, 0xFE}, // 0xA9 ©
    {0x90, 0xAA, 0xAA, 0xAA, 0xBC}, // 0xAA ª
    {0x20, 0x50, 0xA8, 0x50, 0x88}, // 0xAB «
    {0x20, 0x20, 0x20, 0x20, 0xE0}, // 0xAC ¬
    {0x20, 0x20, 0x20, 0x20, 0x20}, // 0xAD ­
    {0xFE, 0x82, 0xCA, 0xA2, 0xFE}, // 0xAE ®
    {0x02, 0x02, 0x02, 0x02, 0x02}, // 0xAF ¯
    {0x0E, 0x11, 0x11, 0x0E, 0x00}, // 0xB0 °
    {0x88, 0x88, 0xBE, 0x88, 0x88}, // 0xB1 ±
    {0x12, 0x19, 0x15, 0x12, 0x00}, // 0xB2 ²
    {0x11, 0x15, 0x15, 0x0A, 0x00}, // 0xB3 ³
    {0x00, 0x08, 0x04, 0x02, 0x00}, // 0xB4 ´
    {0xFE, 0x20, 0x20, 0x10, 0x3E}, // 0xB5 µ
    {0x0C, 0x12, 0x12, 0xFE, 0xFE}, // 0xB6 ¶
    {0x00, 0x30, 0x30, 0x00, 0x00}, // 0xB7 ·
    {0x00, 0x80, 0xB0, 0x40, 0x00}, // 0xB8 ¸
    {0x00, 0x02, 0x0F, 0x00, 0x00}, // 0xB9 ¹
    {0x00, 0x02, 0x05, 0x02, 0x00}, // 0xBA º
    {0x44, 0x28, 0x54, 0x28, 0x10}, // 0xBB »
    {0x22, 0x1F, 0x68, 0x54, 0xFA}, // 0xBC ¼
    {0x02, 0x1F, 0x90, 0xC8, 0xB0}, // 0xBD ½
    {0x15, 0x1F, 0x60, 0x50, 0xF8}, // 0xBE ¾
    {0x60, 0x90, 0x8A, 0x80, 0x40}, // 0xBF ¿
    {0xF0, 0x29, 0x26, 0x28, 0xF0}, // 0xC0 À
    {0xF0, 0x28, 0x26, 0x29, 0xF0}, // 0xC1 Á
    {0xF0, 0x2A, 0x29, 0x2A, 0xF0}, // 0xC2 Â
    {0xF2, 0x29, 0x29, 0x2A, 0xF1}, // 0xC3 Ã
    {0xF0, 0x29, 0x24, 0x29, 0xF0}, // 0xC4 Ä
    {0xF0, 0x2A, 0x2D, 0x2A, 0xF0}, // 0xC5 Å
    {0xF8, 0x24, 0xFE, 0x92, 0x92}, // 0xC6 Æ
    {0x1E, 0x21, 0xA1, 0xE1, 0x12}, // 0xC7 Ç
    {0xF8, 0xA9, 0xAA, 0xA8, 0x88}, // 0xC8 È
    {0xF8, 0xA8, 0xAA, 0xA9, 0x88}, // 0xC9 É
    {0xF8, 0xAA, 0xA9, 0xAA, 0x88}, // 0xCA Ê
    {0xF8, 0xAA, 0xA8, 0xAA, 0x88}, // 0xCB Ë
    {0x00, 0x89, 0xFA, 0x88, 0x00}, // 0xCC Ì
    {0x00, 0x88, 0xFA, 0x89, 0x00}, // 0xCD Í
    {0x00, 0x8A, 0xF9, 0x8A, 0x00}, // 0xCE Î
    {0x00, 0x8A, 0xF8, 0x8A, 0x00}, // 0xCF Ï
    {0x10, 0xFE, 0x92, 0x82, 0x7C}, // 0xD0 Ð
    {0xFA, 0x11, 0x21, 0x42, 0xF9}, // 0xD1 Ñ
    {0x78, 0x85, 0x86, 0x84, 0x78}, // 0xD2 Ò
    {0x78, 0x84, 0x86, 0x85, 0x78}, // 0xD3 Ó
    {0x70, 0x8A, 0x89, 0x8A, 0x70}, // 0xD4 Ô
    {0x72, 0x89, 0x89, 0x8A, 0x71}, // 0xD5 Õ
    {0x78, 0x85, 0x84, 0x85, 0x78}, // 0xD6 Ö
    {0x44, 0x28, 0x10, 0x28, 0x44}, // 0xD7 ×
    {0x10, 0xAA, 0xFE, 0xAA, 0x10}, // 0xD8 Ø
    {0x7C, 0x81, 0x82, 0x80, 0x7C}, // 0xD9 Ù
    {0x7C, 0x80, 0x82, 0x81, 0x7C}, // 0xDA Ú
    {0x78, 0x82, 0x81, 0x82, 0x78}, // 0xDB Û
    {0x7C, 0x81, 0x80, 0x81, 0x7C}, // 0xDC Ü
    {0x04, 0x08, 0xF2, 0x09, 0x04}, // 0xDD Ý
    {0x81, 0xFF, 0x24, 0x24, 0x18}, // 0xDE Þ
    {0x80, 0x7C, 0x92, 0x92, 0x6C}, // 0xDF ß
    {0x40, 0xA9, 0xAA, 0xA8, 0xF0}, // 0xE0 à
    {0x40, 0xA8, 0xAA, 0xA9, 0xF0}, // 0xE1 á
    {0x40, 0xAA, 0xA9, 0xAA, 0xF0}, // 0xE2 â
    {0x42, 0xA9, 0xA9, 0xAA, 0xF1}, // 0xE3 ã
    {0x40, 0xAA, 0xA8, 0xAA, 0xF0}, // 0xE4 ä
    {0x40, 0xAA, 0xAD, 0xAA, 0xF0}, // 0xE5 å
    {0x64, 0x94, 0x78, 0x94, 0x58}, // 0xE6 æ
    {0x18, 0x24, 0xA4, 0xE4, 0x10}, // 0xE7 ç
    {0x70, 0xA9, 0xAA, 0xA8, 0x30}, // 0xE8 è
    {0x70, 0xA8, 0xAA, 0xA9, 0x30}, // 0xE9 é
    {0x70, 0xAA, 0xA9, 0xAA, 0x30}, // 0xEA ê
    {0x70, 0xAA, 0xA8, 0xAA, 0x30}, // 0xEB ë
    {0x00, 0x91, 0xFA, 0x80, 0x00}, // 0xEC ì
    {0x00, 0x90, 0xFA, 0x81, 0x00}, // 0xED í
    {0x00, 0x92, 0xF9, 0x82, 0x00}, // 0xEE î
    {0x00, 0x92, 0xF8, 0x82, 0x00}, // 0xEF ï
    {0x4A, 0xA4, 0xAA, 0xB0, 0x60}, // 0xF0 ð
    {0xFA, 0x11, 0x09, 0x0A, 0xF1}, // 0xF1 ñ
    {0x70, 0x89, 0x8A, 0x88, 0x70}, // 0xF2 ò
    {0x70, 0x88, 0x8A, 0x89, 0x70}, // 0xF3 ó
    {0x60, 0x94, 0x92, 0x94, 0x60}, // 0xF4 ô
    {0x64, 0x92, 0x92, 0x94, 0x62}, // 0xF5 õ
    {0x70, 0x8A, 0x88, 0x8A, 0x70}, // 0xF6 ö
    {0x10, 0x10, 0x54, 0x10, 0x10}, // 0xF7 ÷
    {0x10, 0xA8, 0x7C, 0x2A, 0x10}, // 0xF8 ø
    {0x78, 0x81, 0x82, 0x40, 0xF8}, // 0xF9 ù
    {0x78, 0x80, 0x82, 0x41, 0xF8}, // 0xFA ú
    {0x78, 0x82, 0x81, 0x42, 0xF8}, // 0xFB û
    {0x78, 0x82, 0x80, 0x42, 0xF8}, // 0xFC ü
    {0x18, 0xA0, 0xA4, 0xA2, 0x78}, // 0xFD v
    {0x00, 0x82, 0xFE, 0xA8, 0x10}, // 0xFE þ
    {0x18, 0xA2, 0xA0, 0xA2, 0x78}  // 0xFF ÿ
};

const uint8_t ascii_font_8x8[256][8] = {
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // 0x00
    {0x7E, 0x81, 0x95, 0xB1, 0xB1, 0x95, 0x81, 0x7E}, // 0x01
    {0x7E, 0xFF, 0xEB, 0xCF, 0xCF, 0xEB, 0xFF, 0x7E}, // 0x02
    {0x0E, 0x1F, 0x3F, 0x7E, 0x3F, 0x1F, 0x0E, 0x00}, // 0x03
    {0x08, 0x1C, 0x3E, 0x7F, 0x3E, 0x1C, 0x08, 0x00}, // 0x04
    {0x38, 0x3A, 0x9F, 0xFF, 0x9F, 0x3A, 0x38, 0x00}, // 0x05
    {0x10, 0x38, 0xBC, 0xFF, 0xBC, 0x38, 0x10, 0x00}, // 0x06
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // 0x07
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // 0x08
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // 0x09
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // 0x0A
    {0x70, 0xF8, 0x88, 0x88, 0xFD, 0x7F, 0x07, 0x0F}, // 0x0B
    {0x00, 0x4E, 0x5F, 0xF1, 0xF1, 0x5F, 0x4E, 0x00}, // 0x0C
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // 0x0D
    {0xC0, 0xFF, 0x7F, 0x05, 0x05, 0x65, 0x7F, 0x3F}, // 0x0E
    {0x99, 0x5A, 0x3C, 0xE7, 0xE7, 0x3C, 0x5A, 0x99}, // 0x0F
    {0x7F, 0x3E, 0x3E, 0x1C, 0x1C, 0x08, 0x08, 0x00}, // 0x10
    {0x08, 0x08, 0x1C, 0x1C, 0x3E, 0x3E, 0x7F, 0x00}, // 0x11
    {0x00, 0x24, 0x66, 0xFF, 0xFF, 0x66, 0x24, 0x00}, // 0x12
    {0x00, 0x5F, 0x5F, 0x00, 0x00, 0x5F, 0x5F, 0x00}, // 0x13
    {0x06, 0x0F, 0x09, 0x7F, 0x7F, 0x01, 0x7F, 0x7F}, // 0x14
    {0xDA, 0xBF, 0xA5, 0xA5, 0xFD, 0x59, 0x03, 0x02}, // 0x15
    {0x00, 0x70, 0x70, 0x70, 0x70, 0x70, 0x70, 0x00}, // 0x16
    {0x80, 0x94, 0xB6, 0xFF, 0xFF, 0xB6, 0x94, 0x80}, // 0x17
    {0x00, 0x04, 0x06, 0x7F, 0x7F, 0x06, 0x04, 0x00}, // 0x18
    {0x00, 0x10, 0x30, 0x7F, 0x7F, 0x30, 0x10, 0x00}, // 0x19
    {0x08, 0x08, 0x08, 0x2A, 0x3E, 0x1C, 0x08, 0x00}, // 0x1A
    {0x08, 0x1C, 0x3E, 0x2A, 0x08, 0x08, 0x08, 0x00}, // 0x1B
    {0x3C, 0x3C, 0x20, 0x20, 0x20, 0x20, 0x20, 0x00}, // 0x1C
    {0x08, 0x1C, 0x3E, 0x08, 0x08, 0x3E, 0x1C, 0x08}, // 0x1D
    {0x30, 0x38, 0x3C, 0x3E, 0x3E, 0x3C, 0x38, 0x30}, // 0x1E
    {0x06, 0x0E, 0x1E, 0x3E, 0x3E, 0x1E, 0x0E, 0x06}, // 0x1F
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // 0x20
    {0x00, 0x06, 0x5F, 0x5F, 0x06, 0x00, 0x00, 0x00}, // 0x21
    {0x00, 0x07, 0x07, 0x00, 0x07, 0x07, 0x00, 0x00}, // 0x22
    {0x14, 0x7F, 0x7F, 0x14, 0x7F, 0x7F, 0x14, 0x00}, // 0x23
    {0x24, 0x2E, 0x6B, 0x6B, 0x3A, 0x12, 0x00, 0x00}, // 0x24
    {0x46, 0x66, 0x30, 0x18, 0x0C, 0x66, 0x62, 0x00}, // 0x25
    {0x30, 0x7A, 0x4F, 0x5D, 0x37, 0x7A, 0x48, 0x00}, // 0x26
    {0x04, 0x07, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00}, // 0x27
    {0x00, 0x1C, 0x3E, 0x63, 0x41, 0x00, 0x00, 0x00}, // 0x28
    {0x00, 0x41, 0x63, 0x3E, 0x1C, 0x00, 0x00, 0x00}, // 0x29
    {0x08, 0x2A, 0x3E, 0x1C, 0x1C, 0x3E, 0x2A, 0x08}, // 0x2A
    {0x08, 0x08, 0x3E, 0x3E, 0x08, 0x08, 0x00, 0x00}, // 0x2B
    {0x00, 0xA0, 0xE0, 0x60, 0x00, 0x00, 0x00, 0x00}, // 0x2C
    {0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x00, 0x00}, // 0x2D
    {0x00, 0x00, 0x60, 0x60, 0x00, 0x00, 0x00, 0x00}, // 0x2E
    {0x60, 0x30, 0x18, 0x0C, 0x06, 0x03, 0x01, 0x00}, // 0x2F
    {0x3E, 0x7F, 0x59, 0x4D, 0x7F, 0x3E, 0x00, 0x00}, // 0x30
    {0x42, 0x42, 0x7F, 0x7F, 0x40, 0x40, 0x00, 0x00}, // 0x31
    {0x62, 0x73, 0x59, 0x49, 0x6F, 0x66, 0x00, 0x00}, // 0x32
    {0x22, 0x63, 0x49, 0x49, 0x7F, 0x36, 0x00, 0x00}, // 0x33
    {0x18, 0x1C, 0x16, 0x13, 0x7F, 0x7F, 0x10, 0x00}, // 0x34
    {0x27, 0x67, 0x45, 0x45, 0x7D, 0x39, 0x00, 0x00}, // 0x35
    {0x3C, 0x7E, 0x4B, 0x49, 0x79, 0x30, 0x00, 0x00}, // 0x36
    {0x03, 0x63, 0x71, 0x19, 0x0F, 0x07, 0x00, 0x00}, // 0x37
    {0x36, 0x7F, 0x49, 0x49, 0x7F, 0x36, 0x00, 0x00}, // 0x38
    {0x06, 0x4F, 0x49, 0x69, 0x3F, 0x1E, 0x00, 0x00}, // 0x39
    {0x00, 0x00, 0x6C, 0x6C, 0x00, 0x00, 0x00, 0x00}, // 0x3A
    {0x00, 0xA0, 0xEC, 0x6C, 0x00, 0x00, 0x00, 0x00}, // 0x3B
    {0x08, 0x1C, 0x36, 0x63, 0x41, 0x00, 0x00, 0x00}, // 0x3C
    {0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x00, 0x00}, // 0x3D
    {0x00, 0x41, 0x63, 0x36, 0x1C, 0x08, 0x00, 0x00}, // 0x3E
    {0x02, 0x03, 0x51, 0x59, 0x0F, 0x06, 0x00, 0x00}, // 0x3F
    {0x3E, 0x7F, 0x41, 0x5D, 0x5D, 0x1F, 0x1E, 0x00}, // 0x40
    {0x7C, 0x7E, 0x13, 0x13, 0x7E, 0x7C, 0x00, 0x00}, // 0x41
    {0x41, 0x7F, 0x7F, 0x49, 0x49, 0x7F, 0x36, 0x00}, // 0x42
    {0x1C, 0x3E, 0x63, 0x41, 0x41, 0x63, 0x22, 0x00}, // 0x43
    {0x41, 0x7F, 0x7F, 0x41, 0x63, 0x7F, 0x1C, 0x00}, // 0x44
    {0x41, 0x7F, 0x7F, 0x49, 0x5D, 0x41, 0x63, 0x00}, // 0x45
    {0x41, 0x7F, 0x7F, 0x49, 0x1D, 0x01, 0x03, 0x00}, // 0x46
    {0x1C, 0x3E, 0x63, 0x41, 0x51, 0x73, 0x72, 0x00}, // 0x47
    {0x7F, 0x7F, 0x08, 0x08, 0x7F, 0x7F, 0x00, 0x00}, // 0x48
    {0x00, 0x41, 0x7F, 0x7F, 0x41, 0x00, 0x00, 0x00}, // 0x49
    {0x30, 0x70, 0x40, 0x41, 0x7F, 0x3F, 0x01, 0x00}, // 0x4A
    {0x41, 0x7F, 0x7F, 0x08, 0x1C, 0x77, 0x63, 0x00}, // 0x4B
    {0x41, 0x7F, 0x7F, 0x41, 0x40, 0x60, 0x70, 0x00}, // 0x4C
    {0x7F, 0x7F, 0x06, 0x0C, 0x06, 0x7F, 0x7F, 0x00}, // 0x4D
    {0x7F, 0x7F, 0x06, 0x0C, 0x18, 0x7F, 0x7F, 0x00}, // 0x4E
    {0x1C, 0x3E, 0x63, 0x41, 0x63, 0x3E, 0x1C, 0x00}, // 0x4F
    {0x41, 0x7F, 0x7F, 0x49, 0x09, 0x0F, 0x06, 0x00}, // 0x50
    {0x1E, 0x3F, 0x21, 0x71, 0x7F, 0x5E, 0x00, 0x00}, // 0x51
    {0x41, 0x7F, 0x7F, 0x19, 0x39, 0x6F, 0x46, 0x00}, // 0x52
    {0x26, 0x67, 0x4D, 0x59, 0x7B, 0x32, 0x00, 0x00}, // 0x53
    {0x03, 0x41, 0x7F, 0x7F, 0x41, 0x03, 0x00, 0x00}, // 0x54
    {0x7F, 0x7F, 0x40, 0x40, 0x7F, 0x7F, 0x00, 0x00}, // 0x55
    {0x1F, 0x3F, 0x60, 0x60, 0x3F, 0x1F, 0x00, 0x00}, // 0x56
    {0x7F, 0x7F, 0x30, 0x18, 0x30, 0x7F, 0x7F, 0x00}, // 0x57
    {0x63, 0x77, 0x1C, 0x08, 0x1C, 0x77, 0x63, 0x00}, // 0x58
    {0x07, 0x4F, 0x78, 0x78, 0x4F, 0x07, 0x00, 0x00}, // 0x59
    {0x67, 0x73, 0x59, 0x4D, 0x47, 0x63, 0x71, 0x00}, // 0x5A
    {0x00, 0x7F, 0x7F, 0x41, 0x41, 0x00, 0x00, 0x00}, // 0x5B
    {0x01, 0x03, 0x06, 0x0C, 0x18, 0x30, 0x60, 0x00}, // 0x5C
    {0x00, 0x41, 0x41, 0x7F, 0x7F, 0x00, 0x00, 0x00}, // 0x5D
    {0x08, 0x0C, 0x06, 0x03, 0x06, 0x0C, 0x08, 0x00}, // 0x5E
    {0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80}, // 0x5F
    {0x00, 0x00, 0x03, 0x07, 0x04, 0x00, 0x00, 0x00}, // 0x60
    {0x20, 0x74, 0x54, 0x54, 0x3C, 0x78, 0x40, 0x00}, // 0x61
    {0x41, 0x3F, 0x7F, 0x44, 0x44, 0x7C, 0x38, 0x00}, // 0x62
    {0x38, 0x7C, 0x44, 0x44, 0x6C, 0x28, 0x00, 0x00}, // 0x63
    {0x30, 0x78, 0x48, 0x49, 0x3F, 0x7F, 0x40, 0x00}, // 0x64
    {0x38, 0x7C, 0x54, 0x54, 0x5C, 0x18, 0x00, 0x00}, // 0x65
    {0x48, 0x7E, 0x7F, 0x49, 0x03, 0x02, 0x00, 0x00}, // 0x66
    {0x98, 0xBC, 0xA4, 0xA4, 0xF8, 0x7C, 0x04, 0x00}, // 0x67
    {0x41, 0x7F, 0x7F, 0x08, 0x04, 0x7C, 0x78, 0x00}, // 0x68
    {0x00, 0x44, 0x7D, 0x7D, 0x40, 0x00, 0x00, 0x00}, // 0x69
    {0x40, 0xC4, 0x84, 0xFD, 0x7D, 0x00, 0x00, 0x00}, // 0x6A
    {0x41, 0x7F, 0x7F, 0x10, 0x38, 0x6C, 0x44, 0x00}, // 0x6B
    {0x00, 0x41, 0x7F, 0x7F, 0x40, 0x00, 0x00, 0x00}, // 0x6C
    {0x7C, 0x7C, 0x0C, 0x18, 0x0C, 0x7C, 0x78, 0x00}, // 0x6D
    {0x7C, 0x7C, 0x04, 0x04, 0x7C, 0x78, 0x00, 0x00}, // 0x6E
    {0x38, 0x7C, 0x44, 0x44, 0x7C, 0x38, 0x00, 0x00}, // 0x6F
    {0x84, 0xFC, 0xF8, 0xA4, 0x24, 0x3C, 0x18, 0x00}, // 0x70
    {0x18, 0x3C, 0x24, 0xA4, 0xF8, 0xFC, 0x84, 0x00}, // 0x71
    {0x44, 0x7C, 0x78, 0x44, 0x1C, 0x18, 0x00, 0x00}, // 0x72
    {0x48, 0x5C, 0x54, 0x54, 0x74, 0x24, 0x00, 0x00}, // 0x73
    {0x00, 0x04, 0x3E, 0x7F, 0x44, 0x24, 0x00, 0x00}, // 0x74
    {0x3C, 0x7C, 0x40, 0x40, 0x3C, 0x7C, 0x40, 0x00}, // 0x75
    {0x1C, 0x3C, 0x60, 0x60, 0x3C, 0x1C, 0x00, 0x00}, // 0x76
    {0x3C, 0x7C, 0x60, 0x30, 0x60, 0x7C, 0x3C, 0x00}, // 0x77
    {0x44, 0x6C, 0x38, 0x10, 0x38, 0x6C, 0x44, 0x00}, // 0x78
    {0x9C, 0xBC, 0xA0, 0xA0, 0xFC, 0x7C, 0x00, 0x00}, // 0x79
    {0x4C, 0x64, 0x74, 0x5C, 0x4C, 0x64, 0x00, 0x00}, // 0x7A
    {0x08, 0x08, 0x3E, 0x77, 0x41, 0x41, 0x00, 0x00}, // 0x7B
    {0x00, 0x00, 0x00, 0x77, 0x77, 0x00, 0x00, 0x00}, // 0x7C
    {0x41, 0x41, 0x77, 0x3E, 0x08, 0x08, 0x00, 0x00}, // 0x7D
    {0x02, 0x03, 0x01, 0x03, 0x02, 0x03, 0x01, 0x00}, // 0x7E
    {0x78, 0x7C, 0x46, 0x43, 0x46, 0x7C, 0x78, 0x00}, // 0x7F
    {0x1E, 0xBF, 0xE1, 0x61, 0x33, 0x12, 0x00, 0x00}, // 0x80
    {0x3A, 0x7A, 0x40, 0x40, 0x7A, 0x7A, 0x40, 0x00}, // 0x81
    {0x38, 0x7C, 0x56, 0x57, 0x5D, 0x18, 0x00, 0x00}, // 0x82
    {0x02, 0x23, 0x75, 0x55, 0x55, 0x7D, 0x7B, 0x42}, // 0x83
    {0x21, 0x75, 0x54, 0x54, 0x7D, 0x79, 0x40, 0x00}, // 0x84
    {0x20, 0x75, 0x57, 0x56, 0x7C, 0x78, 0x40, 0x00}, // 0x85
    {0x00, 0x22, 0x77, 0x55, 0x55, 0x7F, 0x7A, 0x40}, // 0x86
    {0x1C, 0xBE, 0xE2, 0x62, 0x36, 0x14, 0x00, 0x00}, // 0x87
    {0x02, 0x3B, 0x7D, 0x55, 0x55, 0x5D, 0x1B, 0x02}, // 0x88
    {0x39, 0x7D, 0x54, 0x54, 0x5D, 0x19, 0x00, 0x00}, // 0x89
    {0x38, 0x7D, 0x57, 0x56, 0x5C, 0x18, 0x00, 0x00}, // 0x8A
    {0x01, 0x45, 0x7C, 0x7C, 0x41, 0x01, 0x00, 0x00}, // 0x8B
    {0x02, 0x03, 0x45, 0x7D, 0x7D, 0x43, 0x02, 0x00}, // 0x8C
    {0x00, 0x45, 0x7F, 0x7E, 0x40, 0x00, 0x00, 0x00}, // 0x8D
    {0x79, 0x7D, 0x26, 0x26, 0x7D, 0x79, 0x00, 0x00}, // 0x8E
    {0x70, 0x7A, 0x2D, 0x2D, 0x7A, 0x70, 0x00, 0x00}, // 0x8F
    {0x44, 0x7C, 0x7E, 0x57, 0x55, 0x44, 0x00, 0x00}, // 0x90
    {0x20, 0x74, 0x54, 0x54, 0x7C, 0x7C, 0x54, 0x54}, // 0x91
    {0x7C, 0x7E, 0x0B, 0x09, 0x7F, 0x7F, 0x49, 0x00}, // 0x92
    {0x32, 0x7B, 0x49, 0x49, 0x7B, 0x32, 0x00, 0x00}, // 0x93
    {0x32, 0x7A, 0x48, 0x48, 0x7A, 0x32, 0x00, 0x00}, // 0x94
    {0x30, 0x79, 0x4B, 0x4A, 0x78, 0x30, 0x00, 0x00}, // 0x95
    {0x3A, 0x7B, 0x41, 0x41, 0x7B, 0x7A, 0x40, 0x00}, // 0x96
    {0x38, 0x79, 0x43, 0x42, 0x78, 0x78, 0x40, 0x00}, // 0x97
    {0xBA, 0xBA, 0xA0, 0xA0, 0xFA, 0x7A, 0x00, 0x00}, // 0x98
    {0x39, 0x7D, 0x44, 0x44, 0x44, 0x7D, 0x39, 0x00}, // 0x99
    {0x3D, 0x7D, 0x40, 0x40, 0x7D, 0x3D, 0x00, 0x00}, // 0x9A
    {0x38, 0x7C, 0x64, 0x54, 0x4C, 0x7C, 0x38, 0x00}, // 0x9B
    {0x68, 0x7E, 0x7F, 0x49, 0x43, 0x66, 0x20, 0x00}, // 0x9C
    {0x5C, 0x3E, 0x73, 0x49, 0x67, 0x3E, 0x1D, 0x00}, // 0x9D
    {0x44, 0x6C, 0x38, 0x38, 0x6C, 0x44, 0x00, 0x00}, // 0x9E
    {0x40, 0xC8, 0x88, 0xFE, 0x7F, 0x09, 0x0B, 0x02}, // 0x9F
    {0x20, 0x74, 0x56, 0x57, 0x7D, 0x78, 0x40, 0x00}, // 0xA0
    {0x00, 0x44, 0x7E, 0x7F, 0x41, 0x00, 0x00, 0x00}, // 0xA1
    {0x30, 0x78, 0x48, 0x4A, 0x7B, 0x31, 0x00, 0x00}, // 0xA2
    {0x38, 0x78, 0x40, 0x42, 0x7B, 0x79, 0x40, 0x00}, // 0xA3
    {0x7A, 0x7B, 0x09, 0x0B, 0x7A, 0x73, 0x01, 0x00}, // 0xA4
    {0x7A, 0x7B, 0x19, 0x33, 0x7A, 0x7B, 0x01, 0x00}, // 0xA5
    {0x00, 0x26, 0x2F, 0x29, 0x2F, 0x2F, 0x28, 0x00}, // 0xA6
    {0x00, 0x26, 0x2F, 0x29, 0x29, 0x2F, 0x26, 0x00}, // 0xA7
    {0x30, 0x78, 0x4D, 0x45, 0x60, 0x20, 0x00, 0x00}, // 0xA8
    {0x1C, 0x22, 0x7D, 0x4B, 0x5B, 0x65, 0x22, 0x1C}, // 0xA9
    {0x08, 0x08, 0x08, 0x08, 0x38, 0x38, 0x00, 0x00}, // 0xAA
    {0x61, 0x3F, 0x1F, 0xCC, 0xEE, 0xAB, 0xB9, 0x90}, // 0xAB
    {0x61, 0x3F, 0x1F, 0x4C, 0x66, 0x73, 0xD9, 0xF8}, // 0xAC
    {0x00, 0x00, 0x60, 0xFA, 0xFA, 0x60, 0x00, 0x00}, // 0xAD
    {0x08, 0x1C, 0x36, 0x22, 0x08, 0x1C, 0x36, 0x22}, // 0xAE
    {0x22, 0x36, 0x1C, 0x08, 0x22, 0x36, 0x1C, 0x08}, // 0xAF
    {0xAA, 0x00, 0x55, 0x00, 0xAA, 0x00, 0x55, 0x00}, // 0xB0
    {0xAA, 0x55, 0xAA, 0x55, 0xAA, 0x55, 0xAA, 0x55}, // 0xB1
    {0x55, 0xFF, 0xAA, 0xFF, 0x55, 0xFF, 0xAA, 0xFF}, // 0xB2
    {0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00}, // 0xB3
    {0x10, 0x10, 0x10, 0xFF, 0xFF, 0x00, 0x00, 0x00}, // 0xB4
    {0x70, 0x78, 0x2C, 0x2E, 0x7B, 0x71, 0x00, 0x00}, // 0xB5
    {0x72, 0x79, 0x2D, 0x2D, 0x79, 0x72, 0x00, 0x00}, // 0xB6
    {0x71, 0x7B, 0x2E, 0x2C, 0x78, 0x70, 0x00, 0x00}, // 0xB7
    {0x1C, 0x22, 0x5D, 0x55, 0x55, 0x41, 0x22, 0x1C}, // 0xB8
    {0x14, 0x14, 0xF7, 0xF7, 0x00, 0xFF, 0xFF, 0x00}, // 0xB9
    {0x00, 0x00, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x00}, // 0xBA
    {0x14, 0x14, 0xF4, 0xF4, 0x04, 0xFC, 0xFC, 0x00}, // 0xBB
    {0x14, 0x14, 0x17, 0x17, 0x10, 0x1F, 0x1F, 0x00}, // 0xBC
    {0x18, 0x3C, 0x24, 0xE7, 0xE7, 0x24, 0x24, 0x00}, // 0xBD
    {0x2B, 0x2F, 0xFC, 0xFC, 0x2F, 0x2B, 0x00, 0x00}, // 0xBE
    {0x10, 0x10, 0x10, 0xF0, 0xF0, 0x00, 0x00, 0x00}, // 0xBF
    {0x00, 0x00, 0x00, 0x1F, 0x1F, 0x10, 0x10, 0x10}, // 0xC0
    {0x10, 0x10, 0x10, 0x1F, 0x1F, 0x10, 0x10, 0x10}, // 0xC1
    {0x10, 0x10, 0x10, 0xF0, 0xF0, 0x10, 0x10, 0x10}, // 0xC2
    {0x00, 0x00, 0x00, 0xFF, 0xFF, 0x10, 0x10, 0x10}, // 0xC3
    {0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10}, // 0xC4
    {0x10, 0x10, 0x10, 0xFF, 0xFF, 0x10, 0x10, 0x10}, // 0xC5
    {0x22, 0x77, 0x55, 0x57, 0x7E, 0x7B, 0x41, 0x00}, // 0xC6
    {0x72, 0x7B, 0x2D, 0x2F, 0x7A, 0x73, 0x01, 0x00}, // 0xC7
    {0x00, 0x00, 0x1F, 0x1F, 0x10, 0x17, 0x17, 0x14}, // 0xC8
    {0x00, 0x00, 0xFC, 0xFC, 0x04, 0xF4, 0xF4, 0x14}, // 0xC9
    {0x14, 0x14, 0x17, 0x17, 0x10, 0x17, 0x17, 0x14}, // 0xCA
    {0x14, 0x14, 0xF4, 0xF4, 0x04, 0xF4, 0xF4, 0x14}, // 0xCB
    {0x00, 0x00, 0xFF, 0xFF, 0x00, 0xF7, 0xF7, 0x14}, // 0xCC
    {0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14}, // 0xCD
    {0x14, 0x14, 0xF7, 0xF7, 0x00, 0xF7, 0xF7, 0x14}, // 0xCE
    {0x66, 0x3C, 0x3C, 0x24, 0x3C, 0x3C, 0x66, 0x00}, // 0xCF
    {0x05, 0x27, 0x72, 0x57, 0x7D, 0x38, 0x00, 0x00}, // 0xD0
    {0x49, 0x7F, 0x7F, 0x49, 0x63, 0x7F, 0x1C, 0x00}, // 0xD1
    {0x46, 0x7D, 0x7D, 0x55, 0x55, 0x46, 0x00, 0x00}, // 0xD2
    {0x45, 0x7D, 0x7C, 0x54, 0x55, 0x45, 0x00, 0x00}, // 0xD3
    {0x44, 0x7D, 0x7F, 0x56, 0x54, 0x44, 0x00, 0x00}, // 0xD4
    {0x0A, 0x0E, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00}, // 0xD5
    {0x00, 0x44, 0x7E, 0x7F, 0x45, 0x00, 0x00, 0x00}, // 0xD6
    {0x02, 0x45, 0x7D, 0x7D, 0x45, 0x02, 0x00, 0x00}, // 0xD7
    {0x01, 0x45, 0x7C, 0x7C, 0x45, 0x01, 0x00, 0x00}, // 0xD8
    {0x10, 0x10, 0x10, 0x1F, 0x1F, 0x00, 0x00, 0x00}, // 0xD9
    {0x00, 0x00, 0x00, 0xF0, 0xF0, 0x10, 0x10, 0x10}, // 0xDA
    {0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF}, // 0xDB
    {0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0}, // 0xDC
    {0x00, 0x00, 0x00, 0x77, 0x77, 0x00, 0x00, 0x00}, // 0xDD
    {0x00, 0x45, 0x7F, 0x7E, 0x44, 0x00, 0x00, 0x00}, // 0xDE
    {0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F}, // 0xDF
    {0x38, 0x7C, 0x46, 0x47, 0x45, 0x7C, 0x38, 0x00}, // 0xE0
    {0xFC, 0xFE, 0x2A, 0x2A, 0x3E, 0x14, 0x00, 0x00}, // 0xE1
    {0x3A, 0x7D, 0x45, 0x45, 0x45, 0x7D, 0x3A, 0x00}, // 0xE2
    {0x38, 0x7C, 0x45, 0x47, 0x46, 0x7C, 0x38, 0x00}, // 0xE3
    {0x32, 0x7B, 0x49, 0x4B, 0x7A, 0x33, 0x01, 0x00}, // 0xE4
    {0x3A, 0x7F, 0x45, 0x47, 0x46, 0x7F, 0x39, 0x00}, // 0xE5
    {0x80, 0xFE, 0x7E, 0x20, 0x20, 0x3E, 0x1E, 0x00}, // 0xE6
    {0x42, 0x7E, 0x7E, 0x54, 0x1C, 0x08, 0x00, 0x00}, // 0xE7
    {0x41, 0x7F, 0x7F, 0x55, 0x14, 0x1C, 0x08, 0x00}, // 0xE8
    {0x3C, 0x7C, 0x42, 0x43, 0x7D, 0x3C, 0x00, 0x00}, // 0xE9
    {0x3A, 0x79, 0x41, 0x41, 0x79, 0x3A, 0x00, 0x00}, // 0xEA
    {0x3C, 0x7D, 0x43, 0x42, 0x7C, 0x3C, 0x00, 0x00}, // 0xEB
    {0xB8, 0xB8, 0xA2, 0xA3, 0xF9, 0x78, 0x00, 0x00}, // 0xEC
    {0x0C, 0x5C, 0x72, 0x73, 0x5D, 0x0C, 0x00, 0x00}, // 0xED
    {0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x00, 0x00}, // 0xEE
    {0x00, 0x00, 0x02, 0x03, 0x01, 0x00, 0x00, 0x00}, // 0xEF
    {0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x00, 0x00}, // 0xF0
    {0x44, 0x44, 0x5F, 0x5F, 0x44, 0x44, 0x00, 0x00}, // 0xF1
    {0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x00, 0x00}, // 0xF2
    {0x71, 0x35, 0x1F, 0x4C, 0x66, 0x73, 0xD9, 0xF8}, // 0xF3
    {0x06, 0x0F, 0x09, 0x7F, 0x7F, 0x01, 0x7F, 0x7F}, // 0xF4
    {0xDA, 0xBF, 0xA5, 0xA5, 0xFD, 0x59, 0x03, 0x02}, // 0xF5
    {0x08, 0x08, 0x6B, 0x6B, 0x08, 0x08, 0x00, 0x00}, // 0xF6
    {0x00, 0x80, 0xC0, 0x40, 0x00, 0x00, 0x00, 0x00}, // 0xF7
    {0x00, 0x06, 0x0F, 0x09, 0x0F, 0x06, 0x00, 0x00}, // 0xF8
    {0x02, 0x02, 0x00, 0x00, 0x02, 0x02, 0x00, 0x00}, // 0xF9
    {0x00, 0x00, 0x00, 0x10, 0x10, 0x00, 0x00, 0x00}, // 0xFA
    {0x00, 0x12, 0x13, 0x1F, 0x1F, 0x10, 0x10, 0x00}, // 0xFB
    {0x00, 0x11, 0x15, 0x15, 0x1F, 0x1F, 0x0A, 0x00}, // 0xFC
    {0x00, 0x19, 0x1D, 0x15, 0x17, 0x12, 0x00, 0x00}, // 0xFD
    {0x00, 0x00, 0x3C, 0x3C, 0x3C, 0x3C, 0x00, 0x00}, // 0xFE
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}  // 0xFF
};

#endif