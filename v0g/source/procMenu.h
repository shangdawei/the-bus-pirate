/*
 * This file is part of the Bus Pirate project (buspirate.com).
 *
 * Originally written by hackaday.com <legal@hackaday.com>
 *
 * To the extent possible under law, hackaday.com <legal@hackaday.com> has
 * waived all copyright and related or neighboring rights to Bus Pirate. This
 * work is published from United States.
 *
 * For details see: http://creativecommons.org/publicdomain/zero/1.0/.
 *
 *    This program is distributed in the hope that it will be useful,
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 */

//define keys used for each command
//only define the CAPATAL version, 
//  lowercase will be converted automagically
#define MENU_BUSMODE		'M'
#define MENU_DISPLAYMODE	'O'
#define MENU_PULLUPS		'P'
#define MENU_VMONITOR		'V'
#define MENU_BITORDER		'L'
#define MENU_HELP			'?'
#define MENU_FREQMEASURE	'F'
#define MENU_FREQGENERATE	'G'
#define MENU_VERSIONINFO	'I'
#define MENU_AUXPIN			'C'
#define MENU_BAUDRATE		'B'

//check byte c for valid menu commands, 0=no menu commands
unsigned char checkMenuCommand(unsigned char c);

//prints version, used internally and in main.c
void versionInfo(void); 