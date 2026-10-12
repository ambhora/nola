<!--
- SPDX-License-Identifier: Apache-2.0
- SPDX-FileCopyrightText: 2026 nola developers
-->


# nola

**Device-aware data structures and iterators for high-performance computing.**

nola is a C++ library of reusable building blocks for HPC applications, designed for use on CPUs and accelerators.

Its scope includes:

- **`array`** — dynamically sized, device-aware storage.
- **`static_array`** — fixed-size storage suitable for host and device code.
- **Views and multidimensional arrays** — non-owning access to data with explicit shapes and layouts.
- **Iterators and ranges** — composable ways to traverse data.
- **Memory utilities** — allocation, memory spaces, and data movement.

nola aims to provide familiar C++ interfaces, predictable performance, and components that can be used across HPC projects without duplicating common infrastructure.
