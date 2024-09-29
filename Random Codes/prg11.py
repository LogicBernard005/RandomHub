# Q1


def func(numbers):
    p_cnt = 0
    n_cnt = 0
    for num in numbers:
        if num > 0:
            p_cnt += 1
        elif num < 0:
            n_cnt += 1
    counts = {
        'positive': p_cnt,
        'negative': n_cnt
    }
    return counts

number_list = [1, -1, 3, -2, 5, -6, 3]

result = func(number_list)

print("Positive Count:", result['positive'])
print("Negative Count:", result['negative'])
