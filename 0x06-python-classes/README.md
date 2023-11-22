# Square Class Project

This Python project introduces the `Square` class, providing a foundation for understanding object-oriented programming (OOP) concepts. The class includes features such as size validation, area calculation, and printing of the square. It also introduces the concept of position for the square.

## Table of Contents

- [Files](#files)
- [Usage](#usage)
- [Task Descriptions](#task-descriptions)
- [Testing](#testing)
- [License](#license)

## Files

The project is organized into the following files:

1. **0-square.py**: Defines an empty class `Square`.
2. **1-square.py**: Adds a private instance attribute `size` to the `Square` class.
3. **2-square.py**: Adds validation to the `size` attribute in the `Square` class.
4. **3-square.py**: Adds a public instance method `area` to calculate the area of the square.
5. **4-square.py**: Adds getter and setter methods for the `size` attribute.
6. **5-square.py**: Adds a public instance method `my_print` for printing the square.
7. **6-square.py**: Introduces a private instance attribute `__position` for the position of the square.

## Usage

To use the `Square` class, follow these steps:

1. Import the class into your Python script:

    ```python
    from 6-square import Square
    ```

2. Create an instance of the `Square` class with optional size and position parameters:

    ```python
    my_square = Square(size=5, position=(2, 3))
    ```

3. Access and manipulate attributes:

    ```python
    print("Size:", my_square.size)
    print("Position:", my_square.position)
    
    # Modify attributes
    my_square.size = 3
    my_square.position = (1, 1)
    ```

4. Use class methods:

    ```python
    # Calculate and print area
    print("Area:", my_square.area())
    my_square.my_print()
    ```

## Task Descriptions

1. **0. My first square**: Defines an empty class `Square`.
2. **1. Square with size**: Adds a private instance attribute `size` to the `Square` class.
3. **2. Size validation**: Adds validation to the `size` attribute in the `Square` class.
4. **3. Area of a square**: Adds a public instance method `area` to calculate the area of the square.
5. **4. Access and update private attribute**: Adds getter and setter methods for the `size` attribute.
6. **5. Printing a square**: Adds a public instance method `my_print` for printing the square.
7. **6. Coordinates of a square**: Introduces a private instance attribute `__position` for the position of the square.

## Testing

A set of test scripts (`X-main.py`) is provided for each task to demonstrate the functionality of the `Square` class. Execute these scripts to verify that the class meets the specified requirements.

```bash
./X-main.py
