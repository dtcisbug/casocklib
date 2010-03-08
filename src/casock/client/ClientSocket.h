/*
 * casocklib - An asynchronous communication library for C++
 * ---------------------------------------------------------
 * Copyright (C) 2010 Leandro Costa
 *
 * This file is part of casocklib.
 *
 * casocklib is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as
 * published by the Free Software Foundation, either version 3 of
 * the License, or (at your option) any later version.
 *
 * casocklib is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with casocklib. If not, see <http://www.gnu.org/licenses/>.
 */

/*!
 * \file casock/client/ClientSocket.h
 * \brief [brief description]
 * \author Leandro Costa
 * \date 2010
 *
 * $LastChangedDate$
 * $LastChangedBy$
 * $Revision$
 */

#ifndef __CASOCKLIB__CASOCK_CLIENT__CLIENT_SOCKET_H_
#define __CASOCKLIB__CASOCK_CLIENT__CLIENT_SOCKET_H_

#include <string>
using std::string;

#include "casock/base/Socket.h"

namespace casock {
  namespace client {
    class ClientSocket : public casock::base::Socket
    {
      public:
        ClientSocket (const string& host, const unsigned int& port);
        virtual ~ClientSocket ();

      public:
        void connect ();
        void close ();

        const bool connected () { return m_connected; }

      private:
        string  m_host;
        bool    m_connected;
    };
  }
}

#endif // __CASOCKLIB__CASOCK_CLIENT__CLIENT_SOCKET_H_
