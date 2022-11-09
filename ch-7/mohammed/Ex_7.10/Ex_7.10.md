#### Exercise 7.10: What does the condition in the following if statement do?

```cpp
if (read(read(cin, data1), data2)) {}
```

This statement will read values for the data1 object using standard input, and the input stream will be returned into another read function call as the first parameter. Using the same input stream, values will be read into data2 object.
