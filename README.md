DDD Mode Pacemaker - COMPSYS 303
Team 20: Eason Chang, Eric Chen

Project Overview
This project is a DDD mode pacemaker implemented on an Altera DE2 board using a NIOS II processor. It demonstrates and compares two distinct implementation approaches:
  Implementations:
    SCCharts: A model-driven approach using statecharts.
    C: A manual implementation using timestamp-based timing.
  Operating Modes:
    Button Mode: Manual testing using the board's push buttons.
    UART Mode: Automated testing via a virtual heart simulator (heart.exe).

Timing Parameters
  AVI: 300ms (Atrioventricular Interval)
  AEI: 800ms (Atrial Escape Interval)
  PVARP: 50ms (Post-Ventricular Atrial Refractory Period)
  VRP: 150ms (Ventricular Refractory Period)
  LRI: 950ms (Lower Rate Interval, ~63 bpm)
  URI: 900ms (Upper Rate Interval, ~67 bpm)

How to Use
Select the desired operating mode using the hardware switches:
  SW1=0, SW0=0: Button Mode + SCCharts
  SW1=1, SW0=0: Button Mode + C
  SW1=0, SW0=1: UART Mode + SCCharts
  SW1=1, SW0=1: UART Mode + C

Button Mode (SW0 = 0)
This mode allows for manual hardware testing.
  KEY1: Simulates an Atrial Sense (AS).
  KEY0: Simulates a Ventricular Sense (VS).
  
  Red LEDs: Indicate a sensed event (AS/VS).
  Green LEDs: Indicate a paced event (AP/VP).

UART Mode (SW0 = 1)
This mode interfaces with the heart.exe virtual heart simulator.
The pacemaker will now automatically interact with the virtual heart.
