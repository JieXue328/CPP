### Intent
* Provide a way to access the elements of an aggregate object sequentially without exposing its underlying representation.
* The C++ and Java standard library abstraction that makes it possible to decouple collection classes and algorithms.
* Promote to "full object status" the traversal of a collection.
* Polymorphic traversal
### Problem
Need to "abstract" the traversal of wildly different data structures so that algorithms can be defined that are capable of interfacing with each transparently

Eg: Next/Previous buttons on TV

https://sourcemaking.com/design_patterns/iterator     
https://sourcemaking.com/design_patterns/iterator/cpp/1     
https://sourcemaking.com/design_patterns/iterator/cpp/2     
