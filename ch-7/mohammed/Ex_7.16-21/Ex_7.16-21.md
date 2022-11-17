### Ex 7.16

- properties that are member of a class which we don't want users to **change** should be private. public specifier should be used on getters and setters and also any method that does not change our data members.

### Ex 7.17

- classes and structs are the same except that structs are by default access for any user to modify data members, whereas classes by default have its members private except that which is specified to be public.

### Ex 7.18

- Encapsulation is an object oriented concept where we hide our data members from direct access to our users.
- Encapsulation provides two important advantages:
  - User code cannot inadvertently corrupt the state of an encapsulated object.
  - The implementation of an encapsulated class can change over time without re- quiring changes in user-level code.

### Ex 7.19

- We would declare both name and address private, while making the getters public. Because we don't want our users to make changes to name or address however they want, but we want some method of allowing them to access their values.
