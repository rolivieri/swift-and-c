import module2
import module3
import Foundation

print("Hello, world!")
let object:AClass = AClass()
let result = module3.add(5, 10)
print(result)
var p = Person()
p.age = 90
let lastName = ("Phillips" as NSString).utf8String
var buffer = UnsafeMutablePointer<Int8>(mutating: lastName)
p.lastName = buffer
module3.savePerson(p)
