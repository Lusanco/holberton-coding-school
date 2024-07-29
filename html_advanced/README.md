# html_advanced

Welcome to the `html_advanced` project!

## Overview

In this and future projects, we are tasked with implementing a webpage from a provided designer file. For this initial project, are focus will be solely on the HTML structure, no CSS or styling required. The goal is to create a clean, semantic HTML layout based on the provided design.

### Project Tasks

- `0. README and objectives!`
  - An overview was introduced, and the task of writing the project `README.md`.
- `1. Header`
  - The initial html structure was made alongside with the creation of the `header` element and its specifications.
``` html
  <!-- Task 1: Create HTML skeleton with header -->
  <!doctype html>
  <html lang="en">

  <head>
      <meta charset="UTF-8" />
      <title>HTML, advanced</title>
      <meta name="viewport" content="width=device-width,initial-scale=1" />
      <meta name="description" content="Clean, semantic HTML layout based on the provided design." />
  </head>

  <body>
      <header>
          <a href="#">
              <img src="#" alt="logo">
          </a>
          <nav>
              <a href="#">Courses</a>
              <a href="#">Pricing</a>
              <a href="#">Login</a>
          </nav>
      </header>
  </body>

  </html>
```

- `2. Banner`
  - Create a banner inside the header element.
    - section inside the header
      - header
        - section
    - heading level 1 tag, a text elementm and a button element in a block element inside section
      - section
        - div (evaluate for correct semantic html tag)
          - h1
          - p
          - button
    - header level 2 tag, block element containing 4 blocks each containing (an image, heading level 3 tag, text)
      - div (evaluate for correct semantic html tag)
        - h2
        - div (evaluate for correct semantic html tag)
          - div (evaluate for correct semantic html tag)
            - img
            - h3
            - p
          - div (evaluate for correct semantic html tag)
            - img
            - h3
            - p
          - div (evaluate for correct semantic html tag)
            - img
            - h3
            - p
          - div (evaluate for correct semantic html tag)
            - img
            - h3
            - p
    - main element below header element
      - header
      - main

### Designer File

The design file for this project is available on [Figma](https://www.figma.com/design/XrEAsu1vQj5fhVaNG38d2W/Homepage?node-id=0-1&t=6gcfvq0WjRGjQils-0).

### Fonts & Values

**Important Notes:**
- **Fonts:** Fonts utilized for this project can be downloaded here:
  - [Source Sans Pro](https://www.fontsquirrel.com/fonts/source-sans-pro)
  - [Spin Cycle OT](https://www.fontsquirrel.com/fonts/Spin-Cycle-OT)

- **Values:** Some design values are specified as floats. These will be rounded as needed to achieve a functional and accurate layout.
