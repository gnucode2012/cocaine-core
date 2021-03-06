/*
    Copyright (c) 2011-2013 Andrey Sibiryov <me@kobology.ru>
    Copyright (c) 2011-2013 Other contributors as noted in the AUTHORS file.

    This file is part of Cocaine.

    Cocaine is free software; you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation; either version 3 of the License, or
    (at your option) any later version.

    Cocaine is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with this program. If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef COCAINE_FORWARDS_HPP
#define COCAINE_FORWARDS_HPP

namespace cocaine {
    // Runtime configuration.
    struct config_t;

    // Runtime context.
    class context_t;

    // App container.
    class app_t;

    namespace api {
        class driver_t;
        class gateway_t;
        class isolate_t;
        class logger_t;
        class service_t;
        class storage_t;

        struct event_t;
        struct stream_t;
    }

    namespace engine {
        // App configuration.
        struct manifest_t;
        struct profile_t;

        // App engine.
        class engine_t;
    }

    namespace io {
        struct local;
        struct tcp;
        struct udp;

        template<class>
        struct socket;

        template<class>
        struct acceptor;

        // I/O privimites

        struct reactor_t;

        template<class>
        struct connector;

        template<class>
        struct readable_stream;

        template<class>
        struct writable_stream;

        struct timeout_t;

        // RPC primitives

        template<class>
        struct protocol;

        struct message_t;

        // Messaging

        template<class>
        struct encoder;

        template<class>
        struct decoder;

        template<class>
        struct channel;
    }

    namespace logging {
        enum priorities: int {
            ignore,
            error,
            warning,
            info,
            debug
        };

        struct logger_concept_t;
        struct log_t;
    }
}

#endif
