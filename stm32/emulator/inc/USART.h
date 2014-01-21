/*
 * Copyright (c) 2014 ELL-i co-operative.
 *
 * This is part of ELL-i software.
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
 * along with ELL-i software.  If not, see <http://www.gnu.org/licenses/>.
 */

/**
 * @author Pekka Nikander <pekka.nikander@ell-i.org>  2014
 */

#ifndef _USART_H_
#define _USART_H_

#include <Register.h>

class UniversalSynchronousAsynchronousReceiverTransmitter {
public:
    DEFINE_REGISTER(USART, CR1,      0);
    DEFINE_REGISTER(USART, CR2,      0);
    DEFINE_REGISTER(USART, CR3,      0);
    DEFINE_REGISTER(USART, BRR,      0);
    DEFINE_REGISTER(USART, GTPR,     0);
    DEFINE_REGISTER(USART, RTOR,     0);
protected:
    UniversalSynchronousAsynchronousReceiverTransmitter() {}
public:
    static UniversalSynchronousAsynchronousReceiverTransmitter USART1;
    static UniversalSynchronousAsynchronousReceiverTransmitter USART2;
};

UniversalSynchronousAsynchronousReceiverTransmitter *const USART1 =
    &UniversalSynchronousAsynchronousReceiverTransmitter::USART1;
UniversalSynchronousAsynchronousReceiverTransmitter *const USART2 =
    &UniversalSynchronousAsynchronousReceiverTransmitter::USART2;

#endif //_USART_H_