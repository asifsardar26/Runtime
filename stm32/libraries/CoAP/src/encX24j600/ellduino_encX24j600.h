/*
 * Copyright (c) 2014 ELL-i co-operative.
 *
 * ELL-i software is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * ELL-i software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with ELL-i software.  If not, see
 * <http://www.gnu.org/licenses/>.
 */

/*
 * Authors:  Pekka Nikander <pekka.nikander@ell-i.org>  2014
 */

#ifndef  _ELLDUINO_ENCX24J600_H_
# define _ELLDUINO_ENCX24J600_H_

# define ENCX24J600_SPI SPI1struct /* XXX Move to the constructor */

# include <encX24j600/ENCX24J600Class.h>

/* NB. Shall be evaluated at compile time, no runtime static C++ constructors allowed */
static const ENCX24J600Class ENCX24J600(SPI1struct, /* XXX FIXME */ 
                                        2 /* Slave select XXX currently dummy FIXME */);

#endif//_ELLDUINO_ENCX24J600_H_