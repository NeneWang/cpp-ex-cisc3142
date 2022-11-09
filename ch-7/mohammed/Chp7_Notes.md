# Classes

### Why do classes exists?

- They provide a way of abstracting data and also hiding (i.e. encapsulation) certain data from some sections of code.
- This way we can separate the interface (what a user of a class can execute) and implementation (the data and functions that are used to define a class).
- Although every member must be declared inside its class, we can define a member function’s body either inside or outside of the class body.
- By default, the type of `this` is a const pointer to the nonconst version of the class type. For example, by default, the type of `this` in a `Sales_data` member function is `Sales_data \*const`. Although this is implicit, it follows the normal initialization rules, which means that (by default) we cannot bind `this` to a `const` object (§ 2.4.2, p. 62). This fact, in turn, means that we cannot call an ordinary member function on a `const` object.
- A `const` following the parameter list indicates that this is a pointer to `const`. Member functions that use `const` in this way are `const` member functions.
- IMPORTANT: Objects that are const, and references or pointers to const objects, may call only const member functions.

### Constructors

- Constructors cannot be declared as `const`.
- When a constructor is not defined there will be a `synthesized default constructor`. If for some values initialization is defined and for others it is not, then the latter will have a default initialization. e.g. a string uninitialized will be initialized into an empty string "".
-
