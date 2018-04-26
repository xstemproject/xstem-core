// Copyright © 2009-2018 The Bitcoin developers
// Copyright © 2018 The Xstem developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef RPCVELOCITY_H
#define RPCVELOCITY_H 1

#include "json/json_spirit_reader_template.h"
#include "json/json_spirit_writer_template.h"
#include "json/json_spirit_utils.h"
#include "velocity.h"

extern json_spirit::Value getvelocityinfo(const json_spirit::Array& params, bool fHelp);

#endif