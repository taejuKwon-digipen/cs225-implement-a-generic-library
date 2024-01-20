# CS225 Implement a Generic Library

For this assignment you will be implementing a generic library using templates. You may implement a library of your own choosing or implement generic Stack class as the library.

The goal of the library should be to take something useful, potentially low level and provide an easy to use interface. Think of `std::vector`. It takes care of allocating memory and managing a dynamic amount of almost any type, but even a new programmer can utilize it well.

The goal of this assignment is to practice all the template knowledge we have studied and apply it to create a small and useful library.

It can be one template class. Excluding needed constructors and the 5 special member functions, the interface should have at least 5 useful functions. Groups of size 2 should create a library with 10 useful functions.

At least one function should take in a Callable object as a parameter.

## Stack Example

A stack can be useful in many situations. Like `vector` it can have a dynamic amount and manages memory for it's collection of elements.

Useful Functions:

1. `push()` - inserts element at the top
2. `emplace()` - constructs element in-place at the top
3. `pop()` - removes the top element
4. `foreach()` - Allows a callable object to be invoked on each element on the stack
5. Comparison operators : `operator==,!=,<,<=,>,>=` - Compares the contents of the underlying containers of two containers. The comparison is done by applying the corresponding operator to the underlying elements.


## Doxygen comments

Since the goal of this assignment is to make a useful library of some kind then we need to provide decent documentation, so that new users can learn how to use it quickly and have a reference to use when they have questions.

There are many ways to provide documentation, but for this assignment will we be using the [Doxygen tool](https://www.doxygen.nl). It builds documentation files from parsing the code and embedding more details from comments that follow a certain pattern.

For this assignment you must document all **public** interfaces and types. Each function must also come with a complete code example that illustrates the use of the function/type. 

The output should look something along the lines of this [`doodle::random()` function documentation](https://rudy-digipen.github.io/doodle-release/0.2/group___utility.html#gae24cf4a69b0dfdf3afd08bea69dcf40b).

- [Doxygen Overview](https://www.doxygen.nl/manual/index.html)
- [Doxygen Documenting the Code](https://www.doxygen.nl/manual/docblocks.html)
- [Doxygen Commands](https://www.doxygen.nl/manual/commands.html)


# Grading Rubric

- [ ] [**core**] Created a generic C++ library with templates
- [ ] [**core**] Implementation is written with your own low level code
- [ ] [**core**] All user facing _(ie the public interface)_ functions and types are documented with Doxygen style comments
- [ ] [**core**] All documented functions/types have a complete a code example and image if an image would help understanding the function/type more
- [ ] Created projects to build and run all of the provided code examples. _(You may use [premake5](https://premake.github.io/) or [cmake](https://cmake.org/) to help generate the projects)_
- [ ] [**core**] Interface involves at least one use of a **callable** object, where users can provide their own function, function object, lambda or member function
- [ ] [**core**] All template parameters do something reasonable or clearly communicate when it resolves to a `void` type
- [ ] [**core**] All template parameters do something reasonable or clearly communicate when it resolves to a `const` type
- [ ] [**core**] All template parameters do something reasonable or clearly communicate when it resolves to a reference, const reference, and forward references
- [ ] [**core**] All template parameters do something reasonable or clearly communicate when it resolves to an array/ const array type
- [ ] [**core**] All template parameters do something reasonable or clearly communicate when it resolves to an pointer/ const pointer type
- [ ] [**core**] All template parameters do something reasonable or clearly communicate when it resolves to a type that does not have a constructor, copy constructor, move constructor, copy assignment operator and move assignment operator
- [ ] [**core**] Any custom assumptions about the template arguments are clearly communicated. For example if you need to compare instances with `operator<` then the code communicates that with a helpful `static_assert`
- [ ] [**core**] Interface contains 5 or more non-trivial functions.
- [ ] [**core**] If group size is 2 then interface contains 10 or more non-trivial functions.
- [ ] [**core**] Created a properly filled out `GradingHelper.md` file
- [ ] If group size is 2 then running `git shortlog -sn --no-merges` shows that both members commit counts of the repository are in the same order of magnitude
- [ ] Utilizes the [Guideline Support Library](https://github.com/microsoft/GSL) if applicable
- [ ] Applied 2 or more C++ Core Guidelines to the library
- [ ] All third party code is incorporated as a submodule if possible _(GSL can be)_
- [ ] All code that can be `constexpr` is marked as `constexpr`
- [ ] Thoroughly marks code with `noexcept` and `[[nodiscard]]` when applicable
- [ ] Uses standard type traits when applicable
- [ ] Creates custom type traits when applicable
- [ ] Utilizes algorithm selection at least one time
- [ ] Uses placement new when applicable
- [ ] Utilize SFINAE techniques to enable/disable code based off of the template parameter traits
- [ ] All source files compile without warnings and without errors.
- [ ] Created a helpful ReadMe.md file that explains the project, has instructions for adding the library to a new project, build instructions for all of the example projects, and has build instructions for generating the documentation with Doxygen.
- [ ] Picked and defined an appropriate License
- [ ] Correct files submitted. No unnecessary files submitted. No files generated from Doxygen submitted.
- [ ] **All** Source Code has a proper header comment: Name, Assignment Name, Course Number, Term & Year.
- [ ] Followed the appropriate Code Quality Guidelines and Code Style Guidelines.
- [ ] All requirements that are completed are checked off here by replacing the `[ ]` with `[x]`

Scores for Exercises will be given as the following:

Score        | Assessment
------------ | ----------
Zero         | Nothing turned in at all
Failing      | Close to meeting core requirements
Rudimentary  | Meets all of the core requirements
Satisfactory | Close to meeting all requirements
Good         | Clearly meets all requirements 
Excellent    | High quality, well beyond the requirements

### Create a GradingHelper file

Create a **`GradingHelper.md`** markdown file that defines the following.

1. Your name(s), assignment name/number, course name, term
2. Section describing anything incomplete about the assignment
4. Section describing something you're proud of about the assignment
3. Section that lists the File and Line numbers of code that shows One example use of a :
    - low level code
    - function template that uses a callable object
    - handling when template parameter is `void`
    - handling when template parameter is `const`
    - handling when template parameter is a reference
    - handling when template parameter is a const reference
    - handling when template parameter is a forward reference
    - handling when template parameter is an array/const array
    - handling when template parameter is a pointer/const pointer
    - handling when template parameter does not have constructor
    - handling when template parameter does not have copy constructor
    - handling when template parameter does not have move constructor
    - handling when template parameter does not have copy assignment
    - handling when template parameter does not have move assignment
    - handling when template parameter does follow a your own custom assumption
    - 5 or 10 non-trivial functions
    - 1st C++ core guideline that was applied
    - 2nd C++ core guideline that was applied
    - `constexpr`
    - `noexcept`
    - `[[nodiscard]]`
    - Use of a standard type trait
    - Definition of a custom type trait
    - Use of a custom type trait
    - Use of algorithm selection
    - Use of placement new, if applicable
    - Manual destructor call that pairs with placement new, if applicable
    - Use of SFINAE technique to remove/add code based off of a template parameter type trait