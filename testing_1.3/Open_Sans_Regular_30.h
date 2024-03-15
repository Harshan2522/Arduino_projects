// Created by http://oleddisplay.squix.ch/ Consider a donation
// In case of problems make sure that you are using the font file with the correct version!
const uint8_t Open_Sans_Regular_30Bitmaps[57600] PROGMEM = {

	// Bitmap Data:
	0x00, // ' '
	0xE6,0x66,0x66,0x66,0x66,0x66,0x66,0x60,0x06,0xFF,0x60, // '!'
	0xE7,0xE7,0xC3,0xC3,0xC3,0xC3,0xC3,0xC3, // '"'
	0x03,0x06,0x01,0x86,0x00,0xC3,0x00,0x61,0x80,0x60,0xC0,0x30,0x61,0xFF,0xFE,0xFF,0xFF,0x06,0x18,0x07,0x0C,0x03,0x06,0x01,0x86,0x00,0xC3,0x07,0xFF,0xFB,0xFF,0xFC,0x30,0x60,0x18,0x70,0x0C,0x30,0x06,0x18,0x03,0x0C,0x03,0x06,0x00, // '#'
	0x02,0x00,0x10,0x00,0x80,0x3F,0xC3,0xFF,0x39,0x1B,0x88,0x1C,0x40,0xE2,0x03,0x10,0x1E,0x80,0x7E,0x00,0xFC,0x01,0xF8,0x09,0xC0,0x47,0x02,0x18,0x11,0xC0,0x8F,0x84,0xEF,0xFE,0x3F,0xC0,0x08,0x00,0x40,0x02,0x00, // '$'
	0x3C,0x01,0x83,0xF0,0x0C,0x31,0xC0,0xC1,0x86,0x0E,0x0C,0x30,0x60,0x61,0x86,0x03,0x0C,0x30,0x18,0x63,0x00,0xC3,0x19,0xE6,0x19,0x9F,0xB1,0xDD,0x86,0xFC,0xCC,0x33,0xCC,0x61,0x80,0x63,0x0C,0x06,0x18,0x60,0x30,0xC3,0x03,0x06,0x18,0x38,0x30,0xC1,0x81,0x86,0x18,0x07,0xE0,0xC0,0x1E,0x00, // '%'
	0x0F,0xC0,0x01,0xFE,0x00,0x38,0x70,0x03,0x03,0x00,0x30,0x30,0x03,0x03,0x00,0x38,0x70,0x01,0x8E,0x00,0x1D,0xC0,0x00,0xF8,0x00,0x1F,0x00,0x03,0xBC,0x0C,0x71,0xE0,0xCE,0x0F,0x1C,0xC0,0x79,0x8C,0x01,0xF8,0xC0,0x0F,0x0E,0x00,0xF0,0xF0,0x3F,0x87,0xFF,0x1C,0x1F,0xC0,0xE0, // '&'
	0xFF,0xFD,0x92, // '''
	0x0E,0x18,0x61,0xC3,0x0E,0x1C,0x30,0x61,0xC3,0x87,0x0E,0x1C,0x38,0x70,0xE0,0xC1,0x83,0x87,0x06,0x0E,0x0C,0x1C,0x1C, // '('
	0xE0,0xC0,0xC1,0xC1,0x83,0x07,0x06,0x0C,0x1C,0x38,0x70,0xE1,0xC3,0x87,0x0E,0x18,0x30,0xE1,0xC3,0x0E,0x18,0x71,0xC0, // ')'
	0x03,0x80,0x07,0x00,0x0E,0x00,0x18,0x06,0x30,0xDF,0xAF,0xBF,0xFF,0x81,0xC0,0x06,0xC0,0x1D,0xC0,0x71,0xC1,0xE3,0x80,0x82,0x00, // '*'
	0x03,0x80,0x07,0x00,0x0E,0x00,0x1C,0x00,0x38,0x00,0x70,0x3F,0xFF,0xFF,0xFF,0x03,0x80,0x07,0x00,0x0E,0x00,0x1C,0x00,0x38,0x00,0x70,0x00, // '+'
	0x77,0x66,0xEC,0xC0, // ','
	0xFF,0xFF, // '-'
	0x6F,0xF6, // '.'
	0x00,0xE0,0x18,0x07,0x00,0xC0,0x18,0x07,0x00,0xC0,0x38,0x06,0x00,0xC0,0x38,0x06,0x00,0xC0,0x38,0x06,0x01,0xC0,0x30,0x06,0x01,0xC0,0x30,0x0E,0x00, // '/'
	0x07,0xC0,0x3F,0xE0,0xE1,0xE1,0x80,0xC7,0x01,0xCC,0x03,0x98,0x03,0x30,0x06,0x60,0x0D,0xC0,0x1B,0x80,0x3F,0x00,0x66,0x00,0xCC,0x01,0x98,0x03,0x30,0x0E,0x70,0x1C,0x60,0x30,0xE1,0xE0,0xFF,0x80,0x7C,0x00, // '0'
	0x06,0x3C,0xFB,0xBE,0x68,0xC1,0x83,0x06,0x0C,0x18,0x30,0x60,0xC1,0x83,0x06,0x0C,0x18,0x30,0x60, // '1'
	0x0F,0xC0,0xFF,0xC7,0x07,0x88,0x0E,0x00,0x18,0x00,0x60,0x01,0x80,0x06,0x00,0x38,0x00,0xC0,0x07,0x00,0x38,0x01,0xC0,0x0E,0x00,0x70,0x03,0x80,0x1C,0x00,0xE0,0x07,0x00,0x3F,0xFF,0xFF,0xFC, // '2'
	0x0F,0xC1,0xFF,0xC7,0x07,0x90,0x06,0x00,0x1C,0x00,0x70,0x01,0x80,0x0E,0x00,0x70,0x3F,0x00,0xFF,0x00,0x1E,0x00,0x1C,0x00,0x30,0x00,0xC0,0x03,0x00,0x1C,0x00,0x7E,0x07,0xBF,0xFC,0x3F,0xC0, // '3'
	0x00,0x70,0x00,0xE0,0x03,0xC0,0x0D,0x80,0x3B,0x00,0x66,0x01,0x8C,0x07,0x18,0x0C,0x30,0x30,0x60,0xE0,0xC3,0x81,0x86,0x03,0x18,0x06,0x3F,0xFF,0xFF,0xFF,0x00,0x30,0x00,0x60,0x00,0xC0,0x01,0x80,0x03,0x00, // '4'
	0x7F,0xF3,0xFF,0x98,0x00,0xC0,0x06,0x00,0x30,0x01,0x80,0x0C,0x00,0x7F,0x87,0xFF,0x00,0x3C,0x00,0x70,0x03,0x80,0x0C,0x00,0x60,0x03,0x00,0x38,0x01,0xF0,0x3D,0xFF,0xC7,0xF8,0x00, // '5'
	0x03,0xF0,0x3F,0xC1,0xC0,0x0E,0x00,0x70,0x01,0x80,0x0E,0x00,0x38,0x00,0xC7,0xC3,0x7F,0xCF,0x87,0xB8,0x0E,0xC0,0x1B,0x00,0x7C,0x01,0xF0,0x06,0xE0,0x19,0x80,0xE3,0x87,0x0F,0xF8,0x0F,0xC0, // '6'
	0xFF,0xFF,0xFF,0xF0,0x00,0xC0,0x07,0x00,0x18,0x00,0xE0,0x03,0x00,0x1C,0x00,0x70,0x03,0x80,0x0E,0x00,0x30,0x01,0xC0,0x06,0x00,0x38,0x00,0xC0,0x07,0x00,0x18,0x00,0xE0,0x03,0x80,0x1C,0x00, // '7'
	0x1F,0xC1,0xFF,0x1C,0x1D,0xC0,0x7E,0x03,0xF0,0x1F,0x80,0xCE,0x0E,0x38,0xE0,0xFE,0x07,0xF0,0x73,0xC6,0x07,0x60,0x1F,0x00,0x78,0x03,0xC0,0x1F,0x01,0xFC,0x1E,0xFF,0xE1,0xFC,0x00, // '8'
	0x1F,0x81,0xFF,0x1C,0x3D,0xC0,0x6C,0x03,0xE0,0x0F,0x00,0x78,0x03,0xC0,0x1F,0x01,0xFC,0x1E,0xFF,0xB1,0xF1,0x80,0x0C,0x00,0xE0,0x06,0x00,0x70,0x07,0x00,0x78,0xFF,0x07,0xE0,0x00, // '9'
	0x6F,0xF6,0x00,0x00,0x00,0x00,0x6F,0xF6, // ':'
	0x33,0xDE,0x60,0x00,0x00,0x00,0x00,0x00,0x39,0xCE,0x63,0x31,0x80, // ';'
	0x00,0x08,0x01,0xC0,0x3E,0x07,0x80,0xF0,0x1E,0x03,0xC0,0x1C,0x00,0xF8,0x00,0xF8,0x01,0xF0,0x01,0xF0,0x03,0x80,0x04, // '<'
	0xFF,0xFF,0xFF,0xC0,0x00,0x00,0x00,0x00,0x00,0x03,0xFF,0xFF,0xFF, // '='
	0x80,0x07,0x00,0x3E,0x00,0x3C,0x00,0x78,0x00,0xF0,0x01,0xE0,0x07,0x00,0xF8,0x3E,0x07,0xC1,0xF0,0x0E,0x00,0x40,0x00, // '>'
	0x1F,0x8F,0xFE,0x60,0xF0,0x03,0x00,0x30,0x03,0x00,0x30,0x07,0x00,0xE0,0x1C,0x03,0x80,0x60,0x0E,0x00,0xC0,0x0C,0x00,0x00,0x00,0x00,0xE0,0x0E,0x00,0xE0,0x0E,0x00, // '?'
	0x00,0x7F,0x00,0x07,0xFF,0x80,0x3E,0x03,0xC0,0xE0,0x01,0xC3,0x80,0x01,0xC6,0x00,0x01,0x98,0x1F,0xC3,0xB0,0x7F,0xC3,0xE1,0xC3,0x87,0x87,0x07,0x0F,0x0C,0x0C,0x1E,0x18,0x18,0x3C,0x30,0x30,0x78,0x60,0x60,0xF0,0xC0,0xC3,0xE1,0xC3,0xC6,0xC1,0xFD,0xF9,0xC1,0xF1,0xE1,0x80,0x00,0x03,0x80,0x00,0x03,0x80,0x00,0x03,0xC0,0x30,0x01,0xFF,0xE0,0x00,0xFF,0x00, // '@'
	0x00,0xE0,0x00,0x1C,0x00,0x07,0xC0,0x00,0xD8,0x00,0x1B,0x00,0x07,0x70,0x00,0xC6,0x00,0x38,0xE0,0x06,0x0C,0x00,0xC1,0x80,0x38,0x38,0x06,0x03,0x01,0xFF,0xF0,0x3F,0xFE,0x06,0x00,0xC1,0xC0,0x1C,0x30,0x01,0x8E,0x00,0x39,0x80,0x07,0x30,0x00,0x6E,0x00,0x0E, // 'A'
	0xFF,0xC3,0xFF,0xCC,0x07,0xB0,0x06,0xC0,0x1F,0x00,0x7C,0x01,0xF0,0x06,0xC0,0x73,0xFF,0x8F,0xFE,0x30,0x0E,0xC0,0x1F,0x00,0x3C,0x00,0xF0,0x03,0xC0,0x1F,0x00,0x7C,0x03,0xBF,0xFC,0xFF,0xC0, // 'B'
	0x01,0xFC,0x0F,0xFF,0x1E,0x06,0x38,0x00,0x70,0x00,0x70,0x00,0xE0,0x00,0xE0,0x00,0xE0,0x00,0xE0,0x00,0xE0,0x00,0xE0,0x00,0xE0,0x00,0xE0,0x00,0xE0,0x00,0x70,0x00,0x70,0x00,0x38,0x00,0x1E,0x02,0x0F,0xFE,0x03,0xFC, // 'C'
	0xFF,0xC0,0x7F,0xFC,0x30,0x0F,0x18,0x01,0xCC,0x00,0x76,0x00,0x3B,0x00,0x0F,0x80,0x07,0xC0,0x03,0xE0,0x01,0xF0,0x00,0xF8,0x00,0x7C,0x00,0x3E,0x00,0x1F,0x00,0x0F,0x80,0x0E,0xC0,0x07,0x60,0x0F,0x30,0x1F,0x1F,0xFF,0x0F,0xFC,0x00, // 'D'
	0xFF,0xFF,0xFF,0xE0,0x0E,0x00,0xE0,0x0E,0x00,0xE0,0x0E,0x00,0xE0,0x0F,0xFF,0xFF,0xFE,0x00,0xE0,0x0E,0x00,0xE0,0x0E,0x00,0xE0,0x0E,0x00,0xE0,0x0F,0xFF,0xFF,0xF0, // 'E'
	0xFF,0xFF,0xFF,0x00,0x60,0x0C,0x01,0x80,0x30,0x06,0x00,0xC0,0x18,0x03,0xFF,0xFF,0xFC,0x01,0x80,0x30,0x06,0x00,0xC0,0x18,0x03,0x00,0x60,0x0C,0x00, // 'F'
	0x01,0xFE,0x01,0xFF,0xE1,0xF0,0x38,0xF0,0x00,0x70,0x00,0x1C,0x00,0x0E,0x00,0x03,0x80,0x00,0xE0,0x00,0x38,0x00,0x0C,0x03,0xFF,0x80,0xFF,0xE0,0x01,0xF8,0x00,0x7E,0x00,0x1D,0xC0,0x07,0x70,0x01,0xCE,0x00,0x71,0xE0,0x1C,0x3F,0xFF,0x03,0xFF,0x00, // 'G'
	0xC0,0x03,0xC0,0x03,0xC0,0x03,0xC0,0x03,0xC0,0x03,0xC0,0x03,0xC0,0x03,0xC0,0x03,0xC0,0x03,0xFF,0xFF,0xFF,0xFF,0xC0,0x03,0xC0,0x03,0xC0,0x03,0xC0,0x03,0xC0,0x03,0xC0,0x03,0xC0,0x03,0xC0,0x03,0xC0,0x03,0xC0,0x03, // 'H'
	0xFF,0xFF,0xFF,0xFF,0xFF,0xC0, // 'I'
	0x06,0x0C,0x18,0x30,0x60,0xC1,0x83,0x06,0x0C,0x18,0x30,0x60,0xC1,0x83,0x06,0x0C,0x18,0x30,0x60,0xC1,0x87,0x0F,0xFB,0xC0, // 'J'
	0xC0,0x1D,0x80,0x73,0x00,0xC6,0x03,0x0C,0x0E,0x18,0x38,0x30,0xE0,0x63,0x80,0xCE,0x01,0xBC,0x03,0xF8,0x07,0xB8,0x0E,0x38,0x18,0x30,0x30,0x70,0x60,0x70,0xC0,0x71,0x80,0x63,0x00,0xE6,0x00,0xEC,0x00,0xE0, // 'K'
	0xE0,0x0E,0x00,0xE0,0x0E,0x00,0xE0,0x0E,0x00,0xE0,0x0E,0x00,0xE0,0x0E,0x00,0xE0,0x0E,0x00,0xE0,0x0E,0x00,0xE0,0x0E,0x00,0xE0,0x0E,0x00,0xE0,0x0F,0xFF,0xFF,0xF0, // 'L'
	0xF0,0x00,0x7F,0x80,0x03,0xFE,0x00,0x3F,0xB0,0x01,0xBD,0x80,0x0D,0xEE,0x00,0xCF,0x30,0x06,0x79,0xC0,0x73,0xC6,0x03,0x1E,0x30,0x18,0xF1,0xC1,0xC7,0x86,0x0C,0x3C,0x38,0xE1,0xE1,0xC6,0x0F,0x06,0x30,0x78,0x3B,0x83,0xC0,0xD8,0x1E,0x07,0xC0,0xF0,0x3C,0x07,0x80,0xE0,0x3C,0x07,0x01,0x80, // 'M'
	0xE0,0x01,0xF8,0x00,0xFE,0x00,0x7F,0x00,0x3D,0xC0,0x1E,0x70,0x0F,0x38,0x07,0x8E,0x03,0xC3,0x81,0xE1,0xC0,0xF0,0x70,0x78,0x1C,0x3C,0x0E,0x1E,0x03,0x8F,0x00,0xE7,0x80,0x73,0xC0,0x1D,0xE0,0x07,0xF0,0x03,0xF8,0x00,0xFC,0x00,0x38, // 'N'
	0x03,0xF8,0x01,0xFF,0xC0,0x78,0x3C,0x1C,0x01,0xC7,0x00,0x1C,0xC0,0x01,0xB8,0x00,0x3F,0x00,0x07,0xE0,0x00,0xF8,0x00,0x0F,0x00,0x01,0xE0,0x00,0x3E,0x00,0x0F,0xC0,0x01,0xF8,0x00,0x3B,0x00,0x06,0x70,0x01,0xC7,0x00,0x70,0x78,0x3C,0x07,0xFF,0x00,0x3F,0x80, // 'O'
	0xFF,0x87,0xFF,0x30,0x3D,0x80,0x7C,0x01,0xE0,0x0F,0x00,0x78,0x03,0xC0,0x3E,0x01,0xF0,0x3D,0xFF,0xCF,0xF8,0x60,0x03,0x00,0x18,0x00,0xC0,0x06,0x00,0x30,0x01,0x80,0x0C,0x00,0x00, // 'P'
	0x03,0xF8,0x01,0xFF,0xC0,0x78,0x3C,0x1C,0x01,0xC7,0x00,0x1C,0xC0,0x01,0xB8,0x00,0x3F,0x00,0x07,0xE0,0x00,0xF8,0x00,0x0F,0x00,0x01,0xE0,0x00,0x3E,0x00,0x0F,0xC0,0x01,0xF8,0x00,0x3B,0x00,0x06,0x70,0x01,0xC7,0x00,0x70,0x78,0x3C,0x07,0xFF,0x00,0x3F,0x80,0x00,0x38,0x00,0x03,0x80,0x00,0x78,0x00,0x07,0x80,0x00,0x78, // 'Q'
	0xFF,0xC1,0xFF,0xE3,0x81,0xE7,0x00,0xEE,0x01,0xDC,0x03,0xB8,0x07,0x70,0x0E,0xE0,0x19,0xC0,0xF3,0xFF,0x87,0xFE,0x0E,0x1C,0x1C,0x1C,0x38,0x18,0x70,0x38,0xE0,0x39,0xC0,0x73,0x80,0x77,0x00,0x7E,0x00,0xE0, // 'R'
	0x1F,0xC3,0xFF,0x9C,0x0D,0xC0,0x0C,0x00,0x60,0x03,0x00,0x1C,0x00,0x78,0x01,0xF0,0x07,0xE0,0x07,0xC0,0x0F,0x00,0x38,0x00,0xE0,0x07,0x00,0x38,0x03,0xB0,0x3D,0xFF,0xC7,0xF8,0x00, // 'S'
	0xFF,0xFF,0xFF,0xFF,0xC0,0x70,0x00,0x38,0x00,0x1C,0x00,0x0E,0x00,0x07,0x00,0x03,0x80,0x01,0xC0,0x00,0xE0,0x00,0x70,0x00,0x38,0x00,0x1C,0x00,0x0E,0x00,0x07,0x00,0x03,0x80,0x01,0xC0,0x00,0xE0,0x00,0x70,0x00,0x38,0x00,0x1C,0x00, // 'T'
	0xC0,0x03,0xC0,0x03,0xC0,0x03,0xC0,0x03,0xC0,0x03,0xC0,0x03,0xC0,0x03,0xC0,0x03,0xC0,0x03,0xC0,0x03,0xC0,0x03,0xC0,0x03,0xC0,0x03,0xC0,0x03,0xC0,0x03,0xC0,0x07,0xE0,0x07,0x70,0x0E,0x78,0x1C,0x3F,0xF8,0x0F,0xE0, // 'U'
	0xE0,0x01,0xD8,0x00,0x67,0x00,0x39,0xC0,0x0E,0x30,0x03,0x0E,0x01,0xC3,0x80,0x70,0x60,0x18,0x1C,0x0E,0x07,0x03,0x00,0xC1,0xC0,0x38,0x70,0x06,0x18,0x01,0xCE,0x00,0x73,0x80,0x0C,0xC0,0x03,0xF0,0x00,0xFC,0x00,0x1E,0x00,0x07,0x80,0x00,0xC0,0x00, // 'V'
	0x60,0x0E,0x00,0x66,0x00,0xF0,0x06,0x70,0x0F,0x00,0xE7,0x01,0xF0,0x0E,0x30,0x1F,0x80,0xC3,0x81,0x98,0x1C,0x38,0x19,0x81,0xC3,0x83,0x9C,0x1C,0x18,0x31,0xC1,0x81,0xC3,0x0C,0x38,0x1C,0x70,0xE3,0x80,0xC7,0x0E,0x30,0x0C,0x60,0x63,0x00,0xEE,0x06,0x70,0x0E,0xE0,0x77,0x00,0x6C,0x03,0x60,0x06,0xC0,0x36,0x00,0x6C,0x03,0x60,0x07,0x80,0x1E,0x00,0x38,0x01,0xC0,0x03,0x80,0x1C,0x00, // 'W'
	0x70,0x07,0x18,0x03,0x0E,0x03,0x83,0x81,0x80,0xC1,0x80,0x71,0xC0,0x18,0xC0,0x0E,0xC0,0x03,0xE0,0x00,0xE0,0x00,0x70,0x00,0x7C,0x00,0x36,0x00,0x31,0x80,0x38,0xE0,0x18,0x30,0x1C,0x1C,0x1C,0x07,0x0C,0x01,0x8E,0x00,0xEE,0x00,0x38, // 'X'
	0xE0,0x03,0xB8,0x03,0x9C,0x01,0xC7,0x01,0xC3,0x80,0xC0,0xE0,0xE0,0x30,0x60,0x1C,0x70,0x06,0x30,0x03,0xB8,0x00,0xF8,0x00,0x7C,0x00,0x1C,0x00,0x0E,0x00,0x07,0x00,0x03,0x80,0x01,0xC0,0x00,0xE0,0x00,0x70,0x00,0x38,0x00,0x1C,0x00, // 'Y'
	0x7F,0xFC,0xFF,0xF8,0x00,0x70,0x01,0xC0,0x03,0x80,0x0E,0x00,0x38,0x00,0x70,0x01,0xC0,0x07,0x80,0x0E,0x00,0x38,0x00,0x70,0x01,0xC0,0x07,0x00,0x0E,0x00,0x38,0x00,0xE0,0x01,0xC0,0x07,0xFF,0xFF,0xFF,0xE0, // 'Z'
	0xFF,0xFF,0x87,0x0E,0x1C,0x38,0x70,0xE1,0xC3,0x87,0x0E,0x1C,0x38,0x70,0xE1,0xC3,0x87,0x0E,0x1C,0x38,0x70,0xFF,0xFC, // '['
	0x60,0x0C,0x01,0xC0,0x18,0x03,0x00,0x70,0x06,0x00,0xE0,0x0C,0x01,0x80,0x38,0x03,0x00,0x60,0x0E,0x00,0xC0,0x1C,0x01,0x80,0x30,0x07,0x00,0x60,0x0E, // '\'
	0xFF,0xFC,0x38,0x70,0xE1,0xC3,0x87,0x0E,0x1C,0x38,0x70,0xE1,0xC3,0x87,0x0E,0x1C,0x38,0x70,0xE1,0xC3,0x87,0xFF,0xFC, // ']'
	0x03,0x00,0x1C,0x00,0x78,0x03,0x60,0x0C,0xC0,0x73,0x01,0x86,0x06,0x18,0x30,0x70,0xC0,0xC6,0x03,0x98,0x06,0xE0,0x1F,0x00,0x30, // '^'
	0xFF,0xFF,0xFF,0xC0, // '_'
	0xE7,0x1C,0x71,0x80, // '`'
	0x0F,0xE0,0xFF,0xC1,0x83,0x80,0x06,0x00,0x18,0x00,0x70,0x01,0xC1,0xFF,0x3F,0xFD,0xE0,0x76,0x01,0xF8,0x07,0xE0,0x3D,0xC1,0xF7,0xFD,0xC7,0xE3, // 'a'
	0xC0,0x06,0x00,0x30,0x01,0x80,0x0C,0x00,0x60,0x03,0x00,0x19,0xF8,0xDF,0xE7,0x83,0xB8,0x0F,0x80,0x7C,0x01,0xE0,0x0F,0x00,0x78,0x03,0xC0,0x1E,0x00,0xF0,0x0F,0xC0,0x6F,0x07,0x6F,0xF2,0x3E,0x00, // 'b'
	0x0F,0xC7,0xFD,0xE0,0x30,0x0E,0x01,0x80,0x30,0x06,0x00,0xC0,0x18,0x03,0x00,0x70,0x06,0x00,0xF0,0x4F,0xF8,0x7E, // 'c'
	0x00,0x18,0x00,0xC0,0x06,0x00,0x30,0x01,0x80,0x0C,0x00,0x63,0xF3,0x3F,0xDB,0x83,0xF8,0x0F,0xC0,0x3C,0x01,0xE0,0x0F,0x00,0x78,0x03,0xC0,0x1E,0x00,0xF8,0x07,0xC0,0x77,0x07,0x9F,0xEC,0x7E,0x60, // 'd'
	0x0F,0xC1,0xFF,0x1E,0x1C,0xE0,0x7E,0x03,0xF0,0x0F,0x00,0x7F,0xFF,0xFF,0xFE,0x00,0x30,0x01,0xC0,0x06,0x00,0x3C,0x0C,0xFF,0xE1,0xFC, // 'e'
	0x03,0xE0,0xFC,0x38,0x06,0x01,0xC0,0x38,0x07,0x01,0xFE,0xFF,0xC3,0x80,0x70,0x0E,0x01,0xC0,0x38,0x07,0x00,0xE0,0x1C,0x03,0x80,0x70,0x0E,0x01,0xC0,0x38,0x07,0x00, // 'f'
	0x0F,0xFC,0xFF,0xF7,0x07,0x1C,0x0C,0x60,0x31,0x80,0xC6,0x03,0x1C,0x1C,0x3F,0xE0,0x7F,0x03,0x00,0x0C,0x00,0x30,0x00,0xFF,0xC3,0xFF,0x98,0x07,0xC0,0x0F,0x00,0x3C,0x00,0xF0,0x07,0xE0,0x79,0xFF,0xC1,0xFC,0x00, // 'g'
	0xC0,0x06,0x00,0x30,0x01,0x80,0x0C,0x00,0x60,0x03,0x00,0x19,0xF8,0xDF,0xE7,0x83,0xB8,0x0D,0x80,0x7C,0x03,0xE0,0x1F,0x00,0xF8,0x07,0xC0,0x3E,0x01,0xF0,0x0F,0x80,0x7C,0x03,0xE0,0x1F,0x00,0xE0, // 'h'
	0xFC,0x0F,0xFF,0xFF,0xFF,0xF0, // 'i'
	0x0C,0x30,0xC0,0x00,0x00,0xC3,0x0C,0x30,0xC3,0x0C,0x30,0xC3,0x0C,0x30,0xC3,0x0C,0x30,0xC3,0x0C,0x31,0xFE,0xF0, // 'j'
	0xC0,0x06,0x00,0x30,0x01,0x80,0x0C,0x00,0x60,0x03,0x00,0x18,0x0E,0xC0,0xE6,0x0E,0x30,0xE1,0x8E,0x0C,0xE0,0x6E,0x03,0xF0,0x1D,0xC0,0xC7,0x06,0x18,0x30,0xE1,0x83,0x8C,0x0E,0x60,0x3B,0x01,0xC0, // 'k'
	0xFF,0xFF,0xFF,0xFF,0xFF,0xFC, // 'l'
	0xCF,0xC3,0xF1,0xBF,0xCF,0xF3,0xC3,0xF0,0x77,0x03,0xC0,0x6C,0x03,0x80,0xD8,0x06,0x01,0xF0,0x0C,0x03,0xE0,0x18,0x07,0xC0,0x30,0x0F,0x80,0x60,0x1F,0x00,0xC0,0x3E,0x01,0x80,0x7C,0x03,0x00,0xF8,0x06,0x01,0xF0,0x0C,0x03,0xE0,0x18,0x07, // 'm'
	0xCF,0xC6,0xFF,0x3C,0x1D,0xC0,0x6C,0x03,0xE0,0x1F,0x00,0xF8,0x07,0xC0,0x3E,0x01,0xF0,0x0F,0x80,0x7C,0x03,0xE0,0x1F,0x00,0xF8,0x07, // 'n'
	0x0F,0xC0,0xFF,0xC7,0x87,0x98,0x06,0xE0,0x1F,0x00,0x3C,0x00,0xF0,0x03,0xC0,0x0F,0x00,0x3C,0x00,0xF8,0x07,0x60,0x19,0xE1,0xE3,0xFF,0x03,0xF0, // 'o'
	0xCF,0xC6,0xFF,0x3C,0x3D,0xC0,0x7C,0x03,0xE0,0x0F,0x00,0x78,0x03,0xC0,0x1E,0x00,0xF0,0x07,0x80,0x7E,0x03,0x78,0x3B,0x7F,0x99,0xF0,0xC0,0x06,0x00,0x30,0x01,0x80,0x0C,0x00,0x60,0x03,0x00,0x00, // 'p'
	0x1F,0x99,0xFE,0xDC,0x1F,0xC0,0x7E,0x03,0xE0,0x0F,0x00,0x78,0x03,0xC0,0x1E,0x00,0xF0,0x07,0xC0,0x3E,0x03,0xB8,0x3C,0xFF,0x63,0xF3,0x00,0x18,0x00,0xC0,0x06,0x00,0x30,0x01,0x80,0x0C,0x00,0x60, // 'q'
	0xC7,0xEF,0xBE,0x1C,0x0E,0x06,0x03,0x01,0x80,0xC0,0x60,0x30,0x18,0x0C,0x06,0x03,0x01,0x80, // 'r'
	0x3F,0x8F,0xFB,0x83,0x60,0x0C,0x01,0xC0,0x3E,0x01,0xF0,0x0F,0x80,0x78,0x03,0x80,0x70,0x0F,0x03,0xBF,0xE7,0xF8, // 's'
	0x08,0x06,0x01,0x80,0x60,0x7F,0xFF,0xF1,0x80,0x60,0x18,0x06,0x01,0x80,0x60,0x18,0x06,0x01,0x80,0x60,0x1C,0x07,0x00,0xFC,0x1F, // 't'
	0xE0,0x1F,0x00,0xF8,0x07,0xC0,0x3E,0x01,0xF0,0x0F,0x80,0x7C,0x03,0xE0,0x1F,0x00,0xF8,0x07,0xC0,0x36,0x03,0xB8,0x3C,0xFF,0x63,0xF3, // 'u'
	0xE0,0x0E,0xC0,0x19,0xC0,0x73,0x80,0xE3,0x01,0x87,0x07,0x0E,0x0E,0x0C,0x18,0x1C,0x70,0x18,0xC0,0x31,0x80,0x77,0x00,0x6C,0x00,0xD8,0x00,0xF0,0x01,0xC0, // 'v'
	0xE0,0x38,0x0E,0xC0,0x70,0x19,0x81,0xF0,0x33,0x83,0x60,0xE3,0x06,0xC1,0x86,0x1D,0xC3,0x0C,0x31,0x86,0x1C,0x63,0x1C,0x18,0xC6,0x30,0x33,0x8E,0x60,0x66,0x0D,0xC0,0xEC,0x1B,0x80,0xF8,0x3E,0x01,0xE0,0x3C,0x03,0xC0,0x78,0x07,0x80,0xE0, // 'w'
	0xE0,0x1D,0xC0,0xE3,0x03,0x0E,0x1C,0x1C,0xE0,0x3F,0x00,0x78,0x01,0xE0,0x07,0x80,0x3F,0x00,0xCC,0x07,0x38,0x38,0x71,0xC0,0xE7,0x01,0xB8,0x07, // 'x'
	0xE0,0x0E,0xC0,0x19,0xC0,0x73,0x80,0xE3,0x01,0x87,0x07,0x06,0x0E,0x0E,0x18,0x1C,0x70,0x18,0xC0,0x39,0x80,0x37,0x00,0x6C,0x00,0xF8,0x00,0xE0,0x01,0xC0,0x03,0x80,0x06,0x00,0x1C,0x00,0x30,0x00,0xE0,0x1F,0x80,0x3E,0x00,0x00, // 'y'
	0x7F,0xF7,0xFF,0x00,0x60,0x0C,0x01,0xC0,0x38,0x03,0x00,0x70,0x0E,0x00,0xC0,0x18,0x03,0x80,0x30,0x06,0x00,0xFF,0xFF,0xFF, // 'z'
	0x03,0x83,0xC3,0x83,0x81,0xC0,0xE0,0x70,0x38,0x1C,0x0E,0x07,0x07,0x0F,0x07,0x80,0xE0,0x38,0x1C,0x0E,0x07,0x03,0x81,0xC0,0xE0,0x70,0x1C,0x07,0x81,0xC0, // '{'
	0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xC0, // '|'
	0xE0,0x78,0x0E,0x03,0x81,0xC0,0xE0,0x70,0x38,0x1C,0x0E,0x07,0x01,0xC0,0x78,0x3C,0x38,0x38,0x1C,0x0E,0x07,0x03,0x81,0xC0,0xE0,0x70,0x70,0xF0,0x70,0x00 // '}'
};
const GFXglyph Open_Sans_Regular_30Glyphs[] PROGMEM = {
// bitmapOffset, width, height, xAdvance, xOffset, yOffset
	  {     0,   1,   1,   9,    0,   -1 }, // ' '
	  {     1,   4,  21,   9,    2,  -21 }, // '!'
	  {    12,   8,   8,  13,    2,  -21 }, // '"'
	  {    20,  17,  21,  20,    1,  -21 }, // '#'
	  {    65,  13,  25,  18,    2,  -23 }, // '$'
	  {   106,  21,  21,  26,    2,  -21 }, // '%'
	  {   162,  20,  21,  23,    2,  -21 }, // '&'
	  {   215,   3,   8,   8,    2,  -21 }, // '''
	  {   218,   7,  26,  10,    1,  -21 }, // '('
	  {   241,   7,  26,  10,    1,  -21 }, // ')'
	  {   264,  15,  13,  18,    1,  -23 }, // '*'
	  {   289,  15,  14,  18,    1,  -18 }, // '+'
	  {   316,   4,   7,   8,    1,   -3 }, // ','
	  {   320,   8,   2,  11,    1,   -9 }, // '-'
	  {   322,   4,   4,   9,    2,   -4 }, // '.'
	  {   324,  11,  21,  12,    0,  -21 }, // '/'
	  {   353,  15,  21,  18,    1,  -21 }, // '0'
	  {   393,   7,  21,  18,    3,  -21 }, // '1'
	  {   412,  14,  21,  18,    1,  -21 }, // '2'
	  {   449,  14,  21,  18,    1,  -21 }, // '3'
	  {   486,  15,  21,  18,    1,  -21 }, // '4'
	  {   526,  13,  21,  18,    2,  -21 }, // '5'
	  {   561,  14,  21,  18,    2,  -21 }, // '6'
	  {   598,  14,  21,  18,    1,  -21 }, // '7'
	  {   635,  13,  21,  18,    2,  -21 }, // '8'
	  {   670,  13,  21,  18,    2,  -21 }, // '9'
	  {   705,   4,  16,   9,    2,  -16 }, // ':'
	  {   713,   5,  20,   9,    1,  -16 }, // ';'
	  {   726,  13,  14,  18,    2,  -18 }, // '<'
	  {   749,  13,   8,  18,    2,  -15 }, // '='
	  {   762,  13,  14,  18,    2,  -18 }, // '>'
	  {   785,  12,  21,  14,    0,  -21 }, // '?'
	  {   817,  23,  24,  28,    2,  -21 }, // '@'
	  {   886,  19,  21,  20,    0,  -21 }, // 'A'
	  {   936,  14,  21,  20,    3,  -21 }, // 'B'
	  {   973,  16,  21,  20,    2,  -21 }, // 'C'
	  {  1015,  17,  21,  23,    3,  -21 }, // 'D'
	  {  1060,  12,  21,  18,    3,  -21 }, // 'E'
	  {  1092,  11,  21,  16,    3,  -21 }, // 'F'
	  {  1121,  18,  21,  23,    2,  -21 }, // 'G'
	  {  1169,  16,  21,  23,    3,  -21 }, // 'H'
	  {  1211,   2,  21,   9,    3,  -21 }, // 'I'
	  {  1217,   7,  27,   9,   -2,  -21 }, // 'J'
	  {  1241,  15,  21,  19,    3,  -21 }, // 'K'
	  {  1281,  12,  21,  17,    3,  -21 }, // 'L'
	  {  1313,  21,  21,  28,    3,  -21 }, // 'M'
	  {  1369,  17,  21,  24,    3,  -21 }, // 'N'
	  {  1414,  19,  21,  24,    2,  -21 }, // 'O'
	  {  1464,  13,  21,  19,    3,  -21 }, // 'P'
	  {  1499,  19,  26,  24,    2,  -21 }, // 'Q'
	  {  1561,  15,  21,  20,    3,  -21 }, // 'R'
	  {  1601,  13,  21,  17,    2,  -21 }, // 'S'
	  {  1636,  17,  21,  18,    0,  -21 }, // 'T'
	  {  1681,  16,  21,  23,    3,  -21 }, // 'U'
	  {  1723,  18,  21,  19,    0,  -21 }, // 'V'
	  {  1771,  28,  21,  29,    0,  -21 }, // 'W'
	  {  1845,  17,  21,  18,    0,  -21 }, // 'X'
	  {  1890,  17,  21,  18,    0,  -21 }, // 'Y'
	  {  1935,  15,  21,  18,    1,  -21 }, // 'Z'
	  {  1975,   7,  26,  11,    2,  -21 }, // '['
	  {  1998,  11,  21,  12,    0,  -21 }, // '\'
	  {  2027,   7,  26,  11,    1,  -21 }, // ']'
	  {  2050,  14,  14,  17,    1,  -22 }, // '^'
	  {  2075,  13,   2,  14,    0,    3 }, // '_'
	  {  2079,   5,   5,  18,    6,  -23 }, // '`'
	  {  2083,  14,  16,  18,    1,  -16 }, // 'a'
	  {  2111,  13,  23,  19,    3,  -23 }, // 'b'
	  {  2149,  11,  16,  15,    2,  -16 }, // 'c'
	  {  2171,  13,  23,  19,    2,  -23 }, // 'd'
	  {  2209,  13,  16,  18,    2,  -16 }, // 'e'
	  {  2235,  11,  23,  11,    0,  -23 }, // 'f'
	  {  2267,  14,  23,  17,    1,  -16 }, // 'g'
	  {  2308,  13,  23,  19,    3,  -23 }, // 'h'
	  {  2346,   2,  22,   9,    3,  -22 }, // 'i'
	  {  2352,   6,  29,   9,   -1,  -22 }, // 'j'
	  {  2374,  13,  23,  17,    3,  -23 }, // 'k'
	  {  2412,   2,  23,   9,    3,  -23 }, // 'l'
	  {  2418,  23,  16,  29,    3,  -16 }, // 'm'
	  {  2464,  13,  16,  19,    3,  -16 }, // 'n'
	  {  2490,  14,  16,  19,    2,  -16 }, // 'o'
	  {  2518,  13,  23,  19,    3,  -16 }, // 'p'
	  {  2556,  13,  23,  19,    2,  -16 }, // 'q'
	  {  2594,   9,  16,  13,    3,  -16 }, // 'r'
	  {  2612,  11,  16,  15,    2,  -16 }, // 's'
	  {  2634,  10,  20,  12,    0,  -20 }, // 't'
	  {  2659,  13,  16,  19,    2,  -16 }, // 'u'
	  {  2685,  15,  16,  16,    0,  -16 }, // 'v'
	  {  2715,  23,  16,  24,    0,  -16 }, // 'w'
	  {  2761,  14,  16,  17,    1,  -16 }, // 'x'
	  {  2789,  15,  23,  16,    0,  -16 }, // 'y'
	  {  2833,  12,  16,  15,    1,  -16 }, // 'z'
	  {  2857,   9,  26,  12,    1,  -21 }, // '{'
	  {  2887,   3,  30,  18,    7,  -23 }, // '|'
	  {  2899,   9,  26,  12,    1,  -21 } // '}'
};
const GFXfont Open_Sans_Regular_30 PROGMEM = {
(uint8_t  *)Open_Sans_Regular_30Bitmaps,(GFXglyph *)Open_Sans_Regular_30Glyphs,0x20, 0x7E, 42};