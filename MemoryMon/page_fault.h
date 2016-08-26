// Copyright (c) 2015-2016, tandasat. All rights reserved.
// Use of this source code is governed by a MIT-style license that can be
// found in the LICENSE file.

/// @file
/// Declares interfaces to page-fault functions.

#ifndef MEMORYMON_PAGE_FAULT_H_
#define MEMORYMON_PAGE_FAULT_H_

#include <fltKernel.h>

extern "C" {
////////////////////////////////////////////////////////////////////////////////
//
// macro utilities
//

////////////////////////////////////////////////////////////////////////////////
//
// constants and macros
//

////////////////////////////////////////////////////////////////////////////////
//
// types
//

////////////////////////////////////////////////////////////////////////////////
//
// prototypes
//

_IRQL_requires_min_(DISPATCH_LEVEL) bool PfHandlePageFault(_In_ void* guest_ip);

_IRQL_requires_min_(DISPATCH_LEVEL) bool PfHandleBreakpoint(
    _In_ void* guest_ip);

_IRQL_requires_max_(PASSIVE_LEVEL) void PfStopPageFaultHandling();

////////////////////////////////////////////////////////////////////////////////
//
// variables
//

////////////////////////////////////////////////////////////////////////////////
//
// implementations
//

}  // extern "C"

#endif  // MEMORYMON_PAGE_FAULT_H_
