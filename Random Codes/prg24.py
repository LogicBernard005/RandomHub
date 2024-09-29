import random

def monte_carlo_pi(iterations):
    inside_circle = 0
    total_points = iterations
    
    for i in range(iterations):
        x = random.uniform(0, 1)
        y = random.uniform(0, 1)
        
        distance = x ** 2 + y ** 2
        
        if distance <= 1:
            inside_circle += 1
            
    pi_approximation = (inside_circle / total_points) * 4
    return pi_approximation

# Example usage
result = monte_carlo_pi(10)
print("Approximation of pi:", result)
