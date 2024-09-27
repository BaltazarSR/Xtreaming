# Xtreaming

A command-line **streaming service simulator** written in C++, featuring ASCII-based visuals. The simulator allows users to browse and manage a collection of movies, series, and episodes, providing features such as adding new content, rating movies or episodes, and comparing ratings. The project utilizes **object-oriented programming (OOP)** principles, including friend functions, operator overloading, inheritance, virtual functions, and polymorphism.

## Features

- **Browse Content**: View available movies, series, and episodes in the streaming service with ASCII-based terminal visuals.
- **Add Content**: Add new movies, series, or episodes to the catalog.
- **Rating System**: Rate movies and episodes, with the ability to calculate and display the average rating based on previous user inputs.
- **Score Comparison**: Compare scores between different movies or episodes.
- **OOP Design**: The project uses advanced OOP techniques such as:
  - **Friend functions**: For managing object interactions.
  - **Operator overloading**: To enhance functionality for comparing ratings.
  - **Inheritance and Polymorphism**: To allow for flexible, modular class hierarchies.

## Getting Started

### Prerequisites

- C++11 or later
- A C++ compiler (GCC, Clang, etc.)

### Installation

1. **Clone the repository**:

    ```bash
    git clone https://github.com/your-username/streaming-service-simulator.git   https://github.com/BaltazarSR/Xtreaming.git
    ```

2. **Navigate to the project directory**:

    ```bash
    cd Xtreaming
    ```

3. **Compile the project**:

    ```bash
    g++ -o Xtreaming Streaming.cpp Video.cpp Serie.cpp Video.hpp Serie.hpp
    ```

4. **Run the executable**:

    ```bash
    ./Xtreaming
    ```
