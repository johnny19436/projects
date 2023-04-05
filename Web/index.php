<?php 
session_start();

	include("connection.php");
	include("functions.php");

	$user_data = check_login($con);

?>


<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <meta http-equiv="X-UA-Compatible" content="ie=edge">
  <link rel="stylesheet" href="css/index.css">
  <link href="https://fonts.googleapis.com/css2?family=Roboto:wght@400;700&display=swap" rel="stylesheet">
  <title>Document</title>
</head>
<body>
  <header class="header">
    <a href="#">
      <img src="img/index/logo.png" alt="YouTube Logo" class="youtube-logo" />
    </a>
    <form class="search-bar">
      <input class="search-input" type="search" placeholder="Search" aria-label="Search" />
      <button type="submit" class="search-btn">
        <img src="img/index/magnify.svg" />
      </button>
    </form>
    <div class="menu-icons">
      <a href="#">
        <img src="img/index/video-plus.svg" alt="Upload Video" />
      </a>
      <a href="#">
        <img src="img/index/apps.svg" alt="Apps" />
      </a>
      <a href="#">
        <img src="img/index/bell.svg" alt="Notifications" />
      </a>
      <a href="#">
        <img class="menu-channel-icon" src="http:///unsplash.it/36/36?gravity=center" alt="Your Channel" />
      </a>
    </div>
  </header>
  <div class="categories">
    <section class="category-section">
      <button class="category active">All</button>
      <button class="category">Category 1</button>
      <button class="category">Category 2</button>
      <button class="category">Category 3</button>
      <button class="category">Category 4</button>
      <button class="category">Category 5</button>
      <button class="category">Category 6</button>
      <button class="category">Category 7</button>
      <button class="category">Category 8</button>
      <button class="category">Category 9</button>
    </section>
  </div>
  <div class="videos"> 
    <section class="video-section">
      <article class="video-container">
        <a href="#" class="thumbnail" data-duration="12:24">
          <img class="thumbnail-image" src="http://unsplash.it/250/150?gravity=center" />
        </a>
        <div class="video-bottom-section">
          <a href="#">
            <img class="channel-icon" src="http://unsplash.it/36/36?gravity=center" />
          </a>
          <div class="video-details">
            <a href="#" class="video-title">Video Title</a>
            <a href="#" class="video-channel-name">Channel Name</a>
            <div class="video-metadata">
              <span>12K views</span>
              •
              <span>1 week ago</span>
            </div>
          </div>
        </div>
      </article>
      <article class="video-container">
        <a href="#" class="thumbnail" data-duration="12:24">
          <img class="thumbnail-image" src="http://unsplash.it/250/150?gravity=center" />
        </a>
        <div class="video-bottom-section">
          <a href="#">
            <img class="channel-icon" src="http://unsplash.it/36/36?gravity=center" />
          </a>
          <div class="video-details">
            <a href="#" class="video-title">Video Title</a>
            <a href="#" class="video-channel-name">Channel Name</a>
            <div class="video-metadata">
              <span>12K views</span>
              •
              <span>1 week ago</span>
            </div>
          </div>
        </div>
      </article>
      <article class="video-container">
        <a href="#" class="thumbnail" data-duration="12:24">
          <img class="thumbnail-image" src="http://unsplash.it/250/150?gravity=center" />
        </a>
        <div class="video-bottom-section">
          <a href="#">
            <img class="channel-icon" src="http://unsplash.it/36/36?gravity=center" />
          </a>
          <div class="video-details">
            <a href="#" class="video-title">Video Title</a>
            <a href="#" class="video-channel-name">Channel Name</a>
            <div class="video-metadata">
              <span>12K views</span>
              •
              <span>1 week ago</span>
            </div>
          </div>
        </div>
      </article>
      <article class="video-container">
        <a href="#" class="thumbnail" data-duration="12:24">
          <img class="thumbnail-image" src="http://unsplash.it/250/150?gravity=center" />
        </a>
        <div class="video-bottom-section">
          <a href="#">
            <img class="channel-icon" src="http://unsplash.it/36/36?gravity=center" />
          </a>
          <div class="video-details">
            <a href="#" class="video-title">Video Title</a>
            <a href="#" class="video-channel-name">Channel Name</a>
            <div class="video-metadata">
              <span>12K views</span>
              •
              <span>1 week ago</span>
            </div>
          </div>
        </div>
      </article>
      <article class="video-container">
        <a href="#" class="thumbnail" data-duration="12:24">
          <img class="thumbnail-image" src="http://unsplash.it/250/150?gravity=center" />
        </a>
        <div class="video-bottom-section">
          <a href="#">
            <img class="channel-icon" src="http://unsplash.it/36/36?gravity=center" />
          </a>
          <div class="video-details">
            <a href="#" class="video-title">Video Title</a>
            <a href="#" class="video-channel-name">Channel Name</a>
            <div class="video-metadata">
              <span>12K views</span>
              •
              <span>1 week ago</span>
            </div>
          </div>
        </div>
      </article>
      <article class="video-container">
        <a href="#" class="thumbnail" data-duration="12:24">
          <img class="thumbnail-image" src="http://unsplash.it/250/150?gravity=center" />
        </a>
        <div class="video-bottom-section">
          <a href="#">
            <img class="channel-icon" src="http://unsplash.it/36/36?gravity=center" />
          </a>
          <div class="video-details">
            <a href="#" class="video-title">Video Title</a>
            <a href="#" class="video-channel-name">Channel Name</a>
            <div class="video-metadata">
              <span>12K views</span>
              •
              <span>1 week ago</span>
            </div>
          </div>
        </div>
      </article>
    </section>
    <section class="video-section">
      <h2 class="video-section-title">
        Special Section
        <button class="video-section-title-close">&times;</button>
      </h2>
      <article class="video-container">
        <a href="#" class="thumbnail" data-duration="12:24">
          <img class="thumbnail-image" src="http://unsplash.it/250/150?gravity=center" />
        </a>
        <div class="video-bottom-section">
          <a href="#">
            <img class="channel-icon" src="http://unsplash.it/36/36?gravity=center" />
          </a>
          <div class="video-details">
            <a href="#" class="video-title">Video Title</a>
            <a href="#" class="video-channel-name">Channel Name</a>
            <div class="video-metadata">
              <span>12K views</span>
              •
              <span>1 week ago</span>
            </div>
          </div>
        </div>
      </article>
      <article class="video-container">
        <a href="#" class="thumbnail" data-duration="12:24">
          <img class="thumbnail-image" src="http://unsplash.it/250/150?gravity=center" />
        </a>
        <div class="video-bottom-section">
          <a href="#">
            <img class="channel-icon" src="http://unsplash.it/36/36?gravity=center" />
          </a>
          <div class="video-details">
            <a href="#" class="video-title">Video Title</a>
            <a href="#" class="video-channel-name">Channel Name</a>
            <div class="video-metadata">
              <span>12K views</span>
              •
              <span>1 week ago</span>
            </div>
          </div>
        </div>
      </article>
      <article class="video-container">
        <a href="#" class="thumbnail" data-duration="12:24">
          <img class="thumbnail-image" src="http://unsplash.it/250/150?gravity=center" />
        </a>
        <div class="video-bottom-section">
          <a href="#">
            <img class="channel-icon" src="http://unsplash.it/36/36?gravity=center" />
          </a>
          <div class="video-details">
            <a href="#" class="video-title">Video Title</a>
            <a href="#" class="video-channel-name">Channel Name</a>
            <div class="video-metadata">
              <span>12K views</span>
              •
              <span>1 week ago</span>
            </div>
          </div>
        </div>
      </article>
      <article class="video-container">
        <a href="#" class="thumbnail" data-duration="12:24">
          <img class="thumbnail-image" src="http://unsplash.it/250/150?gravity=center" />
        </a>
        <div class="video-bottom-section">
          <a href="#">
            <img class="channel-icon" src="http://unsplash.it/36/36?gravity=center" />
          </a>
          <div class="video-details">
            <a href="#" class="video-title">Video Title</a>
            <a href="#" class="video-channel-name">Channel Name</a>
            <div class="video-metadata">
              <span>12K views</span>
              •
              <span>1 week ago</span>
            </div>
          </div>
        </div>
      </article>
      <article class="video-container">
        <a href="#" class="thumbnail" data-duration="12:24">
          <img class="thumbnail-image" src="http://unsplash.it/250/150?gravity=center" />
        </a>
        <div class="video-bottom-section">
          <a href="#">
            <img class="channel-icon" src="http://unsplash.it/36/36?gravity=center" />
          </a>
          <div class="video-details">
            <a href="#" class="video-title">Video Title</a>
            <a href="#" class="video-channel-name">Channel Name</a>
            <div class="video-metadata">
              <span>12K views</span>
              •
              <span>1 week ago</span>
            </div>
          </div>
        </div>
      </article>
      <article class="video-container">
        <a href="#" class="thumbnail" data-duration="12:24">
          <img class="thumbnail-image" src="http://unsplash.it/250/150?gravity=center" />
        </a>
        <div class="video-bottom-section">
          <a href="#">
            <img class="channel-icon" src="http://unsplash.it/36/36?gravity=center" />
          </a>
          <div class="video-details">
            <a href="#" class="video-title">Video Title</a>
            <a href="#" class="video-channel-name">Channel Name</a>
            <div class="video-metadata">
              <span>12K views</span>
              •
              <span>1 week ago</span>
            </div>
          </div>
        </div>
      </article>
    </section>
    <section class="video-section">
      <article class="video-container">
        <a href="#" class="thumbnail" data-duration="12:24">
          <img class="thumbnail-image" src="http://unsplash.it/250/150?gravity=center" />
        </a>
        <div class="video-bottom-section">
          <a href="#">
            <img class="channel-icon" src="http://unsplash.it/36/36?gravity=center" />
          </a>
          <div class="video-details">
            <a href="#" class="video-title">Video Title</a>
            <a href="#" class="video-channel-name">Channel Name</a>
            <div class="video-metadata">
              <span>12K views</span>
              •
              <span>1 week ago</span>
            </div>
          </div>
        </div>
      </article>
      <article class="video-container">
        <a href="#" class="thumbnail" data-duration="12:24">
          <img class="thumbnail-image" src="http://unsplash.it/250/150?gravity=center" />
        </a>
        <div class="video-bottom-section">
          <a href="#">
            <img class="channel-icon" src="http://unsplash.it/36/36?gravity=center" />
          </a>
          <div class="video-details">
            <a href="#" class="video-title">Video Title</a>
            <a href="#" class="video-channel-name">Channel Name</a>
            <div class="video-metadata">
              <span>12K views</span>
              •
              <span>1 week ago</span>
            </div>
          </div>
        </div>
      </article>
      <article class="video-container">
        <a href="#" class="thumbnail" data-duration="12:24">
          <img class="thumbnail-image" src="http://unsplash.it/250/150?gravity=center" />
        </a>
        <div class="video-bottom-section">
          <a href="#">
            <img class="channel-icon" src="http://unsplash.it/36/36?gravity=center" />
          </a>
          <div class="video-details">
            <a href="#" class="video-title">Video Title</a>
            <a href="#" class="video-channel-name">Channel Name</a>
            <div class="video-metadata">
              <span>12K views</span>
              •
              <span>1 week ago</span>
            </div>
          </div>
        </div>
      </article>
      <article class="video-container">
        <a href="#" class="thumbnail" data-duration="12:24">
          <img class="thumbnail-image" src="http://unsplash.it/250/150?gravity=center" />
        </a>
        <div class="video-bottom-section">
          <a href="#">
            <img class="channel-icon" src="http://unsplash.it/36/36?gravity=center" />
          </a>
          <div class="video-details">
            <a href="#" class="video-title">Video Title</a>
            <a href="#" class="video-channel-name">Channel Name</a>
            <div class="video-metadata">
              <span>12K views</span>
              •
              <span>1 week ago</span>
            </div>
          </div>
        </div>
      </article>
      <article class="video-container">
        <a href="#" class="thumbnail" data-duration="12:24">
          <img class="thumbnail-image" src="http://unsplash.it/250/150?gravity=center" />
        </a>
        <div class="video-bottom-section">
          <a href="#">
            <img class="channel-icon" src="http://unsplash.it/36/36?gravity=center" />
          </a>
          <div class="video-details">
            <a href="#" class="video-title">Video Title</a>
            <a href="#" class="video-channel-name">Channel Name</a>
            <div class="video-metadata">
              <span>12K views</span>
              •
              <span>1 week ago</span>
            </div>
          </div>
        </div>
      </article>
      <article class="video-container">
        <a href="#" class="thumbnail" data-duration="12:24">
          <img class="thumbnail-image" src="http://unsplash.it/250/150?gravity=center" />
        </a>
        <div class="video-bottom-section">
          <a href="#">
            <img class="channel-icon" src="http://unsplash.it/36/36?gravity=center" />
          </a>
          <div class="video-details">
            <a href="#" class="video-title">Video Title</a>
            <a href="#" class="video-channel-name">Channel Name</a>
            <div class="video-metadata">
              <span>12K views</span>
              •
              <span>1 week ago</span>
            </div>
          </div>
        </div>
      </article>
    </section>
  </div>
</body>
</html>