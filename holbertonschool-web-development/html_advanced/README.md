# html_advanced

Welcome to the `html_advanced` project!

## Overview

In this and future projects, we are tasked with implementing a webpage from a provided designer file. For this initial project, are focus will be solely on the HTML structure, `no CSS or styling` required. The goal is to create a clean, semantic HTML layout based on the provided design.

### Project Tasks

- `0. README and objectives!`
  - An overview was introduced, and the task of writing the project `README.md`.
- `1. Header`
  - The initial html structure was made alongside with the creation of the `header` element and its specifications.
- `2. Banner`
  - Create a banner inside the header element.
- `3. Quote`
  - Under the banner create the quote block. This section is inside the main.
- `4. Videos`
  - Create video list in a new section.
- `5. Membership`
  - Create Membership sections similar to the videos section.
- `6. FAQ`
  - Create FAQ section inside main before the footer section.
- `7. Footer`
  - Create footer after the last section, outside of main.

- `Current HTML`
``` html
<!doctype html>
<html lang="en">

<head>
    <meta charset="UTF-8" />
    <title>HTML, advanced</title>
    <meta name="viewport" content="width=device-width,initial-scale=1" />
    <meta name="description" content="Clean, semantic HTML layout based on the provided design." />
</head>

<body>

    <!-- HEADER START -->
    <header>
        <a href="#">
            <img src="#" alt="logo">
        </a>

        <!-- NAVIGATION LINKS START -->
        <nav>
            <a href="#">COURSES</a>
            <a href="#">PRICING</a>
            <a href="#">LOGIN</a>
        </nav>
        <!-- NAVIGATION LINKS END -->

        <!-- HERO SECTION START -->
        <section>
            <div>
                <h1>Get schooled</h1>
                <p>
                    <span>SMILES</span>
                    <span>GRIN</span>
                    <span>LAUGH</span>
                </p>
                <button>REGISTER FOR FREE</button>
            </div>

            <!-- PRO TEAM START -->
            <div>
                <h2><span>Learn</span> from the pros</h2>
                <ul>
                    <li>
                        <img src="#" alt="image">
                        <h3>Phillip Massey</h3>
                        <p>
                            &#8810; Smile of the year &#8811
                            <br>
                            2018 - 2019
                        </p>
                    </li>
                    <li>
                        <img src="#" alt="image">
                        <h3>Nannie Lawrence</h3>
                        <p>
                            Best &#8810; little smile &#8811
                            <br>
                            2017
                        </p>
                    </li>
                    <li>
                        <img src="#" alt="image">
                        <h3>Bruce Walters</h3>
                        <p>
                            Best &#8810; Friend Smile &#8811
                            <br>
                            live performance 2019
                        </p>
                    </li>
                    <li>
                        <img src="#" alt="image">
                        <h3>Henry Hughes</h3>
                        <p>
                            &#8810; 24h smiles &#8811 winner
                            <br>
                            2016 - 2019
                        </p>
                    </li>
                </ul>
            </div>
            <!-- PRO TEAM END -->
        </section>
        <!-- HERO SECTION END -->

    </header>
    <!-- HEADER END -->

    <!-- MAIN START -->
    <main>

        <!-- QUOTE SECTION START -->
        <section>
            <figure>
                <img src="#" alt="is">
                <figcaption>
                    <blockquote>
                        &#8810; Those tutorials are concise and go straight to the point. I can’t think of a better
                        place to learn smiling. And it’s so fun! &#8811
                    </blockquote>
                    <!-- Initial research suggests the correct
                     tag for author name is address (including
                     author named class). If not correct, 
                     change to a span or closest equivalent -->
                    <address class="author">Person Name</address>
                    <p>weather presenter</p>
                </figcaption>
            </figure>
        </section>
        <!-- QUOTE SECTION END -->

        <!-- VIDEO SECTION START -->
        <section>
            <h1>Most <span>popular</span> tutorials</h1>
            <ul>
                <li>
                    <article>
                        <img src="#" alt="video">
                        <h2>Diagonal Smile</h2>
                        <p>Lorem ipsum dolor sit amet consectetur adipisicing elit.</p>
                        <footer>
                            <img src="#" alt="author">
                            <h3>Phillip Massey</h3>
                            <div>
                                <img src="#" alt="star" aria-hidden="true">
                                <img src="#" alt="star" aria-hidden="true">
                                <img src="#" alt="star" aria-hidden="true">
                                <img src="#" alt="star" aria-hidden="true">
                                <img src="#" alt="star" aria-hidden="true">
                                <p>8 min</p>
                            </div>
                        </footer>
                    </article>
                </li>
                <li>
                    <article>
                        <img src="#" alt="video">
                        <h2>Sad Smile</h2>
                        <p>Lorem ipsum dolor sit amet consectetur adipisicing elit.</p>
                        <footer>
                            <img src="#" alt="author">
                            <h3>Phillip Massey</h3>
                            <div>
                                <img src="#" alt="star" aria-hidden="true">
                                <img src="#" alt="star" aria-hidden="true">
                                <img src="#" alt="star" aria-hidden="true">
                                <img src="#" alt="star" aria-hidden="true">
                                <img src="#" alt="star" aria-hidden="true">
                                <p>8 min</p>
                            </div>
                        </footer>
                    </article>
                </li>
                <li>
                    <article>
                        <img src="#" alt="video">
                        <h2>Natural Smile</h2>
                        <p>Lorem ipsum dolor sit amet consectetur adipisicing elit.</p>
                        <footer>
                            <img src="#" alt="author">
                            <h3>Phillip Massey</h3>
                            <div>
                                <img src="#" alt="star" aria-hidden="true">
                                <img src="#" alt="star" aria-hidden="true">
                                <img src="#" alt="star" aria-hidden="true">
                                <img src="#" alt="star" aria-hidden="true">
                                <img src="#" alt="star" aria-hidden="true">
                                <p>8 min</p>
                            </div>
                        </footer>
                    </article>
                </li>
                <li>
                    <article>
                        <img src="#" alt="video">
                        <h2>Happy Smile</h2>
                        <p>Lorem ipsum dolor sit amet consectetur adipisicing elit.</p>
                        <footer>
                            <img src="#" alt="author">
                            <h3>Phillip Massey</h3>
                            <div>
                                <img src="#" alt="star" aria-hidden="true">
                                <img src="#" alt="star" aria-hidden="true">
                                <img src="#" alt="star" aria-hidden="true">
                                <img src="#" alt="star" aria-hidden="true">
                                <img src="#" alt="star" aria-hidden="true">
                                <p>8 min</p>
                            </div>
                        </footer>
                    </article>
                </li>
            </ul>
        </section>
        <!-- VIDEO SECTION END -->

        <!-- MEMBERSHIP SECTION START -->
        <section>
            <h1><span>Free</span> membership</h1>
            <ul>
                <li>
                    <img src="#" alt="smile">
                    <h2>Lorem ipsum</h2>
                    <p>Lorem ipsum dolor sit amet, consectetur adipisicing elit.</p>
                </li>
                <li>
                    <img src="#" alt="smile">
                    <h2>Lorem ipsum</h2>
                    <p>Lorem ipsum dolor sit amet, consectetur adipisicing elit.</p>
                </li>
                <li>
                    <img src="#" alt="smile">
                    <h2>Lorem ipsum</h2>
                    <p>Lorem ipsum dolor sit amet, consectetur adipisicing elit.</p>
                </li>
                <li>
                    <img src="#" alt="smile">
                    <h2>Lorem ipsum</h2>
                    <p>Lorem ipsum dolor sit amet, consectetur adipisicing elit.</p>
                </li>
            </ul>
            <button>REGISTER FOR FREE</button>
        </section>
        <!-- MEMBERSHIP SECTION END -->

        <!-- FAQ SECTION START -->
        <section>
            <h1>F.A.Q.</h1>
            <div>
                <div>
                    <article>
                        <h2>How does this work?</h2>
                        <p>Lorem ipsum dolor sit amet, consectetur adipisicing elit. Fuga asperiores iure blanditiis
                            quam quae atque. Repellendus animi vel aliquam porro esse eveniet. Esse, natus. Laudantium,
                            cum culpa? Dicta, in quis. Lorem ipsum dolor sit, amet consectetur adipisicing elit. Nemo,
                            quidem ipsum! Consequuntur deserunt provident tempore, eligendi perferendis cum aspernatur
                            culpa incidunt nihil voluptates sit inventore eveniet soluta! Quia, maxime molestias.</p>
                    </article>
                    <article>
                        <h2>How does this work?</h2>
                        <p>Lorem ipsum dolor sit amet, consectetur adipisicing elit. Fuga asperiores iure blanditiis
                            quam quae atque. Repellendus animi vel aliquam porro esse eveniet. Esse, natus. Laudantium,
                            cum culpa? Dicta, in quis. Lorem ipsum dolor sit, amet consectetur adipisicing elit. Nemo,
                            quidem ipsum! Consequuntur deserunt provident tempore, eligendi perferendis cum aspernatur
                            culpa incidunt nihil voluptates sit inventore eveniet soluta! Quia, maxime molestias.</p>
                    </article>
                </div>
                <div>
                    <article>
                        <h2>How does this work?</h2>
                        <p>Lorem ipsum dolor sit amet, consectetur adipisicing elit. Fuga asperiores iure blanditiis
                            quam quae atque. Repellendus animi vel aliquam porro esse eveniet. Esse, natus. Laudantium,
                            cum culpa? Dicta, in quis. Lorem ipsum dolor sit, amet consectetur adipisicing elit. Nemo,
                            quidem ipsum! Consequuntur deserunt provident tempore, eligendi perferendis cum aspernatur
                            culpa incidunt nihil voluptates sit inventore eveniet soluta! Quia, maxime molestias.</p>
                    </article>
                    <article>
                        <h2>How does this work?</h2>
                        <p>Lorem ipsum dolor sit amet, consectetur adipisicing elit. Fuga asperiores iure blanditiis
                            quam quae atque. Repellendus animi vel aliquam porro esse eveniet. Esse, natus. Laudantium,
                            cum culpa? Dicta, in quis. Lorem ipsum dolor sit, amet consectetur adipisicing elit. Nemo,
                            quidem ipsum! Consequuntur deserunt provident tempore, eligendi perferendis cum aspernatur
                            culpa incidunt nihil voluptates sit inventore eveniet soluta! Quia, maxime molestias.</p>
                    </article>
                </div>
            </div>
        </section>
        <!-- FAQ SECTION END -->

    </main>
    <!-- MAIN END -->

    <!-- FOOTER START -->
    <footer>
        <div>
            <div>
                <img src="#" alt="logo">
                <nav>
                    <a href="#"><img src="#" alt="facebook"></a>
                    <a href="#"><img src="#" alt="twitter"></a>
                    <a href="#"><img src="#" alt="instagram"></a>
                </nav>
            </div>
            <p>@smileschool 2020</p>
        </div>
    </footer>
    <!-- FOOTER END -->

</body>

</html>
```

### Designer File

The design file for this project is available on [Figma](https://www.figma.com/design/XrEAsu1vQj5fhVaNG38d2W/Homepage?node-id=0-1&t=6gcfvq0WjRGjQils-0).

### Fonts & Values

**Important Notes:**
- **Fonts:** Fonts utilized for this project can be downloaded here:
  - [Source Sans Pro](https://www.fontsquirrel.com/fonts/source-sans-pro)
  - [Spin Cycle OT](https://www.fontsquirrel.com/fonts/Spin-Cycle-OT)

- **Values:** Some design values are specified as floats. These will be rounded as needed to achieve a functional and accurate layout.
