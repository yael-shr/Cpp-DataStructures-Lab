# C++ Algorithmic Optimization & Generic Structures



This repository features high-performance implementations of classic algorithmic problems, developed with **Modern C++ (C++17)** standards. The project emphasizes **Generic Programming**, **Memory Safety**, and **Computational Efficiency**.

## 🚀 Key Technical Features

### 1. Generic Graph Library
* **Architecture:** Developed using a header-only **Template** approach, allowing the graph to support any hashable data type as a vertex (e.g., `int`, `std::string`).
* **Memory Management:** Utilizes `std::unique_ptr` and `std::unordered_map` for efficient, leak-free adjacency list management, adhering to **RAII** principles.
* **Algorithms:** Includes Breadth-First Search (BFS) and unweighted Shortest Path calculations with $O(V + E)$ time complexity.



### 2. Dynamic Programming (DP) Optimizer
* **Problem:** Advanced solution for the "Coin Change" optimization problem.
* **Optimization:** Transitions from naive recursion to a **Bottom-Up Dynamic Programming** approach, significantly improving performance to $O(n \times m)$ time complexity.
* **Safe Resource Handling:** Integrated **Smart Pointers** to manage the DP table, ensuring robust memory handling even in resource-constrained environments.

### 3. Automated Testing Suite
* **Robustness:** A dedicated `tests/` directory containing automated assertions (`assert`) to validate:
    * Edge cases (empty graphs, unreachable nodes).
    * Logical correctness for DP optimizations.
    * Memory stability.

---

## 🛠 Tech Stack & Tools
* **Language:** Modern C++ (C++17)
* **Build System:** CMake (3.10+)
* **Environment:** MinGW / GCC
* **Version Control:** Git

---

2. **Build and Run:**
   ```bash
   mkdir build && cd build
   cmake ..
   cmake --build .
   # To Run the App:
   ./RouteOptimizer
   # To Run Tests:
   ./TestRunner

   ---

## 📝 Author
**Yael Shraga** - [Github](https://github.com/yael-shr)

"Focused on efficient, memory-safe, and scalable C++ development."
