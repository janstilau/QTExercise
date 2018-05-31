const AddressBook = require('./addressbook_pb')
const fs = require('fs')

let byteArray = fs.readFileSync('/Users/hoolai/QTDemo/protoJSDemo/data.base')
// console.log(AddressBook)
// let addressBooks = AddressBook.deserializeBinary(byteArray)
// console.log(AddressBook)

let book =  AddressBook.AddressBook
console.log(book.deserializeBinary(new Uint8Array(byteArray)))

