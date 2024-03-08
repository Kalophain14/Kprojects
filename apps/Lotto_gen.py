import random


def generate_lotto_numbers(previous_results):
    # Combine all previous results into a single list
    all_numbers = [number for result in previous_results for number in result]

    # Remove duplicates to avoid bias towards frequently occurring numbers
    unique_numbers = list(set(all_numbers))

    # Ensure we have enough unique numbers to choose from
    if len(unique_numbers) < 6:
        raise ValueError("Not enough unique numbers in previous results.")

    # Generate 6 random numbers from the unique set
    selected_numbers = random.sample(unique_numbers, 6)

    return sorted(selected_numbers)


# Example usage:
previous_results = [
    [3, 12, 18, 22, 31, 45],
    [5, 14, 21, 27, 36, 49],
    [8, 19, 25, 32, 41, 48],
    [2, 9, 15, 28, 37, 50],
]

generated_numbers = generate_lotto_numbers(previous_results)
print("Generated Lotto Numbers:", generated_numbers)
```
