# Code Style Tips
A short explanation of common style things that people forget!
Look at the style guide for more detailed tips and examples!

## Header comments
- Short description of the program
- zID and date submitted

## Place holder comments
- Remove any `TODO` comments
- Remove and starter code
- Remove and un-used code

## Spacing/ Whitespace
- Have BOTH veritical and horizontal whitespace
- No big gaps in code (multiple random blank lines)
- Usually gaps between blocks of code are 1 line
- Split code into "paragraphs"

## `#defines`
- Make sure to use them as much as possible!
- No 'magic numbers' in your code
- All constants (numbers or values) that don't change should use a #define (e.g. ARRAY_SIZE)
- no `while (counter < 5)` <-- 5 should have a meaning & #define

## Function
- Use them!
- No function should be longer than ~50 lines 
- Aim for ~50 lines
- No such thing as a function too small 
    - Okay to have 1 or 5 line functions!
- No such thing as too many functions

## Comments
- Explain what your code does (don't need to say not how it does it) 
- Brief and descriptive
- Typically explain blocks of code
- Have function header comments (a brief comment above a function giving short overview of what it does). Then inside your function, if there are large blocks of code, have a short comment for it too.
- Pretend as if someone looking at your code has never read the assignment spec

## Long Lines
- If your printf, scanf, function definition or any other line is longer than 80 characters,
you can split it over multiple lines
- here are some examples (more examples in style guide)

```
    printf(
        "According to all known laws of aviation, "
        "there is no way that a %c should be able to fly.\n"
        "Its wings are too small to get its fat little body off the ground.\n"
        "The bee, of course, flies anyways. "
        "Because bees don't care what humans think is impossible.\n",
        'B'
    )
    
    // This is WAY too long:
    if (something && somethingElse && somethingElseAgain && anotherThing && evenMoreThings && somethingElseEntirely && thereAreTooManyConditions &&                 thisLineIsTooLong) {...}

    // This is better (but consider using a function instead):
    if (
        something && somethingElse && somethingElseAgain && anotherThing &&
        evenMoreThings && somethingElseEntirely && thereAreTooManyConditions &&
        thisLineIsTooLong
    ) {...}

    // This is best:
    if (thoseThingsAreTrue()) {
        ...
    }
    
```

## Style Guide
- https://cgi.cse.unsw.edu.au/~cs1511/23T3/resources/style_guide.html

