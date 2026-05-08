# mini-game-pointer-exercise-

PROJECT NAME: Dynamic Array Average Guessing Game (Hot/Cold)

PROGRAM FLOW:
1. The user specifies the amount of random numbers (N) to be generated.
2. The program allocates memory dynamically using 'malloc' based on user input.
3. It populates the array with random integers in the range [50 - 100].
4. The arithmetic mean (average) of the generated numbers is calculated.
5. The player is given 3 attempts to guess this average.

GAME MECHANICS:
- Perfect Match: If the guess equals the average, the player wins immediately.
- HOT: If the guess is within a range of ±10 from the actual average.
- COLD: If the guess is more than 10 units away from the actual average.

TECHNICAL HIGHLIGHTS:
- Pointer Arithmetic: Managed array elements using pointers for efficient memory access.
- Dynamic Memory Management: Implemented manual memory allocation and deallocation (malloc/free).
- Math Integration: Utilized absolute difference logic to determine hint proximity.
