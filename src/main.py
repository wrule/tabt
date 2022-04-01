
def main():
  print('开始')
  num = 0
  for n1 in range(0, 1000):
    for n2 in range(0, 1000):
      for n3 in range(0, 1000):
        num += 1
  print('结束', num)
  
main()
