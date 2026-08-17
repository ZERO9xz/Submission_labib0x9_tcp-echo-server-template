# tcp-echo-server-template

docker build -t tcp-echo-server .
docker run --rm -p 8080:8080 -e PORT=8080 tcp-echo-server

printf "hello world" | nc -N localhost 8080