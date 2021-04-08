## Coding style guidelines

This codebase uses the [PEP 8](https://pep8.org/) code style.

Line lenght should not exceed 80 characters, unless it significantly increases readability. For example, when performing complex calculations that would be difficult to understand, when they are broken up into multiple lines.

### Function description

Each function should contain a description with a python doc string (e.g. \`\`\` comment \`\`\`), this description should roughly follow this sample:
```python
def function_header(parameters):
    ```
    Brief descrption (on a single line)

    Long description (if necessary)

    Parameters:
        parameter 1     [type]      -   description
        ...
        parameter n   ...

    Return: (if not None)
                        [type]      -   description
    ```
    function body
```

### Naming

* Variable names should be long enough to describe the usage of the variable or what it represents
* Function names should represent roughly what the function does.
* We use the **snake_case** naming scheme for functions and variables.
* Class names should start with a capital letter and we use the **camelCase** naming scheme for classes.
* If you use constants (globally or for the scope of a functions) then write those variables with ALL_CAPS

