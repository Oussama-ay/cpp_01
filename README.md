# **CPP 01 :**

**Memory allocation**, **pointers to members**, **references**, and **switch statements**.

## **C++ Core Concepts — Module 01**

---

### **Memory Allocation :**

In C++, memory can be allocated in two main ways:

- **Stack Allocation**:
    - Automatic, fast, and managed by the compiler.
    - Memory is freed when the variable goes out of scope.
    - Example:
        
        ```cpp
        int x = 42; // stored on stack
        
        ```
        
- **Heap Allocation**:
    - Manual and flexible using `new` and `delete`.
    - You must free memory manually or risk a memory leak.
    - Example:
        
        ```cpp
        int* x = new int(42); // stored on heap
        delete x;
        
        ```
        

✅ Use **stack** for short-lived data, **heap** for dynamic/larger/long-lived data.

---

### **Pointers to Members :**

C++ allows you to point to nonstatic **member functions** or **data members** of a class.

- **Pointer to data member**:
    
    ```cpp
    class MyClass {
        public: int value;
    };
    
    int MyClass::*ptr = &MyClass::value;
    MyClass obj;
    obj.*ptr = 10;
    
    ```
    
- **Pointer to member function**:
    
    ```cpp
    class MyClass {
        public: void hello() { std::cout << "Hi\n"; }
    };
    
    void (MyClass::*funcPtr)() = &MyClass::hello;
    MyClass obj;
    (obj.*funcPtr)(); // calls hello()
    
    ```
    

---

### **References :**

References are **aliases** for existing variables. Once set, they **can’t be changed** to refer to another object.

```cpp
int a = 5;
int& ref = a;
ref = 10; // modifies 'a'

```

- Unlike pointers:
    - No `nullptr`
    - No dereferencing
    - Must be initialized when declared

---

### **Switch Statements :**

Used to select a block of code to execute among many options based on an **integral or enum value**.

```cpp
int level = 2;
switch(level) {
    case 1: std::cout << "Low\n"; break;
    case 2: std::cout << "Medium\n"; break;
    case 3: std::cout << "High\n"; break;
    default: std::cout << "Unknown\n";
}

```

- Only works with: `int`, `char`, `enum` (not `std::string` directly).
- Fall-through happens if `break` is omitted.

✅ Used for **efficient control flow** over multiple cases.

---

### **File Management :**

In C++, file handling is done using classes from the `<fstream>` header.

- **Types of File Streams**:
    - `ifstream` – for reading files.
    - `ofstream` – for writing files.
    - `fstream` – for both reading and writing.
- **Opening a File**:
    - Use `.open()` or constructors to open files.
    - Modes: `ios::in`, `ios::out`, `ios::app`, `ios::binary`, `ios::trunc`, etc.
    
    ```cpp
    // opens for writing
    ofstream file("example.txt");
    fstream file("example.txt", ios::in);
    // opens for reading
    ifstream file("example.txt");
    fstream file("example.txt", ios::out);
    ```
    
- **Reading/Writing**:
    - Use `<<` to write, `>>` or `getline()` to read.
    
    ```cpp
    file << "Hello";      // write
    file >> data;         // read word
    getline(file, data);  // read line
    ```
    
- **Closing a File**:
    - Always close files using `.close()` to avoid memory/resource leaks.
    
    ```cpp
    file.close();
    ```
    

---

### **Orthodox Canonical Form (Preview)**

Used from Module 02 onward, but important to mention:

A class should have:

1. **Default constructor**
2. **Copy constructor**
3. **Copy assignment operator**
4. **Destructor**

This ensures proper object copying, assignment, and destruction.
