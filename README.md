## What is Caesar's Cipher?

Caesar's Cipher is an encryption technique - one of the simplest and oldest one. It replaces each letter of a message by another letter X positions after.

This technique was created by Julius Caesar and used to hide messages about Roma's military strategies.

The technique may have been effective for Caesar's enemies, but can't fool anyone nowadays.

## How does it work?

It's pretty simple. If you want to **encode** a message using Caesar's Cipher, you just need to get each letter and replace it by the letter that stays X positions after. **X**, in this context, is called **the key**.

Here is an example for an encryption with **key 3**:

```
Stanley is cool <-- original message
Vwdqohb lv frro <-- encrypted message

19 + 3 = 22
^^   ^   ^^
S   key  V
```

If you want to **decode** a message, just do the inverse: subtract the given key from each letter.

```
22 - 3 = 19
^^   ^   ^^
V   key  S
```
