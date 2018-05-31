#ifndef BITCOIN_GENESIS_H
#define BITCOIN_GENESIS_H

#include "bignum.h"

/** Genesis Start Time */
static const unsigned int timeGenesisBlock = 1524780000; // Mon, 01 May 2017 00:00:00 GMT
/** Genesis TestNet Start Time */
static const unsigned int timeTestNetGenesis = 1524780000; // Mon, 01 May 2017 00:00:30 GMT
/** Genesis RegNet Start Time */
static const unsigned int timeRegNetGenesis = 1524780000; // Mon, 01 May 2017 00:00:90 GMT
/** Genesis Nonce Mainnet*/
static const unsigned int nNonceMain = 827861;
/** Genesis Nonce Testnet */
static const unsigned int nNonceTest = 827861;
/** Genesis Nonce Regnet */
static const unsigned int nNonceReg = 827861;
/** Main Net Genesis Block */
static const uint256 nGenesisBlock("0x000023d9d0387578361c4f045003db2b852eb7b0cc1edeb7016f3e1ae9eca702");
/** Test Net Genesis Block */
static const uint256 hashTestNetGenesisBlock("0x000023d9d0387578361c4f045003db2b852eb7b0cc1edeb7016f3e1ae9eca702");
/** Reg Net Genesis Block */
static const uint256 hashRegNetGenesisBlock("0x000023d9d0387578361c4f045003db2b852eb7b0cc1edeb7016f3e1ae9eca702");
/** Genesis Merkleroot */
static const uint256 nGenesisMerkle("0x20ca0d1e9a4fb4a9267216e9eb3d86c3077b49c7029e1f962bf26a1fff684567");

#endif // BITCOIN_GENESIS_H