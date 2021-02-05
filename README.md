<h1> Humidity-Sensor-Project </h1>
<ul>
  <li> Author: Stefan Roland Schwingenschlögl
  <li> email: stefan.roland.schwingenschloegl@gmail.com
</ul>
<hr>

<h2>Summary</h2>
<p>In this project I will try to collect data on my own. I will use an Elegoo Uno Microcontroller equipped with an DHT22 Temperature and Humidity Sensor. Since I want to analyse the values on my computer and see some sort of history in the changes of the values, I want to transfer the values of the microcontroller to my PC. Because I do not want to have the Microcontroller permanently connected to my laptop by cable for reasons of convenience and in order not to falsify the values myself, I prefer wireless transfer. Therefore, I will use a HC-05 Bluetooth module to send the data to my laptop and write it into a relational Microsoft SQL Express Database. In the last step I want to create a custom dashboard in plotly which will display the data in desired visualisations.</p>

<hr>

<h2>Short Description of files in this project</h2>
<p>
  <ol>
    <li> <a href = "https://github.com/stefan-schwingenschloegl/Humidity-Sensor-Project/blob/main/Arduino_Send_Data/Arduino_Send_Data.ino" target="_blank"><strong>Arduino_Send_Data.ino</strong></a>: Arduino sketch where temperature and humidity are read via the DHT22 and sent via HC-05 module using Bluetooth
  </ol>  
</P>

<hr>
<h2>Personal Background about this project</h2>
<h3>Why does this project matter to me?</h3>
<p>The topic of this project is relevant to me because I have already had experience with mould in a flat in which I lived. To prevent mould, it is important to always pay attention to the humidity in the room. Here I want to have an overview of the current condition in my flat and also see the development over the last few hours. If the humidity is too high, you can prevent it by ventilating the flat.</p>

<h3>What do I want to learn with this project?</h3>
<p><ul>
  <li> I want to refresh my knowledge about <strong>rsensor data collection</strong>r with an microcontroller. I think microcontrollers are a very exciting way to generate data. With a little creativity, you can easily and cheaply realise interesting projects.
  <li> When you collect sensor data, you very quickly come into contact with the topic of <strong>streaming</strong>. I would like to get a first impression of the challenges and see where possible problems and difficulties can occur.
  <li> Until now, I have used either matplotlib or seaborn as a visualisation library. These are only suitable to a certain extent for dashboards. I want to <strong>learn how to use Plotly(+Dash)</strong> to generate interactive plots to create my own dashboards without business intelligence tools like PowerBI or Tableau.
  <li> In the course of this project I would also like to make first experiences with <strong>html</strong>.
  <li> In addition, I would like to use this project to get to know <strong>git</strong>. So far I do not have much experience with version control with git.
</ul></p>

