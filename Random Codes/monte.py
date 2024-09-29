import random

def monte_carlo_pi(num_points):
    points_inside_circle = 0
    
    for _ in range(num_points):
        x = random.random()  # Generate random x-coordinate between 0 and 1
        y = random.random()  # Generate random y-coordinate between 0 and 1
        
        # Check if the point (x, y) is inside the unit circle
        if x**2 + y**2 <= 1:
            points_inside_circle += 1
    
    pi_approximation = 4 * (points_inside_circle / num_points)
    return pi_approximation

# Example usage
num_points = 1000000  # Number of points to generate
approx_pi = monte_carlo_pi(num_points)
print("Approximated value of pi:", approx_pi)
