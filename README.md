# Emoji-OOP
Emoji Research for my OOP classes

## Byte Size

According to the UTF-8 specification, number of bytes in UTF-8 character can be calculated as follows:

|Number of bytes|First code point|Last code point|Byte 1|Byte 2|Byte 3|Byte 4|Byte 5|Byte 6|
|--- |--- |--- |--- |--- |--- |--- |--- |--- |
|1|U+0000|U+007F|0xxxxxxx||||||
|2|U+0080|U+07FF|110xxxxx|10xxxxxx|||||
|3|U+0800|U+FFFF|1110xxxx|10xxxxxx|10xxxxxx||||
|4|U+10000|U+1FFFFF|11110xxx|10xxxxxx|10xxxxxx|10xxxxxx|||
|5|U+200000|U+3FFFFFF|111110xx|10xxxxxx|10xxxxxx|10xxxxxx|10xxxxxx||
|6|U+4000000|U+7FFFFFFF|1111110x|10xxxxxx|10xxxxxx|10xxxxxx|10xxxxxx|10xxxxxx|


## Emoji Codes & Sizes

| Emoji | Unicode Code | Binary (using Emoji app I’ve written) | Size |
| ----- | ------------ | ------ | ---- |
| 🙂    | U+1F642      | 11110000 10011111 10011001 10000010 | 4 bytes |
| 🥴    | U+1F974      | 11110000 10011111 10100101 10110100 | 4 bytes |
| 🤤    | U+1F924      | 11110000 10011111 10100100 10100100 | 4 bytes |
| 😛    | U+1F61B      | 11110000 10011111 10011000 10011011 | 4 bytes |
| 💳    | U+1F4B3      | 11110000 10011111 10010010 10110011 | 4 bytes |

[💻 Emoji app I’ve written]()
