
function main() {
  console.log('开始');
  op = Number(new Date());
  let num = 0;
  for (let n1 = 0; n1 < 10000; ++n1) {
    for (let n2 = 0; n2 < 1000; ++n2) {
      for (let n3 = 0; n3 < 1000; ++n3) {
        num += num + (n1 + n2 - n3);
      }
    }
  }
  console.log('结束', Number(new Date()) - op, num);
}

main()
