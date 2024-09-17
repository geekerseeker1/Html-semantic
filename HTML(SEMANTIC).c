<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Responsive Web Design</title>
    <link rel="stylesheet" href="style.css">
</head>
<body>
    <header>
        <div class="logo">
            <img src="logo.png" alt="Logo">
        </div>
        <nav>
            <ul>
                <li><a href="#">Home</a></li>
                <li><a href="#">Blog</a></li>
                <li><a href="#">About</a></li>
                <li><a href="#">Contact</a></li>
            </ul>
        </nav>
    </header>

    <section class="hero">
        <div class="hero-text">
            <h1>Title</h1>
            <p>Lorem ipsum dolor sit amet, consectetur adipiscing elit.</p>
        </div>
    </section>

    <section class="content">
        <div class="article">
            <h2>What is Lorem Ipsum</h2>
            <p>Lorem Ipsum is simply dummy text of the printing and typesetting industry.</p>
        </div>
        <div class="article">
            <h2>What is Lorem Ipsum</h2>
            <p>Lorem Ipsum is simply dummy text of the printing and typesetting industry.</p>
        </div>
        <div class="article">
            <h2>What is Lorem Ipsum</h2>
            <p>Lorem Ipsum is simply dummy text of the printing and typesetting industry.</p>
        </div>
    </section>

    <section class="video-section">
        <div class="video-container">
            <video id="video1" width="320" height="240" controls>
                <source src="movie.mp4" type="video/mp4">
                Your browser does not support the video tag.
            </video>
            <button onclick="playPause('video1')">Play/Pause</button>
        </div>
        <!-- Add more videos here if needed -->
    </section>

    <footer>
        <p>&copy; 2024 Company. All Rights Reserved.</p>
        <ul>
            <li><a href="#">Privacy Policy</a></li>
            <li><a href="#">Terms of Service</a></li>
        </ul>
    </footer>

    <script src="script.js"></script>
</body>
</html>