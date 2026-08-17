# builder
FROM gcc:13-bookworm AS builder

WORKDIR /app
COPY main.c .

RUN gcc -Wall -Wextra -pthread -o tcp-echo-server main.c

# Runner
FROM debian:bookworm-slim

WORKDIR /app
COPY --from=builder /app/tcp-echo-server .

ENV PORT=8080
EXPOSE 8080

CMD ["./tcp-echo-server"]