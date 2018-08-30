/*
 * Copyright (C) 2009 Andreas Steffen
 * HSR Hochschule fuer Technik Rapperswil
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the Licenseor (at your
 * option) any later version.  See <http://www.fsf.org/copyleft/gpl.txt>.
 *
 * This program is distributed in the hope that it will be usefulbut
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * for more details.
 */

#include <crypto/crypto_tester.h>

/**
 * All testvectors from https://www.cosic.esat.kuleuven.be/nessie/testvectors/
 */

/**
 * Serpent 128 bit: set 8, vector #0
 */
crypter_test_vector_t serpent_cbc1 = {
	.alg = ENCR_SERPENT_CBC, .key_size = 16, .len = 16,
	.key	= "\x00\x01\x02\x03\x04\x05\x06\x07\x08\x09\x0A\x0B\x0C\x0D\x0E\x0F",
	.iv		= "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00",
	.plain	= "\x33\xB3\xDC\x87\xED\xDD\x9B\x0F\x6A\x1F\x40\x7D\x14\x91\x93\x65",
	.cipher	= "\x00\x11\x22\x33\x44\x55\x66\x77\x88\x99\xAA\xBB\xCC\xDD\xEE\xFF"
};

/**
 * Serpent 128 bit: set 8, vector #1
 */
crypter_test_vector_t serpent_cbc2 = {
	.alg = ENCR_SERPENT_CBC, .key_size = 16, .len = 16,
	.key	= "\x2B\xD6\x45\x9F\x82\xC5\xB3\x00\x95\x2C\x49\x10\x48\x81\xFF\x48",
	.iv		= "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00",
	.plain	= "\xBE\xB6\xC0\x69\x39\x38\x22\xD3\xBE\x73\xFF\x30\x52\x5E\xC4\x3E",
	.cipher	= "\xEA\x02\x47\x14\xAD\x5C\x4D\x84\xEA\x02\x47\x14\xAD\x5C\x4D\x84"
};

/**
 * Serpent 192 bit: set 8, vector #0
 */
crypter_test_vector_t serpent_cbc3 = {
	.alg = ENCR_SERPENT_CBC, .key_size = 24, .len = 16,
	.key	= "\x00\x01\x02\x03\x04\x05\x06\x07\x08\x09\x0A\x0B\x0C\x0D\x0E\x0F"
			  "\x10\x11\x12\x13\x14\x15\x16\x17",
	.iv		= "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00",
	.plain	= "\x45\x28\xCA\xCC\xB9\x54\xD4\x50\x65\x5E\x8C\xFD\x71\xCB\xFA\xC7",
	.cipher	= "\x00\x11\x22\x33\x44\x55\x66\x77\x88\x99\xAA\xBB\xCC\xDD\xEE\xFF"
};

/**
 * Serpent 192 bit: set 8, vector #1
 */
crypter_test_vector_t serpent_cbc4 = {
	.alg = ENCR_SERPENT_CBC, .key_size = 24, .len = 16,
	.key	= "\x2B\xD6\x45\x9F\x82\xC5\xB3\x00\x95\x2C\x49\x10\x48\x81\xFF\x48"
			  "\x2B\xD6\x45\x9F\x82\xC5\xB3\x00",
	.iv		= "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00",
	.plain	= "\xE0\x20\x8B\xE2\x78\xE2\x14\x20\xC4\xB1\xB9\x74\x77\x88\xA9\x54",
	.cipher	= "\xEA\x02\x47\x14\xAD\x5C\x4D\x84\xEA\x02\x47\x14\xAD\x5C\x4D\x84"
};

/**
 * Serpent 256 bit: set 8, vector #0
 */
crypter_test_vector_t serpent_cbc5 = {
	.alg = ENCR_SERPENT_CBC, .key_size = 32, .len = 16,
	.key	= "\x00\x01\x02\x03\x04\x05\x06\x07\x08\x09\x0A\x0B\x0C\x0D\x0E\x0F"
			  "\x10\x11\x12\x13\x14\x15\x16\x17\x18\x19\x1A\x1B\x1C\x1D\x1E\x1F",
	.iv		= "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00",
	.plain	= "\x3D\xA4\x6F\xFA\x6F\x4D\x6F\x30\xCD\x25\x83\x33\xE5\xA6\x13\x69",
	.cipher	= "\x00\x11\x22\x33\x44\x55\x66\x77\x88\x99\xAA\xBB\xCC\xDD\xEE\xFF"
};

/**
 * Serpent 256 bit: set 8, vector #1
 */
crypter_test_vector_t serpent_cbc6 = {
	.alg = ENCR_SERPENT_CBC, .key_size = 32, .len = 16,
	.key	= "\x2B\xD6\x45\x9F\x82\xC5\xB3\x00\x95\x2C\x49\x10\x48\x81\xFF\x48"
			  "\x2B\xD6\x45\x9F\x82\xC5\xB3\x00\x95\x2C\x49\x10\x48\x81\xFF\x48",
	.iv		= "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00",
	.plain	= "\x67\x7C\x8D\xFA\xA0\x80\x71\x74\x3F\xD2\xB4\x15\xD1\xB2\x8A\xF2",
	.cipher	= "\xEA\x02\x47\x14\xAD\x5C\x4D\x84\xEA\x02\x47\x14\xAD\x5C\x4D\x84"
};

