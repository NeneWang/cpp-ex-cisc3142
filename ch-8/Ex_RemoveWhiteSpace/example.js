async function foo() {
    const result1 = await new Promise((resolve) =>
      setTimeout(() => resolve("1"))
    );
    const result2 = await new Promise((resolve) =>
      setTimeout(() => resolve("2"))
    );
  }
  foo();