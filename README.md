Reference C documents for transmission of structures in a RTOS environment does not rely on any sort of serialization.
While this is usable provided that the server and client are compiled exactly the same way, this presents issues where
any changes to the compiler could cause issues. This method also requires manual padding of packets.

This new method relies on a basic serializatin protocol called "Binn":
https://github.com/liteserver/binn

Serialization functions are also split into seperate sections for ease of access.