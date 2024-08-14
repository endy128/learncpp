# Notes

Use `std::cerr` to output values, and strings to the console. **Don't** use `std::cout`, this is because `cout` is buffered output and `cerr` is not - so you should always see the `cerr` output.

Always keep the `std::cerr` statements **un-indented** - this is to make the easy to find when you come to remove them. To stop `clang` from auto formatting them, use comments as shown below:


```
    // clang-format off
std::cerr << "test";
    // clang-format on

```
