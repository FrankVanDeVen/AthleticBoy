// Game level data
const unsigned char PROGMEM level[] = {
 0b00000000, // scene 0: bestaat niet (wordt overgeslagen)
 0b00010000, // scene 1: gras 1
 0b00000001, // scene 2: rots 1
 0b00000010, // scene 3: slinger
 0b10010000, // scene 4: vallende appels
 0b00010100, // scene 5: gras met rollende bal 1
 0b00011000, // scene 6: gras met vliegende bij 1
 0b00000001, // scene 7: rots 2
 0b10010001, // scene 8: rots en vallende appels
 0b01000000, // scene 9: 4 plassen met springende vissen 1
 0b00000101, // scene 10: rots en rollende bal
 0b00100000, // scene 11: vijver met boot
 0b00010100, // scene 12: gras met rollende bal 2
 0b00001001, // scene 13: rots en vliegende bij
 0b01000000, // scene 14: 4 plassen met springende vissen 2
 0b00000011, // scene 15: rots en slinger
 0b00011000, // scene 16: gras met vliegende bij 2
 0b00011100, // scene 17: gras met rollende bal en vliegende bij
 0b00101000, // scene 18: vijver met boot en vliegende bij
 0b00010100, // scene 19: gras met rollende bal 3
 0b00010000, // scene 20: gras 2
 0b11111111, // laatste scene: einde spel  
};
//-------------------------------------------------------------------------------------------

// grafische tekst "Athletic Boy"
const PROGMEM uint8_t tekst1[] = {
0x6a,0x0f,0xc8,0x95,0x92,0xb9,0x9d,0x73,0xae,0xb4,0x73,0xac,0xdb,0x15,0xdf,0xdb,
0xed,0x9c,0x84,0x54,0xd9,0xe5,0x76,0xab,0xec,0xac,0x2b,0x3e,0x54,0x2d,0x95,0x5c,
0x6e,0xb7,0x6b,0x65,0x67,0xdd,0xae,0xf8,0xde,0x6e,0xe7,0x2c,0xf5,0x29,0xd6,0xa5,
0x92,0xcb,0xed,0x76,0xad,0xec,0x08,0x63,0x54,0xb5,0x92,0x4a,0x7e,0xf6,0x52,0xcc,
0x4b,0x25,0x97,0xdb,0xad,0xb2,0xca,0xce,0xe9,0x94,0x54,0x1f,0x5d,0x76,0xa7,0x9c,
0x54,0x52,0xce,0x94,0xb5,0x4b,0xb5,0x4d,0xa7,0xd3,0x5b,0xbb,0xa4,0x74,0x4e,0x5a,
0x65,0xb7,0xcb,0x29,0xed,0x52,0x29,0x39,0xbb,0x5d,0x52,0x3a,0x27,0xad,0xb2,0xdb,
0xe5,0x94,0xce,0x49,0x57,0x4a,0xf5,0xff,0xa7,0xbe,0x97,0x73,0x3b,0x27,0xad,0xb2,
0xdb,0xe5,0x94,0x76,0x49,0xe9,0x9c,0xb4,0xca,0x6e,0xb7,0xcb,0xe5,0xe8,0x5a,0xd9,
0xad,0xdd,0x2e,0x57,0xa5,0x94,0x73,0x8a,0xd4,0x39,0x69,0x95,0xdd,0x2e,0xd5,0x52,
0x39,0x5a,0x57,0x4e,0x3a,0xe7,0x9c,0x53,0x6e,0xa7,0x96,0x4a,0x91,0x01
};

// grafische tekst " A: Credits  B: Play"
const PROGMEM uint8_t tekst2[] = {
0x3e,0x07,0x72,0xaa,0xb2,0x8e,0xb3,0x22,0x57,0x2e,0x95,0x4a,0x45,0x25,0x55,0x25,
0x6f,0x2a,0xa9,0xaa,0x52,0xa9,0xa8,0xa4,0x4a,0xe5,0x14,0x97,0xa4,0x4a,0x4b,0x15,
0xdf,0xa5,0xaa,0x52,0x35,0xce,0xa4,0xaa,0xca,0x55,0xa4,0x15,0xb7,0x54,0x95,0x54,
0x64,0x52,0xc7,0xe5,0x54,0x65,0x1d,0x95,0xd2,0x4a,0x29,0x09
};

// grafische tekst "code: Frank van de Ven"
const PROGMEM uint8_t tekst3[] = {
0x4f,0x07,0x52,0x2e,0x95,0x4a,0x45,0x25,0x55,0x2a,0x25,0xa9,0xa4,0x4a,0xe5,0x14,
0x97,0x54,0x55,0xa9,0x54,0x9c,0x15,0xb7,0x54,0x95,0x8c,0x4e,0xaa,0x4a,0xde,0x5c,
0x4e,0x55,0xd6,0x51,0x49,0x95,0x96,0x54,0x52,0x26,0x6f,0x14,0x39,0x9f,0x72,0x64,
0x4e,0x55,0xd6,0x51,0x49,0x95,0x96,0x28,0x92,0x2a,0x95,0x53,0x5c,0x52,0x55,0xa5,
0x52,0x51,0x3b,0x9f,0x72,0x5c,0x52,0x55,0xa5,0x52,0x51,0x49,0x95,0x96,0x0a
};
//-------------------------------------------------------------------------------------------

// sprite data Man
const unsigned char PROGMEM man[] = {
0x0,0x0,0x0,0x0,0x1C,0xBE,0xFF,0xFF,0xFF,0xF3,0x3E,0x1C,0x8,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0xF,0x1F,0xFF,0xFE,0xF9,0x9F,0xF,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x1C,0xBE,0xFF,0xFF,0xFF,0xF3,0x3E,0x1C,0x8,0x0,0x0,0x0,0x0,0x6,
0x67,0xF3,0xFB,0xBF,0x1F,0x1F,0x1F,0x3F,0x3F,0x30,0x30,0x38,0x0,0x0,
0x0,0x0,0x0,0x0,0x1C,0xBE,0xFF,0xFF,0xFF,0xF3,0x3E,0x1C,0x8,0x80,0x80,0x0,0x0,
0x0,0x40,0x60,0x77,0x3F,0x1F,0x1F,0x3F,0xFF,0xFF,0x83,0x3,0x1,0x1,0x0,
0x0,0x0,0x0,0x80,0x9C,0xBE,0xFF,0xFF,0xFF,0xF3,0x3E,0x1C,0x8,0x80,0x80,0x0,0x0,
0x73,0x33,0x31,0x39,0x3F,0x1F,0x1F,0x1F,0x3F,0x3F,0x33,0x33,0x39,0x1,0x0,
0x0,0x0,0x0,0x0,0x1C,0xBE,0xFF,0xFF,0xFF,0x73,0x3E,0x1C,0x88,0x80,0x0,0x0,0x0,
0x0,0x0,0x0,0x1F,0x3F,0x3F,0x3F,0x3F,0x3F,0x33,0x33,0x39,0x1,0x0,0x0,
0x0,0x0,0x0,0xC0,0xE0,0xF0,0xF0,0xF0,0x30,0xE0,0xC0,0x80,0x0,0x0,0x0,0x0,0x0,
0x0,0xE0,0xF1,0x3B,0xDF,0xEF,0xFF,0xFF,0xFB,0x71,0x38,0xF8,0xF0,0x80,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x78,0xFC,
0xFE,0xFF,0xFE,0x7C,0x38,0x7C,0xEE,0x9E,0xFE,0xFE,0x7C,0x38,0x70,0xF8,
0x0,0x0,0x0,0x0,0x80,0xC0,0xE0,0xE0,0xE0,0xE0,0xC0,0x80,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x63,0x57,0x7F,0x5F,0x7F,0x5F,0x67,0x3,0x1,0x0,0x0,0x0,
0x0,0x0,0x0,0x8,0x1C,0x3E,0xF3,0xFF,0xFF,0xFF,0xBE,0x1C,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0xF,0x9F,0xF9,0xFE,0xFF,0x1F,0xF,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x8,0x1C,0x3E,0xF3,0xFF,0xFF,0xFF,0xBE,0x1C,0x0,0x0,0x0,0x0,0x0,
0x0,0x38,0x30,0x30,0x3F,0x3F,0x1F,0x1F,0x1F,0xBF,0xFB,0xF3,0x67,0x6,0x0,
0x0,0x80,0x80,0x8,0x1C,0x3E,0xF3,0xFF,0xFF,0xFF,0xBE,0x1C,0x0,0x0,0x0,0x0,
0x0,0x1,0x1,0x3,0x83,0xFF,0xFF,0x3F,0x1F,0x1F,0x3F,0x77,0x60,0x40,0x0,0x0,
0x0,0x80,0x80,0x8,0x1C,0x3E,0xF3,0xFF,0xFF,0xFF,0xBE,0x9C,0x80,0x0,0x0,0x0,
0x0,0x1,0x39,0x33,0x33,0x3F,0x3F,0x1F,0x1F,0x1F,0x3F,0x39,0x31,0x33,0x73,0x0,
0x0,0x0,0x80,0x88,0x1C,0x3E,0x73,0xFF,0xFF,0xFF,0xBE,0x1C,0x0,0x0,0x0,0x0,
0x0,0x0,0x1,0x39,0x33,0x33,0x3F,0x3F,0x3F,0x3F,0x3F,0x1F,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x80,0xC0,0xE0,0x30,0xF0,0xF0,0xF0,0xE0,0xC0,0x0,0x0,0x0,
0x0,0x80,0xF0,0xF8,0x38,0x71,0xFB,0xFF,0xFF,0xEF,0xDF,0x3B,0xF1,0xE0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xF8,0x70,
0x38,0x7C,0xFE,0xFE,0x9E,0xEE,0x7C,0x38,0x7C,0xFE,0xFF,0xFE,0xFC,0x78,
0x0,0x0,0x0,0x80,0xC0,0xE0,0xE0,0xE0,0xE0,0xC0,0x80,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x1,0x3,0x67,0x5F,0x7F,0x5F,0x7F,0x57,0x63,0x0,0x0,0x0,0x0,0x0,
};
//-------------------------------------------------------------------------------------------

// plaatje achtergrond bomen met teksten: scene, score, time en zwarte ruimte rondom
// MET ZWART VLAK OP REGEL 4 T/M 7
const PROGMEM uint8_t achtergrond[] = {
0x7f,0x3f,0x74,0x5f,0x55,0x55,0x55,0x7d,0xba,0xd5,0x95,0xaa,0x4a,0x55,0xba,0x64,
0x55,0x55,0x95,0xaa,0x74,0xc9,0x2a,0x59,0xb2,0x74,0xc9,0xaa,0xaa,0x2a,0x55,0xe9,
0x74,0x3a,0x9d,0x4e,0xa7,0xd3,0xe9,0x74,0x3a,0xdd,0xea,0xaa,0xaa,0x52,0x55,0x55,
0x55,0xab,0xd3,0xad,0xae,0xaa,0x2a,0x55,0x55,0x55,0xb5,0x3a,0xdd,0xea,0xaa,0xaa,
0x52,0x55,0x55,0x55,0xab,0xd3,0xad,0xae,0xaa,0x2a,0x55,0x55,0x55,0xb5,0x3a,0xdd,
0xea,0xaa,0xaa,0x52,0x55,0x55,0x55,0xab,0xd3,0xe9,0x74,0x5f,0x55,0x55,0x55,0x7d,
0xba,0xd5,0x95,0xaa,0x4a,0x55,0xba,0x64,0x95,0xaa,0x92,0xa5,0x4b,0x56,0x95,0xea,
0xba,0x74,0xc9,0xaa,0xaa,0x2a,0x55,0xe9,0x74,0x3a,0x9d,0x4e,0xa7,0xd3,0xe9,0x74,
0x3a,0x9d,0x4e,0xa7,0xd3,0x95,0x2c,0x59,0x25,0xd3,0x25,0x4b,0x97,0xac,0x92,0x25,
0xab,0x64,0xc9,0xd2,0x25,0xab,0xaa,0xaa,0x54,0xa5,0xd3,0xe9,0x74,0x3a,0x9d,0x4e,
0xa7,0xd3,0xe9,0x74,0x3a,0x4d,0xd5,0x1d,0x55,0x32,0xb7,0xaa,0x99,0x92,0xa9,0x88,
0x52,0xc9,0x54,0x44,0x9f,0x5b,0x45,0x94,0x4a,0xa6,0x22,0x4a,0x25,0x53,0x11,0xa5,
0x92,0xa9,0x88,0x52,0xc9,0x54,0x44,0xa9,0x64,0x2a,0xa2,0x54,0x32,0x15,0x51,0x2a,
0x99,0x8a,0x28,0x95,0x4c,0x45,0x94,0x4a,0xa6,0x22,0x4a,0x25,0x53,0x11,0xa5,0x92,
0xa9,0xce,0xa6,0x72,0xab,0xca,0x77,0x6e,0x55,0x4b,0x75,0x95,0x72,0xca,0xd5,0xa7,
0x94,0xba,0xec,0xb7,0x53,0xb5,0x54,0x57,0x29,0xa7,0x5c,0x7d,0xd7,0xaa,0x96,0xea,
0x2a,0x25,0x77,0xee,0x94,0x52,0x97,0xfd,0x92,0x36,0x57,0x9f,0x5b,0x26,0x93,0xc9,
0x64,0x32,0x99,0x4c,0x26,0x93,0xc9,0x64,0x32,0x99,0x4c,0x26,0x93,0xc9,0x64,0x32,
0x99,0x4c,0x26,0x93,0xc9,0x64,0x32,0x99,0x4c,0x26,0x93,0xc9,0x64,0x32,0x99,0x4c,
0x26,0x93,0xc9,0x64,0x32,0x99,0x4c,0x26,0x93,0xc9,0x64,0x32,0x99,0x4c,0x26,0xbb,
0x93,0xc9,0x64,0x2e,0xde,0x9d,0x92,0xdb,0x64,0xe5,0x94,0x54,0x4e,0x29,0xb9,0x5c,
0x2a,0x27,0x93,0xa9,0xd4,0xae,0xaa,0x52,0xbb,0xea,0xd4,0xae,0x94,0xfc,0x72,0x56,
0x39,0x75,0xd5,0x56,0xd9,0xae,0x5a,0x3a,0xf9,0x75,0xc9,0x5a,0x7e,0xd5,0xd2,0x29,
0x77,0x39,0x55,0xae,0x72,0x4a,0x5e,0x72,0x99,0x8f,0x2d,0xe8,0x32,0xbd,0xce,0x2a,
0x79,0xc9,0xe5,0xe5,0x94,0xad,0x95,0x73,0xd2,0x55,0xb5,0x54,0xfa,0xaa,0x96,0xca,
0x95,0xaa,0x6a,0xa9,0xac,0xaa,0x3a,0xbb,0x74,0x95,0xb3,0x4b,0x57,0xd5,0x3a,0xab,
0xaa,0x5a,0x27,0xeb,0xaa,0xb6,0x9f,0x4c,0xed,0xac,0x93,0xca,0xf5,0xce,0x87,0x35,
0xf0,0x79,0xf8,0x02,0x9f,0x87,0x2f,0xf0,0x79,0xf8,0x02,0x9f,0x87,0x4c,0xe9,0xac,
0x93,0xca,0xae,0x03,0xad,0x96,0x5d,0x2a,0xa9,0x9c,0x53,0x48,0x02
};
//-------------------------------------------------------------------------------------------

// Grafische data cijfers 0 t/m 9 (3x8). Kan direct in video ram geschreven worden
const unsigned char PROGMEM cijfer[] = {
0x9C,0xA2,0x9C, 0xA4,0xBE,0xA0, 0xBA,0xAA,0xAE, 0xA2,0xAA,0xBE, 0x8E,0x88,0xBE, 
0xAE,0xAA,0xBA, 0xBE,0xAA,0xBA, 0x82,0xBA,0x86, 0xBE,0xAA,0xBE, 0xAE,0xAA,0xBE,
};
//-------------------------------------------------------------------------------------------

// data springende vis (nr. plaatje vis en Y-positie vis)
  const unsigned char vis[] PROGMEM= 
  {18,18,18,19,19,20,21,22,23,23,24,0, 47,47,47,42,38,35,33,38,42,47,47,0};
//-------------------------------------------------------------------------------------------

// data vorm slinger
 const unsigned char slinger[] PROGMEM= 
 {1,1,1,1,2,2,2,2,3,3,4,4,4,5,5,5,6,6,6,7,7,8,8,9,10,11}; 
//-------------------------------------------------------------------------------------------

// data startpositie 7 appels (7x X-pos en 7x Y-pos)
 const unsigned char appel[] PROGMEM= 
 {10,26,46,62,76,92,108, 24,24,16,16,16,24,24};
 
//-------------------------------------------------------------------------------------------

// sprites voor linker en rechter 4 boomstam stukken met masker zodat man achter boom loopt
const unsigned char PROGMEM stam[] = {8,8,
0xFF,0xFF,0x3F,0xF,0xF,0x3,0x1,0x0,
0xFF,0x3,0x0,0x0,0x0,0x0,0x0,0x0,
0xFF,0xC0,0x0,0x0,0x0,0x0,0x0,0x0,
0xFF,0xFF,0xC0,0x80,0x0,0x0,0x0,0x0,
0x0,0x3,0xF,0x3F,0xFC,0xF0,0xFF,0xFF,
0x0,0x0,0x0,0x0,0x1,0x7F,0xFF,0xFF,
0x0,0x0,0x0,0x0,0x0,0x0,0x7F,0xFF,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xFF,
};
const unsigned char PROGMEM stam_mask[] = {
0xFF,0xFF,0xFF,0x3F,0xF,0xF,0x3,0x1,
0xFF,0xFF,0x3,0x0,0x0,0x0,0x0,0x0,
0xFF,0xFF,0xC0,0x0,0x0,0x0,0x0,0x0,
0xFF,0xFF,0xFF,0xC0,0x80,0x0,0x0,0x0,
0x3,0xF,0x3F,0xFF,0xFF,0xFF,0xFF,0xFF,
0x0,0x0,0x0,0x1,0x7F,0xFF,0xFF,0xFF,
0x0,0x0,0x0,0x0,0x0,0x7F,0xFF,0xFF,
0x0,0x0,0x0,0x0,0x0,0x0,0xFF,0xFF,
};
//-------------------------------------------------------------------------------------------

// Sprite data overige sprites (8x8)
const unsigned char PROGMEM sprites[] = {8,8,
0xE,0x15,0x17,0x15,0xE,0x0,0x0,0x0,                // 0, gezichtje
0x0,0xC0,0xE0,0xB0,0xF8,0xB8,0xE0,0x80,            // 1, rots
0x70,0xC8,0xE8,0xF8,0x70,0x0,0x0,0x0,              // 2, bal (1)
0x70,0x98,0xB8,0xF8,0x70,0x0,0x0,0x0,              // 3, bal (2)
0x70,0xF8,0xB8,0x98,0x70,0x0,0x0,0x0,              // 4, bal (3)
0x70,0xF8,0xE8,0xC8,0x70,0x0,0x0,0x0,              // 5, bal (4)
0x8,0x14,0x8,0x5C,0x3A,0x3A,0x3A,0x52,             // 6, bij (1)
0x8,0x14,0x8,0x5C,0x3C,0x3A,0x39,0x51,             // 7, bij (2)
0x1,0x2,0x3,0x6,0x5,0xA,0x15,0x1A,                 // 8, water (links)
0x35,0x2A,0x35,0x2A,0x35,0x2A,0x35,0x2A,           // 9, water (midden)
0x15,0x1A,0xD,0x6,0x5,0x2,0x3,0x1,                 // 10, water (rechts)
0x0,0x4,0x18,0x60,0x10,0x8,0x0,0x0,                // 11, gras (1)
0x0,0x8,0x10,0xF8,0x24,0x10,0x8,0x0,               // 12, gras (2)
0x0,0x0,0x20,0x60,0x60,0xE0,0xE0,0xE0,             // 13, boot (links)
0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,           // 14, boot (midden)
0xE0,0xE0,0xE0,0xE0,0x60,0x20,0x0,0x0,             // 15, boot (rechts)
0x0,0x3,0x5,0xA,0xD,0xA,0xD,0xA,                   // 16, water 2 (links)
0x5,0x3,0x0,0x0,0x0,0x0,0x0,0x0,                   // 17, water 2 (rechts)
0x0,0x0,0xC0,0xA0,0xC0,0x0,0x0,0x0,                // 18, vis (1)
0x0,0x0,0x5C,0x7A,0x1C,0x0,0x0,0x0,                // 19, vis (2)
0x0,0x0,0x58,0x7C,0x1A,0x4,0x0,0x0,                // 20, vis (3)
0x0,0xC,0x8,0x1C,0x1C,0x14,0x8,0x0,                // 21, vis (4)
0x0,0x0,0x8,0x3E,0x5A,0x30,0x0,0x0,                // 22, vis (5)
0x0,0x0,0x38,0x5E,0x3A,0x0,0x0,0x0,                // 23, vis (6)
0x0,0x0,0x80,0xE0,0xA0,0x0,0x0,0x0,                // 24, vis (7)
0x0,0x18,0x3C,0x1E,0x35,0x18,0x0,0x0,              // 25, appel
0x80,0xC0,0xA0,0xF0,0xA8,0xC0,0x80,0x80,           // 26, appel gevallen (uit elkaaar gespat)
};
//-------------------------------------------------------------------------------------------
