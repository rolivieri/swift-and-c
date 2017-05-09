import module2
import module3

print("Hello, world!")
let object:AClass = AClass()
let result = module3.add(5, 10)
print(result)
var p = Person()
p.age = 90
var buffer = UnsafeMutablePointer<Int8>(mutating: "Phillips")
p.lastName = buffer
print("p = \(p)")
module3.savePerson(p)
