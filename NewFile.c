<!DOCTYPE html>
<html>
<head>
  <title>My Simple Website</title>
  <style>
    body {
      margin: 0;
      padding: 0;
      font-family: Arial, sans-serif;
    }
    
    .banner {
      background-color: #333;
      color: #fff;
      padding: 20px;
      text-align: center;
    }
    
    .footer {
      background-color: #333;
      color: #fff;
      padding: 20px;
      text-align: center;
    }
    
    .container {
      max-width: 800px;
      margin: 0 auto;
      padding: 20px;
    }
    
    table {
      width: 100%;
      border-collapse: collapse;
    }
    
    th, td {
      padding: 10px;
      text-align: left;
      border-bottom: 1px solid #ddd;
    }
    
    th {
      background-color: #f2f2f2;
    }
    
    a {
      color: #fff;
      text-decoration: none;
    }
    
    a:hover {
      text-decoration: underline;
    }
  </style>
</head>
<body>
  <div class="banner">
    <h1>Welcome to My Website</h1>
  </div>
  
  <div class="container">
    <h2>Menu</h2>
    <ul>
      <li><a href="#gallery">Gallery</a></li>
      <li><a href="#contacts">Contacts</a></li>
    </ul>
    
    <h2 id="gallery">Gallery</h2>
    <!-- Add your gallery content here -->
    
    <h2 id="contacts">Contacts</h2>
    <table>
      <thead>
        <tr>
          <th>Name</th>
          <th>Email</th>
          <th>Phone</th>
        </tr>
      </thead>
      <tbody>
        <tr>
          <td>John Doe</td>
          <td>johndoe@example.com</td>
          <td>123-456-7890</td>
        </tr>
        <tr>
          <td>Jane Smith</td>
          <td>janesmith@example.com</td>
          <td>987-654-3210</td>
        </tr>
        <!-- Add more contacts if needed -->
      </tbody>
    </table>
  </div>
  
  <div class="footer">
    <p>&copy; 2023 My Website. All rights reserved.</p>
  </div>
</body>
</html>
