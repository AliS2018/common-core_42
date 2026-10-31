<div align="center">

# 42 Barcelona — Common Core

**A collection of projects built during my time at [42 Barcelona](https://www.42barcelona.com/).**

![42](https://img.shields.io/badge/42-Barcelona-000000?style=flat-square&logo=42&logoColor=white)
![Language](https://img.shields.io/badge/language-C-A8B9CC?style=flat-square&logo=c&logoColor=white)
![Norm](https://img.shields.io/badge/norminette-passing-success?style=flat-square)
![Login](https://img.shields.io/badge/login-alsadyko-blue?style=flat-square)

</div>

---

## About

This repository is my working monorepo for 42's curriculum: the common core
projects, the workshops from a league I've been part of, and anything else I
build along the way. Each project lives in its own directory with its own
Makefile and, where it makes sense, its own tests.

## Projects

| Project | Description | Status | Grade |
|---|---|---|---|
| [**Libft**](./libft) | My own C standard library — libc reimplementations, extra string/memory helpers and a linked-list API. | ✅ Done | 100 |
| [**ft_printf**](./ft_printf) | A reimplementation of `printf(3)` using variadic arguments. | 🚧 In progress | — |
| [**Workshops**](./workshops) | Projects and exercises from the workshops of a league I took part in. | 🚧 Ongoing | — |
| *More to come…* | | ⏳ | |

<details>
<summary><b>Workshops</b></summary>

<br>

| Workshop | Topic |
|---|---|
| *name* | *short description* |

</details>

## Repository layout

```
.
├── libft/          # Custom C library
├── ft_printf/      # printf reimplementation
├── workshops/      # League workshops
└── README.md
```

## Building

Every project follows the same Makefile conventions required by 42:

```sh
cd <project>
make        # build
make clean  # remove object files
make fclean # remove objects + binaries/libraries
make re     # full rebuild
```

## Testing

Projects that include tests can be run with:

```sh
make test
```

## Standards

- Written in C, compiled with `cc -Wall -Wextra -Werror`
- Compliant with the 42 [Norm](https://github.com/42School/norminette)
- No memory leaks (checked with `valgrind`)

## A note for 42 students

This repo is here as a record of my progress, not as an answer sheet.
Reading code is fine — copying it won't teach you anything, and the
evaluations will make that obvious. Struggle with it, it's the whole point.

---

<div align="center">
<sub>Made with too much coffee at 42 Barcelona · <a href="https://profile.intra.42.fr/users/alsadyko">alsadyko</a></sub>
</div>- 
