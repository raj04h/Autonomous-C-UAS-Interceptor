import asyncio
import json
import websockets


async def main():

    async with websockets.connect("ws://127.0.0.1:8000/ws/telemetry") as websocket:

        print("Connected")

        while True:

            message = await websocket.recv()

            data = json.loads(message)

            print(data)


asyncio.run(main())
