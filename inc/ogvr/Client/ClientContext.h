/** @file
    @brief Header

    @date 2014

    @author
    Ryan Pavlik
    <ryan@sensics.com>
    <http://sensics.com>
*/

// Copyright 2014 Sensics, Inc.
//
// All rights reserved.
//
// (Final version intended to be licensed under
// the Apache License, Version 2.0)

#ifndef INCLUDED_ContextImpl_h_GUID_9000C62E_3693_4888_83A2_0D26F4591B6A
#define INCLUDED_ContextImpl_h_GUID_9000C62E_3693_4888_83A2_0D26F4591B6A

// Internal Includes
#include <ogvr/Client/Export.h>
#include <ogvr/Util/ClientOpaqueTypesC.h>

// Library/third-party includes
#include <boost/noncopyable.hpp>

// Standard includes
#include <string>

struct OGVR_ClientContextObject : boost::noncopyable {
  public:
    OGVR_CLIENT_EXPORT OGVR_ClientContextObject(const char appId[]);

    std::string const &getAppId() const;

  private:
    std::string const m_appId;
};

namespace ogvr {
namespace client {
    typedef OGVR_ClientContextObject ClientContextObject;
} // namespace client_impl
} // namespace ogvr
#endif // INCLUDED_ContextImpl_h_GUID_9000C62E_3693_4888_83A2_0D26F4591B6A
