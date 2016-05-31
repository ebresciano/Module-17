//: Playground - noun: a place where people can play

import UIKit

var str = "Hello, playground"


func convertToScientificNotation(number: Float) -> String {
    
    var myNumber = Float()
    var decimalNumber = NSDecimalNumber(float: myNumber)
    
    return "\(number) * 10^\(decimalNumber)"
    
}

convertToScientificNotation(8.9)

