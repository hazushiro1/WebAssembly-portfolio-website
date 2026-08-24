//
// Created by hazushiro on 8/6/26.
//

#ifndef WEBASSEMBLY_BASTION_PORTFOLIO_BASTION_INTERFACE_H
#define WEBASSEMBLY_BASTION_PORTFOLIO_BASTION_INTERFACE_H

// Necessary libraries
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

// Defining the core system diagnostics
int runBastionDiagnostics(void);

// Vector Engine C-ABI Entrypoints (FastVectorDB Wasm Integration)
int bastionVDB_init(size_t dimension);
int bastionVDB_insert(uint64_t id, const float* vecData, size_t vecLength);
size_t bastionVDB_search(const float* queryData, size_t queryLength, size_t k, uint64_t* outIDs, float* outScores);

// Banking System C-ABI Entrypoints (ST Bank Account Integration)
uint64_t bastionBank_createChecking(const char* owner, double initialBalance);
uint64_t bastionBank_createSaving(const char* owner, double initialBalance);
double bastionBank_GetBalance(uint64_t accountID);

#ifdef __cplusplus
}
#endif

#endif //WEBASSEMBLY_BASTION_PORTFOLIO_BASTION_INTERFACE_H
