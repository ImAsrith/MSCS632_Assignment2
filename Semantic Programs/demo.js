function makeMultiplier(factor) {
    return function(x) {
      return x * factor;
    };
  }
  
  const times3 = makeMultiplier(3);
  console.log("JavaScript closure: 3 * 10 =", times3(10));
  