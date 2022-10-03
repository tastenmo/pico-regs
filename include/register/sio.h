/**
 * @file sio.h
 * @author Martin Heubuch (martin.heubuch@escad.de)
 * @brief
 * @version 0.1
 * @date 2022-10-03
 *
 * @copyright Copyright (c) 2022
 *
 */

#pramga once

#include <SimpleRegister.h>

namespace regs
{
    namespace sio
    {

        /**
         * @brief CPUID Register
         *
         * Processor core identifier
         *
         */
        struct Cpuid : SingleRegister<uint32_t>
        {
        };

        /**
         * @brief GPIO_IN Register
         *
         * Input value for GPIO pins
         *
         */
        struct GpioIn : SingleRegister<uint32_t>
        {

            struct Value : Bitfield<0, 29>
            {
            };
        };

    }

}