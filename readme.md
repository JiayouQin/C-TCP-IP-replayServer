A simple replay Server which accepts TCP/IP connection.
first 2 bytes of unsigned short will be replayed acting as message length header.
then message will be relayed to every connection on the server.

(on client side send 2 bytes header in little order then send whole message.)
