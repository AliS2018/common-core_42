# Running francinette on libft

What your Makefile and project layout need so that francinette works.
Based on the francinette source in `frantests/` (`main.py`, `testers/BaseTester.py`,
`testers/libft/Libft.py`, `testers/BaseExecutor.py`).

## How francinette runs on libft

1. **Detection.** It reads `./Makefile` in the folder you run it from and looks for a line
   exactly like `NAME = libft.a`. `NAME := libft.a` also works, and extra spaces are fine.
   Nothing else may follow `libft.a` on that line. If no such line exists, it stops with
   "needs to be executed inside a project folder".
2. **Copy.** It copies the whole folder to `frantests/temp/libft/`. Any file your
   `.gitignore` covers is deleted from the copy, so don't ignore files the build needs.
3. **Norminette.** It runs `norminette` on everything in the copy. Norm errors are reported
   but don't stop the run. Use `-in` to skip this step.
4. **Which functions it tests.** It reads `libft.h` **from the root of the project**, not
   from `includes/`. Any function without a prototype there, in the form
   `type ft_name(...)`, is counted as "missing" and not tested.
5. **Build.** In the copy's root it runs `make fclean all`, or `make fclean all bonus` if the
   Makefile has a line starting with `bonus:`. That has to produce **`libft.a` in the root**,
   or it fails with "libft.a was not created".
6. **Tests.** It copies `libft.a` and `libft.h` into each tester (war-machine, Tripouille,
   alelievr, fsoares) and runs them. The fsoares tester rebuilds your library with debug
   flags: it searches your Makefile for the literal text `-Wall` and adds `-g` next to it.
   Your flags must include `-Wall` as written, not hidden behind another variable.

## Checklist for your Makefile

- [ ] `NAME = libft.a` on a line by itself
- [ ] An `all` rule that builds `$(NAME)` in the project root (e.g. `ar rcs $(NAME) $(OBJ)`)
- [ ] `clean`, `fclean` and `re` rules (`fclean` must run without errors even when nothing
      has been built)
- [ ] `-Wall -Wextra -Werror` written literally
- [ ] `libft.h` in the project root, or the tests can't find it. The `includes/libft.h`
      layout breaks this, and the 42 subject also expects the files in the root.
- [ ] Every function you want tested has a prototype in `libft.h`
- [ ] Optional: a `bonus:` rule, only once the bonus functions are written. If the rule
      exists, francinette builds and tests the bonus too.

## Running it

```sh
cd ~/Documents/PersonalDev/42/common-core/libft
make fclean all && ls libft.a    # check this works first
francinette                      # full run
francinette -in                  # skip norminette
francinette -m                   # mandatory part only
francinette ft_split ft_strchr   # only these functions
```

`francinette` and `paco` are wrapper scripts in `~/.local/bin` that call
`frantests/tester.sh`. If you move `frantests`, update the path in both scripts.

Logs are in `frantests/logs/execution.log`, and the copy it builds and tests is in
`frantests/temp/libft/`.

You can keep your own `test` target. Francinette doesn't use it, and it won't get in the way.
