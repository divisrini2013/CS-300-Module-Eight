# CS-300-Module-Eight


What was the problem you were solving in the projects for this course?

Project One evaluated and created vectors, hash tables, and binary search trees. Each data format was tested for course management system time complexity and memory use. Each data structure's search, insertion, and deletion efficiency must be examined. I learned their strengths and weaknesses by creating and evaluating structures for different software use cases in the problem-solving activity.
Project Two created a map-based course administration system for IDs, titles, and prerequisites. I had to import course data from a file, alphabetize, and display it for the project. We wanted to arrange and explore course offerings by sorting. This solution organizes and displays courses using correct data structures to fulfill user demands. This project organized course data and made the system easy to use, providing a clear list of courses and information.

How did you approach the problem? Consider why data structures are important to understand.

I began by studying data structures and their characteristics. Project One asked me to choose data structures for each action. Vectors were optimal for ordered lists with random access, hash tables for key-based access, and binary search trees for sorted data with logarithmic insertion and searching time. This detailed look at data structures helped me understand their impact on program performance and memory economy.
Project Two stored courses in a C++ balanced binary search tree map, enabling me to sort by key ordering. This method demonstrated the need of job-specific data structures. Using a map to sort uploaded courses saved me from building an algorithm. The right data format makes the program efficient, easy to construct, and scalable.
Learn data structures to improve code performance, readability, and maintainability. Good data structures speed up and reduce errors, whereas poor ones slow down and make programs harder to maintain. Real-world systems that manage large data and require scalability need this understanding.

How did you overcome any roadblocks you encountered while going through the activities or project?

One of my main Project One problems was understanding complex course requirement links. I authenticated requirements to prevent courses from referencing unfulfilled ones. Validation tests were needed before adding course data requirements. I avoided data integrity concerns and errors by using helper methods to cross-reference prerequisites with imported courses.
In Project Two, file entry was hard. File-based course data and variable-length prerequisite lists were confusing. I had to make sure the parsing process could handle courses with no prerequisites and those with many. I handle bad or missing data. To solve this, robust parsing algorithms incorporated different data topologies and checks to elegantly handle missing or incomplete data. After learning edge cases, I could design software.

How has your work on this project expanded your approach to designing software and developing programs?

These projects have substantially enhanced my software design and development abilities by helping me understand how data structures impact system performance and scalability. I learned that software design requires tool selection, architecture, and functional code. Understanding that hash tables require O(1) time for lookups and binary search trees take O(log n) time may help me organize my apps.
These projects also taught me software design is iterative. Breaking problems down is my skill. I broke Project Two into importing courses, processing prerequisites, and sorting and exporting course data. My apps are better structured, debugged, and maintained using this framework.

How has your work on this project evolved the way you write programs that are maintainable, readable, and adaptable?

This project altered my reliable, legible, and adaptable software development. Key findings include modular code's importance. By breaking down operations like loading data, confirming prerequisites, and reporting course material, I made my code modular and manageable. Testing and troubleshooting are easier since each function may be checked independently.
I strive to write changeable code. My program is more flexible because I handle errors, check inputs, and make data structures adaptable. Course additions and removals are easy using a map without altering the logic. My code has detailed comments and documentation to promote readability. This is crucial for me and future coders.
I've also learned how to anticipate and fix data errors from these endeavors. This forward-thinking strategy makes my programs durable, effective, and ready for unexpected events.
