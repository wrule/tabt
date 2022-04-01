from datetime import datetime

def main():
  print('开始')
  op = datetime.utcnow()
  num = 0
  for n1 in range(0, 1000):
    for n2 in range(0, 1000):
      for n3 in range(0, 1000):
        num += n3 - n2
  print('结束', datetime.utcnow() - op, num)
  
main()
