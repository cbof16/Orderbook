# Limit Order Book Simulator

## Overview
This project implements a high-performance limit order book simulator written in C++. It supports multiple order types, including Fill or Kill, Good for Day, and Market Orders. The simulator mimics the behavior of a real financial market's order book, incorporating features like order matching, market impact, and latency considerations. It is designed for educational purposes, strategy testing, and market behavior analysis.

## Features
- **Multiple Order Types**: Supports market orders, limit orders, stop orders, Fill or Kill (FOK), and Good for Day (GFD).
- **Order Matching**: Implements efficient order matching logic to simulate real market behavior.
- **Market Impact Simulation**: Adjusts prices based on order execution and liquidity to mimic market impact.
- **Latency Simulation**: Introduces artificial delays to simulate network latency and order processing time.
- **Concurrency Handling**: Uses C++ concurrency features to manage multiple orders and market data updates.

## Getting Started

### Prerequisites
- C++17 or later
- CMake 3.10 or later
- GCC/Clang or any compatible C++ compiler
- Google Test (for testing)

### Installation

 **Clone the Repository**
   ```sh
   git clone https://github.com/yourusername/limit-order-book.git
   cd limit-order-book
   ```


 **Build the Project**
   ```sh
   mkdir build
   cd build
   cmake 
   make
   ```
