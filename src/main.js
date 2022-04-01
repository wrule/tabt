
function main() {
  console.log('开始');
  op = Number(new Date());
  let num = 0;
  for (let n1 = 0; n1 < 1000; ++n1) {
    for (let n2 = 0; n2 < 1000; ++n2) {
      for (let n3 = 0; n3 < 1000; ++n3) {
        num += n3 - n2;
      }
    }
  }
  console.log('结束', Number(new Date()) - op, num);
}

main()
