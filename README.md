# employee-payroll-system
A beginner-friendly C++ console application for MIS students to manage employee attendance and payroll. Supports a This console application allows you to manage employee attendance, calculate payroll, and generate reports. It demonstrates **structs, vectors, file handling, and basic business logic**.dding employees, recording daily hours, calculating salaries, generating payroll reports, and saving data to a file. Perfect for learning and portfolio showcase.

## 🚀 Features
- Add new employees (ID, name, hourly rate)
- Record daily attendance (hours worked)
- Calculate payroll automatically
- Generate monthly payroll reports
- Save/load employee data to a file
- Simple, beginner-friendly console interface

## 🛠️ Tech Stack
- C++ (standard libraries)
- File I/O (`fstream`) for data persistence
- `struct` and `vector` for data management
- Console-based user interface

## 📂 Folder Structure
employee-payroll-system /
- main.cpp (Core program)
- employees.txt (Optional : generated data file)

## ⚡ How to Run
1. Clone or download the repository
2. Open `main.cpp` in any C++ IDE (e.g., Code::Blocks, Visual Studio, CLion)
3. Compile and run
4. Use the menu to:
   - Add employees  
   - Record attendance  
   - Generate payroll report  
   - Save data to file
## 📝 Example
 ==============================
        MAIN MENU
==============================
1. Add Employee
2. Record Attendance
3. Payroll Report
4. Save & Exit
Choose an option: 1

Enter Employee ID: 101
Enter Employee Name: John Doe
Enter Hourly Rate: 15

==============================
      Employee Added ✅
==============================
ID: 101
Name: John Doe
Hourly Rate: $15.00
------------------------------

==============================
        MAIN MENU
==============================
1. Add Employee
2. Record Attendance
3. Payroll Report
4. Save & Exit
Choose an option: 2

Enter Employee ID: 101
Hours worked today: 8

Attendance recorded successfully!
------------------------------

==============================
        MAIN MENU
==============================
1. Add Employee
2. Record Attendance
3. Payroll Report
4. Save & Exit
Choose an option: 3

==============================
        PAYROLL REPORT
==============================
ID    Name                 Hours     Salary    
----------------------------------------
101   John Doe             8         120       
------------------------------

==============================
        MAIN MENU
==============================
1. Add Employee
2. Record Attendance
3. Payroll Report
4. Save & Exit
Choose an option: 4

Data saved to employees.txt
Exiting program...


## 📄 License
This project is licensed under the **MIT License**. See the [LICENSE](LICENSE) file for details.
