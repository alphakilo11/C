


int is_prime_number(number) {
  if (number % 2 == 0) | (number <= 1) {
    return 0;
  }
  for divisor in range(3, round(number ** 0.5)):
    if number % divisor == 0:
      return False
  return True
}

start = timer()

try:
  winner = [0,0,0]
  for co_1 in range(-999, 1000):
    for co_2 in range(-1000, 1001):
      n = 0
      while True:
        if is_prime_number(n ** 2 + co_1 * n + co_2):
          n += 1
        else:
          if n > winner[0]:
            winner = [n, co_1, co_2]
          break
finally:
  print(timer() - start)
  print(winner)
  del start, co_1, co_2, n