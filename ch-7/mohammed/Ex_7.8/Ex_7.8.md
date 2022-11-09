### Exercise 7.8: Why does read define its Sales_data parameter as a plain reference and print define its parameter as a reference to const?

- print method should not be modifying the sales data so it makes sense to define its parameter as a const
- read will be modifying the Sales_data object and so it should not be defined as const.
