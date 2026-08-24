# WebAssembly Bastion Portfolio

A high-integrity, multi-tier WebAssembly application designed to showcase contract-based defensive architecture, hardware-software co-design, and modern systems engineering.

---

## Overview

The WebAssembly Bastion Portfolio implements a 3-tier defensive software architecture:
- **Tier 1 (Ada 2012)**: Outer perimeter defense enforcing preconditions, postconditions, and strict memory boundary safety.
- **Tier 2 (Assembly)**: Interconnect stubs managing explicit ABI parameter marshaling and stack frame transfer.
- **Tier 3 (C++20)**: Inner compute engine executing high-speed algorithms and SIMD math.

---

## Directory Structure

```
WebAssembly_Bastion_Portfolio/
├── ARCHITECTURE.adoc         # Detailed architecture design specification
├── CMakeLists.txt            # Standalone CMake build configuration
├── PROGRESS_LOG.md           # Development milestones progress log
├── README.md                 # Project documentation
├── include/                  # Shared interface headers
└── src/                      # Implementation source code
    └── main.cpp              # Test runner entrypoint
```

---

## Build Instructions

```bash
# 1. Configure CMake build directory
cmake -B build

# 2. Compile standalone binary
cmake --build build

# 3. Execute test runner
./build/bastion_portfolio
```

---

## Detailed Specifications

For complete architectural diagrams, contract definitions, and NSPE Code of Ethics alignment, see [`ARCHITECTURE.adoc`](ARCHITECTURE.adoc).
