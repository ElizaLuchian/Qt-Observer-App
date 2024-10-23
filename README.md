# Qt-Observer-App
<ul>
Welcome to the DeliverNow package delivery simulation app! This project demonstrates a simulation of couriers delivering packages to recipients, with real-time tracking and management of undelivered packages. The app is built using the Qt framework for the graphical user interface (GUI) and implements the Observer design pattern to manage real-time updates between couriers, packages, and the system.

Each courier is assigned to deliver packages in a specific zone, and the application tracks which packages have been delivered and which are still pending. The Observer design pattern is used to ensure that updates made to packages or couriers (such as package delivery) are reflected throughout the system in real-time.
This application also reads input from files that contain information about couriers and packages, and updates those files when the program exits.
</ul>


Technologies
<ul>
<li>Qt Framework: Provides the GUI and facilitates window management, event handling, and the use of signals and slots (used in the Observer pattern).</li>
<li>C++: The programming language used for the core logic and integration with the Qt framework.</li>
<li>Observer Design Pattern: Used to implement the real-time updates and communication between various components in the system.</li>
</ul>
