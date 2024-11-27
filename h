<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Romeo and Juliet</title>
    <style>
        /* General Styles */
        body {
            font-family: 'Arial', sans-serif;
            margin: 0;
            padding: 0;
            background-color: #f4f4f9;
            color: #333;
            line-height: 1.6;
        }
        header {
            background-color: #4a90e2;
            color: white;
            padding: 20px 0;
            text-align: center;
        }
        header h1 {
            margin: 0;
        }
        nav {
            background-color: #333;
            padding: 10px;
            text-align: center;
        }
        nav a {
            color: white;
            text-decoration: none;
            margin: 0 15px;
            font-size: 18px;
        }
        nav a:hover {
            text-decoration: underline;
        }
        .container {
            width: 80%;
            margin: 20px auto;
        }
        section {
            margin: 20px 0;
            padding: 20px;
            background: white;
            border-radius: 8px;
            box-shadow: 0 4px 6px rgba(0, 0, 0, 0.1);
        }
        footer {
            background-color: #4a90e2;
            color: white;
            text-align: center;
            padding: 10px;
            margin-top: 20px;
        }
        img {
            max-width: 100%;
            height: auto;
            display: block;
            margin: 20px auto;
        }
        .quote {
            font-style: italic;
            background: #f9f9f9;
            padding: 15px;
            border-left: 5px solid #4a90e2;
            margin: 20px 0;
        }
        .characters ul {
            list-style-type: square;
            margin: 0;
            padding-left: 20px;
        }
        .characters ul li {
            margin: 10px 0;
        }
        .themes div {
            margin-bottom: 20px;
        }
    </style>
</head>
<body>
    <!-- Header -->
    <header>
        <h1>Romeo and Juliet</h1>
        <p>A Shakespearean Tragedy</p>
    </header>

    <!-- Navigation Bar -->
    <nav>
        <a href="#about">About</a>
        <a href="#characters">Characters</a>
        <a href="#themes">Themes</a>
        <a href="#quotes">Quotes</a>
        <a href="#gallery">Gallery</a>
    </nav>

    <div class="container">
        <!-- About Section -->
        <section id="about">
            <h2>About the Play</h2>
            <p><em>Romeo and Juliet</em> is one of William Shakespeare's most famous plays. Written in the late 16th century, it tells the tragic love story of two young lovers from feuding families: the Montagues and the Capulets. Set in Verona, Italy, the play explores themes of love, fate, family loyalty, and the destructive power of hatred.</p>
            <img src="verona.jpg" alt="A view of Verona, Italy">
        </section>

        <!-- Characters Section -->
        <section id="characters" class="characters">
            <h2>Main Characters</h2>
            <ul>
                <li><strong>Romeo Montague</strong>: The passionate and romantic protagonist, deeply in love with Juliet.</li>
                <li><strong>Juliet Capulet</strong>: A young woman of Verona, intelligent, courageous, and devoted to Romeo.</li>
                <li><strong>Mercutio</strong>: Romeo's witty and loyal friend, who often acts as a comic relief.</li>
                <li><strong>Tybalt Capulet</strong>: Juliet's hot-headed cousin, always seeking a fight.</li>
                <li><strong>The Nurse</strong>: Juliet's confidante, who supports her relationship with Romeo.</li>
            </ul>
        </section>

        <!-- Themes Section -->
        <section id="themes" class="themes">
            <h2>Key Themes</h2>
            <div>
                <h3>1. Love</h3>
                <p>The play celebrates the beauty and intensity of love, but also explores its complications and tragic outcomes.</p>
            </div>
            <div>
                <h3>2. Fate</h3>
                <p>The concept of fate is central to the play. Romeo and Juliet are referred to as "star-crossed lovers," highlighting the inevitability of their tragedy.</p>
            </div>
            <div>
                <h3>3. Family and Feud</h3>
                <p>The ongoing conflict between the Montagues and the Capulets sets the stage for the play's tragic events.</p>
            </div>
        </section>

        <!-- Quotes Section -->
        <section id="quotes">
            <h2>Famous Quotes</h2>
            <blockquote class="quote">
                "But, soft! what light through yonder window breaks? It is the east, and Juliet is the sun." - Romeo
            </blockquote>
            <blockquote class="quote">
                "O Romeo, Romeo! Wherefore art thou Romeo?" - Juliet
            </blockquote>
            <blockquote class="quote">
                "A plague o' both your houses!" - Mercutio
            </blockquote>
        </section>

        <!-- Gallery Section -->
        <section id="gallery">
            <h2>Gallery</h2>
            <p>Scenes from <em>Romeo and Juliet</em>:</p>
            <img src="romeo-and-juliet.jpg" alt="Romeo and Juliet balcony scene">
            <img src="duel.jpg" alt="The duel between Tybalt and Mercutio">
        </section>
    </div>

    <!-- Footer -->
    <footer>
        <p>© 2024 Romeo and Juliet Fan Page. Created with Love.</p>
    </footer>
</body>
</html>
