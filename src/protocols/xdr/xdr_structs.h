//------------------------------------------------------------------------------
// Author: Dzianis Huznou
// Description: Definition of XDR structures.
// Copyright (c) 2013 EPAM Systems. All Rights Reserved.
//------------------------------------------------------------------------------
#ifndef XDR_STRUCTS_H
#define XDR_STRUCTS_H
//------------------------------------------------------------------------------
#include <iostream>

#include <stddef.h>
#include <stdint.h>
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
namespace NST
{
namespace protocols
{
namespace xdr
{

#include "api/xdr_types.h"

const size_t XDR_ALIGN = 4;

inline std::ostream& operator<<(std::ostream& out, const Opaque& opaque)
{
    out << std::hex;
    for(uint32_t i = 0; i < opaque.len; i++)
    {
        out << (uint32_t) opaque.ptr[i];
    }
    return out << std::dec;
}

inline const std::string to_string(const Opaque& opaque)
{
    return std::string((char*)opaque.ptr, opaque.len);
}

} // namespace xdr
} // namespace protocols
} // namespace NST
//------------------------------------------------------------------------------
#endif//XDR_STRUCTS_H
//------------------------------------------------------------------------------